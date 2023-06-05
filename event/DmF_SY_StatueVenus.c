-------- EventFlow: DmF_SY_StatueVenus --------

Actor: GameSystemActor[down]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor[player]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventPlayerTalk', 'EventTriggerHealStaminaMax', 'EventTriggerPlayerRequestLookAtTheFront', 'EventPlayerWarpToTargetActor', 'EventTriggerPlayerLookAtObject', 'EventTriggerEmitXLink', 'EventTriggerPlayerResetBoneControl', 'EventPlayerWarpToTargetActorAndOnGround']
queries: ['EventQueryPlayerMaxLife']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/DmF_SY_StatueVenus/DmF_SY_StatueVenus_Link/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/DmF_SY_StatueVenus_Link.root.as', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerAddOrSubGameDataInt', 'EventTriggerExcludeNextTalkChoice']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataInt', 'EventQueryIsGameDataFloat', 'EventQueryIsGameDataBoolExp', 'EventQueryCheckIsGet']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerRequestAutoSave', 'EventTriggerSetShowStaminaGauge', 'EventWait', 'EventTriggerSetDisplayHeartGauge', 'EventCloseMinusMenu', 'EventTriggerShowMap', 'EventTriggerSetMessageAdditionalChoice', 'EventOpenNumDisplayForStatueVenus', 'EventCloseNumDisplayForStatueVenus', 'EventOpenSageWillDisplay', 'EventOpenSpiritOrbDisplay', 'EventTriggerSetNumDisplayForcus', 'EventTriggerEndNumDisplayAutoFocus', 'EventTriggerStartNumDisplayAutoFocusForStatueVenus', 'EventShowMap', 'EventTriggerControllerRumble', 'EventTriggerSetDisplayEnergyGauge', 'EventTriggerSetVisibleHeartGauge', 'EventTriggerSetVisibleStaminaGauge']
queries: ['EventQueryTalkChoice3', 'EventQueryTalkChoice2', 'EventQueryTalkChoice4', 'EventQueryTalkChoice8', 'EventQueryDisplayModeIsPro']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: ['EventTriggerAddOrRemovePouchContent']
queries: ['EventQueryIsExistInPouch']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraAnimationInstructionsForFlowchart', 'EventMoveToTargetPosCamera', 'EventTriggerCameraSavePoint']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventDoNothing', 'EventWait']
queries: ['EventQueryIsEventStarter']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Obj_StaminaUtuwa_A_01
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerEmitXLink', 'EventDoNothing', 'EventGoOffstageForUser', 'EventWarpToTargetActor']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/DmF_SY_StatueVenus/DmF_SY_StatueVenus_Item_StaminaUtuwa/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/DmF_SY_StatueVenus_Stamina.root.as', 'Position': [0.0, 5.0, 0.0], 'IsBindNearestActor': False}

Actor: Obj_HeartUtuwa_A_01
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerEmitXLink', 'EventDoNothing', 'EventGoOffstageForUser', 'EventWarpToTargetActor']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/DmF_SY_StatueVenus/DmF_SY_StatueVenus_Item_HeartUtuwa/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/DmF_SY_StatueVenus_Heart.root.as', 'Position': [0.0, 5.0, 0.0], 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['EventTriggerSetDiffuseAttenuate']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventTriggerProgressChallengeStep', 'EventTriggerSelectChallenge']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: PlayerRaulHand
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'EventMemberCreateMethod': 2, 'UseEventAS': 'Work/AS/Root/Event/Dm_SY_0035_Link_RaulSkin_RightHand.root.as', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventSystemActor[0]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventNodeEffectFade']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundRequestDucking', 'EventSoundReleaseDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor[NoLog]
entrypoint: None()
actions: ['EventTriggerSetMessageLogDisableSectionStart', 'EventTriggerSetMessageLogDisableSectionEnd']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void DmF_SY_StatueVenus() {
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UI_IsStatueVenusEvent', 'Value': True, 'Index': -1})

    fork {
        Obj_StaminaUtuwa_A_01.EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Obj_HeartUtuwa_A_01.EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Player.EventTriggerPlayerLookAtObject({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1, 'Target': 1, 'ActorName': ''})

        call Common.InitPlayStateTrigger({'IsUnequip': True, 'IsRidableGetOff': True})

    } {
        GameSystemActor[NoLog].EventTriggerSetMessageLogDisableSectionStart()
    }

    Npc_EventStarter.EventTriggerXLinkFadeByKey({'SLinkKey': '', 'ELinkKey': 'DmF_SY_StatueVenus_Aureole', 'IsKill': True})
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': '会話中', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
    EventWorldManagerController.EventTriggerSetDiffuseAttenuate({'MultiplyValue': 0.30000001192092896})
    if !EventSystemActor.EventQueryIsEventStarter({'InstanceName': '', 'IsCheckInstanceName': False, 'ActorName': 'SkyObj_GoddesStatue_A_01'}) {

        call Camera_SkyObj_GoddesStatue()


        call Start_MainChallenge_IsNotAfter_GoToAlterAfterGetRR()

    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'TwnObj_GoddesStatue_A_10', 'InstanceName': 'GoddessWisdom', 'IsCheckInstanceName': True}) {

        call Camera_GoddessWisdom()


        call Start_Normal()

    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'TwnObj_GoddesStatue_A_10', 'InstanceName': 'GoddessPower', 'IsCheckInstanceName': True}) {

        call Camera_GoddessPower()


        call Start_Normal()

    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'TwnObj_GoddesStatue_A_10', 'InstanceName': 'GoddessBrave', 'IsCheckInstanceName': True}) {

        call Camera_GoddessBrave()


        call Start_Normal()

    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'TwnObj_GoddesStatue_A_01', 'InstanceName': '', 'IsCheckInstanceName': False}) {

        call Camera_TwnObj_GoddesStatue()


        call Start_Connect_FirstIsland_IsNotCompleted()

    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'TwnObj_SuperGoddesStatue_A_01', 'InstanceName': '', 'IsCheckInstanceName': False}) {

        call Camera_TwnObj_SuperGoddesStatue()


        call Start_Normal()

    } else
    if !EventSystemActor.EventQueryIsEventStarter({'InstanceName': '', 'IsCheckInstanceName': False, 'ActorName': 'TwnObj_GoddesStatue_A_05'}) {

        call Camera_TwnObj_SmallGoddesStatuelink()


        call Start_Normal()

    } else
    if !EventSystemActor.EventQueryIsEventStarter({'InstanceName': '', 'IsCheckInstanceName': False, 'ActorName': 'TwnObj_GoddesStatue_A_04'}) {

        call Camera_TwnObj_SmallGoddesStatuedragon()


        call Start_Normal()

    } else {

        call Camera_TwnObj_SmallGoddesStatue()


        call Start_Normal()

    }
}

void GetAndFinish() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/DmF_SY_StatueVenus:talk11', 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventTriggerSetShowStaminaGauge({'IsDisplay': False, 'IsDisplayEx': False, 'EventName': 0})
    GameSystemActor.EventTriggerRequestAutoSave()
    Event63:
    GameSystemActor.EventCloseNumDisplayForStatueVenus({'IsWaitEnd': True})
    EventSystemActor[player].EventWait({'IsWaitEnd': True, 'Frames': 9})
    Npc_EventStarter.EventTriggerXLinkFadeByKey({'ELinkKey': 'DmF_SY_StatueVenus_Aureole', 'SLinkKey': '', 'IsKill': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Npc_GoddessStatue_Ganbari', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Npc_GoddessStatue_Heart', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UI_IsStatueVenusEvent', 'Index': -1, 'Value': False})
    EventWorldManagerController.EventTriggerSetDiffuseAttenuate({'MultiplyValue': 1.0})
    GameSystemActor[NoLog].EventTriggerSetMessageLogDisableSectionEnd()
}

void GetMatome() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/DmF_SY_StatueVenus:talk08', 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Num': -4, 'Actor': 'Obj_DungeonClearSeal', 'IsEquipDIrect': False, 'AttachmentActor': '', 'EffectType': 0, 'EffectValue': -1, 'IsSetOnlyEquipIndex': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:Bgmミュート(フェード普通)', 'CommandLife': 2, 'DuckingName2': '', 'DuckingName3': ''})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_GoddessStatue_ChoiceGanbari'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_GoddessStatue_Ganbari', 'Index': -1}) {
            Event82:

            call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'ActorName'})

            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'GameDataName'})
            GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'Npc_Goddess_UtuwaSum', 'Value': 4, 'Index': -1})
            GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'Npc_GoddessStatue_ChoiceGanbari'})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
            EventSystemActor.EventDoNothing({'IsWaitEnd': True})
            SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'DmF:Bgmミュート(フェード普通)', 'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False})
        } else {
            EventSystemActor.EventDoNothing({'IsWaitEnd': True})
            Player.EventTriggerPlayerRequestLookAtTheFront()

            fork {

                call Camera_GetUtuwa()

            } {

                call link_get_utsuwa()

            } {

                call ganbari()

            }

            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Npc_GoddessStatue_Ganbari'})
            Event69:
            Npc_EventStarter.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': ''})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 0})
            EventEffectEmitter.EventNodeEffectFade({'IsWaitEnd': False})
            EventSystemActor.EventDoNothing({'IsWaitEnd': True})

            call Camera_ResetToDefault()


            fork {
                goto Event82
            } {
                GameSystemActor[down].EventWait({'IsWaitEnd': True, 'Frames': 20})
                Player.EventTriggerPlayerLookAtObject({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1, 'Target': 1, 'ActorName': ''})
                Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'DemoWait', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            }

        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_GoddessStatue_Heart', 'Index': -1}) {
        goto Event82
    } else {
        EventSystemActor.EventDoNothing({'IsWaitEnd': True})
        Player.EventTriggerPlayerRequestLookAtTheFront()

        fork {

            call Camera_GetUtuwa()

        } {

            call link_get_utsuwa()

        } {

            call heart()

        }

        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Npc_GoddessStatue_Heart'})
        goto Event69
    }
}

void EndOfChat() {
    Event327:
    Npc_EventStarter.EventTriggerXLinkFadeByKey({'SLinkKey': '', 'ELinkKey': 'DmF_SY_StatueVenus_Aureole', 'IsKill': False})
    GameSystemActor[NoLog].EventTriggerSetMessageLogDisableSectionEnd()
    EventWorldManagerController.EventTriggerSetDiffuseAttenuate({'MultiplyValue': 1.0})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UI_IsStatueVenusEvent', 'Index': -1, 'Value': False})
    Event243:
    GameSystemActor.EventTriggerRequestAutoSave()
}

void GetSageSoulPlus() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'BeforeGetMessageId', 'IsNotOpenIfSkipedMostRecent': False})
    PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Num': -4, 'IsEquipDIrect': False, 'AttachmentActor': '', 'EffectType': 0, 'EffectValue': -1, 'Actor': 'Obj_SageWill', 'IsSetOnlyEquipIndex': False})
    EventCamera.EventTriggerCameraSavePoint()
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:Bgmミュート(フェード普通)', 'CommandLife': 2, 'DuckingName2': '', 'DuckingName3': ''})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Num': -1, 'AttachmentActor': '', 'IsEquipDIrect': False, 'EffectType': 0, 'EffectValue': -1, 'Actor': 'SageSoulActor', 'IsSetOnlyEquipIndex': False})
}

void GetSageSoulPlus_C01() {

    fork {
        Player.EventPlayerPlayASForFlowchart({'IsAllSlot': True, 'UseAnmDriven': False, 'KeepOneTimeAnm': True, 'ASCommand': 'SagePowerUp', 'IsWaitEnd': False, 'ForceFadeFrame': 0.0, 'ClothWarpMode': 0})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'Actor1ActorName': 'Player', 'PosVector': [0.9300000071525574, 1.3899999856948853, 0.9399999976158142], 'AtVector': [0.4699999988079071, 1.3700000047683716, 0.6100000143051147], 'TargetFovy': 48.66999816894531, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventSystemActor[0].EventWait({'IsWaitEnd': True, 'Frames': 120})
    } {
        GameSystemActor.EventTriggerSetShowStaminaGauge({'IsDisplayEx': False, 'EventName': 0, 'IsDisplay': False})
    }

}

void GetSageSoulPlus_Water() {

    call GetSageSoulPlus({'BeforeGetMessageId': 'BeforeGetMessageId', 'SageSoulActor': 'SageSoulActor'})


    fork {

        call GetSageSoulPlus_C01()

    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
        PlayerRaulHand.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'SageEmm_Water'})
    } {
        Player.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_StatueVenus_Player_SageRing_Flash_Water', 'SLinkKey': 'DmF_SY_StatueVenus_Player_SageRing_Flash'})
    }


    call GetSageSoulPlus_GetUI({'SageSoulPlusActor': 'SageSoulPlusActor'})

}

void GetSageSoulPlus_GetUI() {

    call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'SageSoulPlusActor'})


    fork {

        call Camera_ResetToDefault()

    } {
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsWaitEnd': False, 'ASCommand': 'Talk', 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': 30.0, 'ClothWarpMode': 0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
    }

}

void GetSageSoulPlus_Fire() {

    call GetSageSoulPlus({'BeforeGetMessageId': 'BeforeGetMessageId', 'SageSoulActor': 'SageSoulActor'})


    fork {

        call GetSageSoulPlus_C01()

    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
        PlayerRaulHand.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'SageEmm_Fire'})
    } {
        Player.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_StatueVenus_Player_SageRing_Flash_Fire', 'SLinkKey': 'DmF_SY_StatueVenus_Player_SageRing_Flash'})
    }


    call GetSageSoulPlus_GetUI({'SageSoulPlusActor': 'SageSoulPlusActor'})

}

void GetSageSoulPlus_Thunder() {

    call GetSageSoulPlus({'BeforeGetMessageId': 'BeforeGetMessageId', 'SageSoulActor': 'SageSoulActor'})


    fork {

        call GetSageSoulPlus_C01()

    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
        PlayerRaulHand.EventPlayAS({'ASName': 'SageEmm_Thunder', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        Player.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_StatueVenus_Player_SageRing_Flash_Thunder', 'SLinkKey': 'DmF_SY_StatueVenus_Player_SageRing_Flash'})
    }


    call GetSageSoulPlus_GetUI({'SageSoulPlusActor': 'SageSoulPlusActor'})

}

void GetSageSoulPlus_Wind() {

    call GetSageSoulPlus({'BeforeGetMessageId': 'BeforeGetMessageId', 'SageSoulActor': 'SageSoulActor'})


    fork {

        call GetSageSoulPlus_C01()

    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
        PlayerRaulHand.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'SageEmm_Wind'})
    } {
        Player.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_StatueVenus_Player_SageRing_Flash_Wind', 'SLinkKey': 'DmF_SY_StatueVenus_Player_SageRing_Flash'})
    }


    call GetSageSoulPlus_GetUI({'SageSoulPlusActor': 'SageSoulPlusActor'})

}

void GetSageSoulPlus_Spirit() {

    call GetSageSoulPlus({'BeforeGetMessageId': 'BeforeGetMessageId', 'SageSoulActor': 'SageSoulActor'})


    fork {

        call GetSageSoulPlus_C01()

    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
        PlayerRaulHand.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'SageEmm_Spirit'})
    } {
        Player.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_StatueVenus_Player_SageRing_Flash_Spirit', 'SLinkKey': 'DmF_SY_StatueVenus_Player_SageRing_Flash'})
    }


    call GetSageSoulPlus_GetUI({'SageSoulPlusActor': 'SageSoulPlusActor'})

}

void heart() {
    Obj_HeartUtuwa_A_01.EventWarpToTargetActor({'IsWaitEnd': False, 'TargetActorKind': 1, 'ActorName': 'Player', 'PositionOffset': [0.0, 5.0, 0.0], 'OffsetBase': 1, 'InstanceName': '', 'YAngle': 0.0})
    Obj_HeartUtuwa_A_01.EventPlayAS({'IsAllSlot': False, 'IsAnimeDriven': False, 'Partial': '', 'IsWaitEnd': False, 'ASName': 'HeartUtsuwa_Appear', 'ForceFadeInFrame': -1.0})
    Obj_HeartUtuwa_A_01.EventDoNothing({'IsWaitEnd': True})
    Obj_HeartUtuwa_A_01.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'DmF_SY_StatueVenus_Shine'})
}

void ganbari() {
    Obj_StaminaUtuwa_A_01.EventWarpToTargetActor({'IsWaitEnd': False, 'TargetActorKind': 1, 'ActorName': 'Player', 'PositionOffset': [0.0, 5.0, 0.0], 'OffsetBase': 1, 'InstanceName': '', 'YAngle': 0.0})
    Obj_StaminaUtuwa_A_01.EventPlayAS({'IsAllSlot': False, 'IsAnimeDriven': False, 'Partial': '', 'IsWaitEnd': False, 'ASName': 'StaminaUtsuwa_Appear', 'ForceFadeInFrame': -1.0})
    Obj_StaminaUtuwa_A_01.EventDoNothing({'IsWaitEnd': True})
    Obj_StaminaUtuwa_A_01.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'DmF_SY_StatueVenus_Shine'})
}

void link_get_utsuwa() {
    Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsAllSlot': False, 'ASCommand': 'DemoWait', 'ClothWarpMode': 0})
    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Get_Utsuwa', 'IsAllSlot': True, 'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'UseAnmDriven': False, 'ClothWarpMode': 0})
    EventSystemActor[player].EventWait({'IsWaitEnd': True, 'Frames': 225})

    fork {
        Obj_StaminaUtuwa_A_01.EventGoOffstageForUser({'IsSleepXLink': True, 'IsWaitEnd': False, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        Obj_HeartUtuwa_A_01.EventGoOffstageForUser({'IsSleepXLink': True, 'IsWaitEnd': False, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        Player.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_StatueVenus_Player_Purification', 'SLinkKey': 'DmF_SY_StatueVenus_Player_Purification'})
    } {
        EventSystemActor[player].EventWait({'IsWaitEnd': True, 'Frames': 3})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Large'})
    }

    EventSystemActor[player].EventWait({'IsWaitEnd': True, 'Frames': 170})
}

void Start_Normal() {
    Player.EventPlayerTalk({'IsWaitEnd': True, 'HelloType': 0})
    if !GameSystemActor.EventQueryDisplayModeIsPro() {
        GameSystemActor.EventTriggerSetVisibleHeartGauge({'IsDisplayHeartGauge': True})
        GameSystemActor.EventTriggerSetVisibleStaminaGauge({'IsDisplayHeartGauge': True})
        Event26:
        GameSystemActor.EventTriggerSetDisplayHeartGauge({'IsDisplayHeartGauge': True, 'IsDisplayHeartGaugeExtra': False, 'IsDisplayAtLT': True})
        GameSystemActor.EventTriggerSetDisplayEnergyGauge({'IsDisplayEnergyGauge': False, 'IsDisplayExEnergyGauge': False, 'IsWaitEnd': True})
        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'Npc_Goddess_UtuwaSum', 'Index': -1, 'Value': 152}) {
          case 0:
            switch Player.EventQueryPlayerMaxLife({'Value': 160}) {
              case 0:
                Event70:
                if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Obj_DungeonClearSeal', 'Num': 4, 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
                    if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 4, 'Actor': 'Obj_SageWill', 'IsExcludeAttached': False, 'IsExcludeAttachment': True})
                    && !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'GoddessStatue_HasSageSoul'}) {
                        GameSystemActor.EventOpenNumDisplayForStatueVenus({'IsWaitEnd': True})
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/DmF_SY_StatueVenus:talk01', 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/DmF_SY_StatueVenus:talk09', 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_GoddessStatue_First'}) {
                            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/DmF_SY_StatueVenus:talk36', 'IsNotOpenIfSkipedMostRecent': False})
                            GameSystemActor.EventTriggerSetShowStaminaGauge({'IsDisplayEx': False, 'IsDisplay': True, 'EventName': 0})

                            call ExchangeToUtuwaOrUpdateSageSoulSeq()

                        } else {
                            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Npc_GoddessStatue_First'})
                            GameSystemActor.EventTriggerSetMessageAdditionalChoice({'ChoiceLabel5': 10, 'ChoiceLabel6': 2})
                            GameDataActor.EventTriggerExcludeNextTalkChoice({'IsInvertGameData1': True, 'IsInvertGameData2': True, 'IsInvertGameData3': True, 'IsInvertGameData4': True, 'IsInvertGameData5': True, 'ChoiceExcludeGameData1': 'GoddessStatue_CanUpdateSageSoulRito', 'ChoiceExcludeGameData2': 'GoddessStatue_CanUpdateSageSoulGoron', 'ChoiceExcludeGameData3': 'GoddessStatue_CanUpdateSageSoulZora', 'ChoiceExcludeGameData4': 'GoddessStatue_CanUpdateSageSoulGerudo', 'ChoiceExcludeGameData5': 'GoddessStatue_CanUpdateSageSoulZonau'})
                            GameSystemActor.EventTriggerSetNumDisplayForcus({'Type': 17})
                            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/DmF_SY_StatueVenus:talk34', 'ChoiceNumber': 6, 'ChoiceLabel1': 6, 'ChoiceLabel2': 7, 'ChoiceLabel3': 8, 'ChoiceLabel4': 9, 'ChoiceCancelNo': 0, 'IsNotOpenIfSkipedMostRecent': False})

                            call UpdateSageSoulSeq_First()

                        }
                    } else {
                        GameSystemActor.EventOpenSpiritOrbDisplay({'IsWaitEnd': True})
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/DmF_SY_StatueVenus:talk01', 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        GameSystemActor.EventTriggerSetNumDisplayForcus({'Type': 4})

                        call ExchangeToUtuwaSeq()

                    }
                } else
                if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 4, 'Actor': 'Obj_SageWill', 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
                    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'GoddessStatue_HasSageSoul'}) {
                        GameSystemActor.EventOpenNumDisplayForStatueVenus({'IsWaitEnd': True})
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/DmF_SY_StatueVenus:talk01', 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        Event391:
                        GameSystemActor.EventTriggerSetNumDisplayForcus({'Type': 17})
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/DmF_SY_StatueVenus:talk37', 'IsNotOpenIfSkipedMostRecent': False})

                        call UpdateSageSoulSeq()

                    } else {
                        GameSystemActor.EventOpenSpiritOrbDisplay({'IsWaitEnd': True})
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/DmF_SY_StatueVenus:talk01', 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        GameSystemActor.EventTriggerSetNumDisplayForcus({'Type': 4})
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/DmF_SY_StatueVenus:talk09', 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                        call EntryPoint0()

                    }
                } else {
                    GameSystemActor.EventOpenSpiritOrbDisplay({'IsWaitEnd': True})
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/DmF_SY_StatueVenus:talk01', 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    GameSystemActor.EventTriggerSetNumDisplayForcus({'Type': 4})
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/DmF_SY_StatueVenus:talk09', 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                    call NotEnoughDungeonClearSealSeq()

                }
              case [1, 2]:
                switch GameDataActor.EventQueryIsGameDataFloat({'GameDataName': 'PlayerStatus.MaxStamina', 'Index': -1, 'Value': 3000.0}) {
                  case 0:
                    goto Event70
                  case [1, 2]:
                    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'GoddessStatue_HasSageSoul'})
                    && !PouchSystemActor.EventQueryIsExistInPouch({'Num': 4, 'Actor': 'Obj_SageWill', 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
                        Event64:
                        GameSystemActor.EventOpenSageWillDisplay({'IsWaitEnd': True})
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/DmF_SY_StatueVenus:talk51', 'IsNotOpenIfSkipedMostRecent': False})
                        goto Event391
                    } else {
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/DmF_SY_StatueVenus:talk17', 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                        call GetAndFinish()

                    }
                }
            }
          case [1, 2]:
            if !GameDataActor.EventQueryCheckIsGet({'ActorName': 'Obj_SageWill'}) {
                if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Obj_SageWill', 'Num': 4, 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
                    goto Event64
                } else
                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'GoddessStatue_CanUpdateSageSoul'}) {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/DmF_SY_StatueVenus:talk54', 'IsNotOpenIfSkipedMostRecent': False})

                    call GetAndFinish()

                } else {
                    Event509:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/DmF_SY_StatueVenus:talk33', 'IsNotOpenIfSkipedMostRecent': False})

                    call GetAndFinish()

                }
            } else {
                goto Event509
            }
        }
    } else {
        goto Event26
    }
}

void Start_MainChallenge_IsNotAfter_GoToAlterAfterGetRR() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'MainChallenge_IsAfter_GoToAlterAfterGetRR_Exp'}) {

        call Start_Normal()

    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/DmF_SY_StatueVenus:talk00', 'IsNotOpenIfSkipedMostRecent': False})

        call EndOfChat()

    }
}

void Start_Connect_FirstIsland_IsNotCompleted() {
    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GoddesStatue_FirstPlateau_LightPillar'}) {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'GoddesStatue_FirstPlateau_LightPillar', 'Value': True, 'Index': -1})
    }
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Connect_FirstIsland_IsCompleted_Exp'}) {

        call Start_Normal()

        goto Event243
    } else {
        Player.EventPlayerTalk({'IsWaitEnd': True, 'HelloType': 0})
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Connect_FirstIsland_VenusVoice', 'Index': -1}) {
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Connect_FirstIsland_IsAfter_Ready_Exp'}) {
                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Connect_FirstIsland_IsAfter_SkyGather_Exp'}) {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Connect_FirstIsland:talk_0022', 'IsNotOpenIfSkipedMostRecent': False})
                } else {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Connect_FirstIsland:talk_0017', 'IsNotOpenIfSkipedMostRecent': False})
                }

                call EndOfChat()

                goto Event243
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Connect_FirstIsland:talk_0002', 'IsNotOpenIfSkipedMostRecent': False})
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                ChallengeSystemActor.EventTriggerProgressChallengeStep({'ChallengeName': 'Connect_FirstIsland', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Sky'})
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
                ChallengeSystemActor.EventTriggerSelectChallenge({'ChallengeName': 'Connect_FirstIsland', 'IsRestoreWhenEventEnd': True})
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Connect_FirstIsland:talk_0024', 'IsNotOpenIfSkipedMostRecent': False})
                GameSystemActor.EventShowMap({'InShowIcon': True, 'ZoomLevel': 1, 'CenterPos': [-1000.0, 245.0, 2000.0], 'IsShowPlayerNavi': False, 'IsShowChallenge': False, 'IsWaitEnd': True})
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                GameSystemActor.EventTriggerShowMap({'InShowIcon': True, 'ZoomLevel': 1, 'CenterPos': [-1000.0, 245.0, 2000.0], 'IsShowPlayerNavi': False, 'IsShowChallenge': True})
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Connect_FirstIsland:talk_0016', 'IsNotOpenIfSkipedMostRecent': False})
                GameSystemActor.EventCloseMinusMenu({'IsWaitEnd': True})
                goto Event327
            }
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsAnonymous': True, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Connect_FirstIsland:talk_0012', 'IsNotOpenIfSkipedMostRecent': False})

            call EndOfChat()

            goto Event243
        }
    }
}

void Camera_SkyObj_GoddesStatue() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'MoveTime': 0, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'Actor1ActorName': 'SkyObj_GoddesStatue_A_01', 'PosVector': [-0.800000011920929, 2.180000066757202, 2.890000104904175], 'AtVector': [-0.3499999940395355, 2.430000066757202, 1.4199999570846558], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 160, 'CameraCollisionMode': 0, 'Actor1ActorName': 'SkyObj_GoddesStatue_A_01', 'PosVector': [-1.600000023841858, 1.649999976158142, 5.150000095367432], 'AtVector': [-0.9700000286102295, 1.7200000286102295, 3.7200000286102295], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Player.EventPlayerWarpToTargetActor({'TargetActorKind': 0, 'YAngle': 180.0, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'OffsetBase': 1, 'PositionOffset': [0.0, 0.0, 6.0], 'UseDemoWait': True})
        EventSystemActor.EventWait({'Frames': 10, 'IsWaitEnd': True})
        Player.EventPlayerWarpToTargetActor({'TargetActorKind': 0, 'YAngle': 180.0, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'OffsetBase': 1, 'PositionOffset': [0.0, 0.0, 3.0], 'UseDemoWait': True})
    } {
        Npc_EventStarter.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_StatueVenus_Aureole', 'SLinkKey': 'DmF_SY_StatueVenus_Aureole'})
    }

}

void Camera_GoddessWisdom() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'CameraName': '', 'SceneName': 'C01-6', 'TargetActorName': 'TwnObj_GoddesStatue_A_10', 'IsWaitEnd': True, 'InterpolateFrame': 0.0, 'TargetActorInstanceName': 'GoddessWisdom', 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        Player.EventPlayerWarpToTargetActor({'TargetActorKind': 0, 'YAngle': 180.0, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'OffsetBase': 1, 'PositionOffset': [0.0, -2.1600000858306885, 3.9000000953674316], 'UseDemoWait': True})
    } {
        Npc_EventStarter.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_StatueVenus_Aureole', 'SLinkKey': 'DmF_SY_StatueVenus_Aureole'})
    }

}

void Camera_GoddessPower() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'CameraName': '', 'SceneName': 'C01-6', 'TargetActorName': 'TwnObj_GoddesStatue_A_10', 'IsWaitEnd': True, 'InterpolateFrame': 0.0, 'TargetActorInstanceName': 'GoddessPower', 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        Player.EventPlayerWarpToTargetActor({'TargetActorKind': 0, 'YAngle': 180.0, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'OffsetBase': 1, 'PositionOffset': [0.0, -2.1600000858306885, 3.9000000953674316], 'UseDemoWait': True})
    } {
        Npc_EventStarter.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_StatueVenus_Aureole', 'SLinkKey': 'DmF_SY_StatueVenus_Aureole'})
    }

}

void Camera_GoddessBrave() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'CameraName': '', 'SceneName': 'C01-6', 'TargetActorName': 'TwnObj_GoddesStatue_A_10', 'IsWaitEnd': True, 'InterpolateFrame': 0.0, 'TargetActorInstanceName': 'GoddessBrave', 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        Player.EventPlayerWarpToTargetActor({'TargetActorKind': 0, 'YAngle': 180.0, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'OffsetBase': 1, 'PositionOffset': [0.0, -2.1600000858306885, 3.9000000953674316], 'UseDemoWait': True})
    } {
        Npc_EventStarter.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_StatueVenus_Aureole', 'SLinkKey': 'DmF_SY_StatueVenus_Aureole'})
    }

}

void Camera_TwnObj_GoddesStatue() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'CameraName': '', 'TargetActorName': 'TwnObj_GoddesStatue_A_01', 'SceneName': 'C01-0', 'IsWaitEnd': True, 'InterpolateFrame': 0.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        Player.EventPlayerWarpToTargetActor({'TargetActorKind': 0, 'YAngle': 180.0, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'OffsetBase': 1, 'PositionOffset': [0.0, 0.0, 5.0], 'UseDemoWait': True})
    } {
        Npc_EventStarter.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_StatueVenus_Aureole', 'SLinkKey': 'DmF_SY_StatueVenus_Aureole'})
    }

}

void Camera_TwnObj_SuperGoddesStatue() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'CameraName': '', 'TargetActorName': 'TwnObj_SuperGoddesStatue_A_01', 'IsWaitEnd': True, 'SceneName': 'C01-4', 'InterpolateFrame': 0.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'CameraName': '', 'SceneName': 'C01-5', 'TargetActorName': 'TwnObj_SuperGoddesStatue_A_01', 'InterpolateFrame': 0.0, 'IsLoop': False, 'IsWaitEnd': False, 'CalcUpInInterpolate': False})
    } {
        Player.EventPlayerWarpToTargetActor({'TargetActorKind': 0, 'YAngle': 180.0, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'OffsetBase': 1, 'PositionOffset': [0.0, 2.8499999046325684, 20.0], 'UseDemoWait': True})
    } {
        Npc_EventStarter.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_StatueVenus_Aureole', 'SLinkKey': 'DmF_SY_StatueVenus_Aureole'})
    }

}

void Camera_TwnObj_SmallGoddesStatue() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'CameraName': '', 'TargetActorName': 'TwnObj_GoddesStatue_A_02', 'SceneName': 'C01-2', 'IsWaitEnd': True, 'InterpolateFrame': 0.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        Player.EventPlayerWarpToTargetActorAndOnGround({'IsWaitEnd': True, 'IsIncludeWater': True, 'OffsetY': 0.0, 'PositionOffset': [0.0, 1.0, 2.8499999046325684], 'YAngle': 180.0, 'TargetActorKind': 0, 'ActorName': '', 'InstanceName': '', 'OffsetBase': 1, 'UseDemoWait': True})
        Player.EventTriggerPlayerResetBoneControl({'Type': 1})
    } {
        Npc_EventStarter.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_StatueVenus_Aureole', 'SLinkKey': 'DmF_SY_StatueVenus_Aureole'})
    }

}

void UpdateSageSoulSeq() {
    GameSystemActor.EventTriggerSetDisplayHeartGauge({'IsDisplayHeartGauge': False, 'IsDisplayHeartGaugeExtra': False, 'IsDisplayAtLT': True})
    GameSystemActor.EventTriggerSetShowStaminaGauge({'IsDisplay': False, 'IsDisplayEx': False, 'EventName': 0})
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'GoddessStatue_CanUpdateSageSoul'}) {
        GameSystemActor.EventTriggerSetMessageAdditionalChoice({'ChoiceLabel5': 10, 'ChoiceLabel6': 2})
        GameDataActor.EventTriggerExcludeNextTalkChoice({'IsInvertGameData1': True, 'IsInvertGameData2': True, 'IsInvertGameData3': True, 'IsInvertGameData4': True, 'IsInvertGameData5': True, 'ChoiceExcludeGameData1': 'GoddessStatue_CanUpdateSageSoulRito', 'ChoiceExcludeGameData2': 'GoddessStatue_CanUpdateSageSoulGoron', 'ChoiceExcludeGameData3': 'GoddessStatue_CanUpdateSageSoulZora', 'ChoiceExcludeGameData4': 'GoddessStatue_CanUpdateSageSoulGerudo', 'ChoiceExcludeGameData5': 'GoddessStatue_CanUpdateSageSoulZonau'})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/DmF_SY_StatueVenus:talk44', 'ChoiceNumber': 6, 'ChoiceLabel1': 6, 'ChoiceLabel2': 7, 'ChoiceLabel3': 8, 'ChoiceLabel4': 9, 'IsNotOpenIfSkipedMostRecent': False})
        Event359:
        switch GameSystemActor.EventQueryTalkChoice8() {
          case 0:

            call GetSageSoulPlus_Wind({'BeforeGetMessageId': 'EventFlowMsg/DmF_SY_StatueVenus:talk46', 'SageSoulActor': 'Obj_SageSoul_Rito', 'SageSoulPlusActor': 'Obj_SageSoulPlus_Rito'})

            Event229:
            SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'DmF:Bgmミュート(フェード普通)', 'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False})
            if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 4, 'Actor': 'Obj_SageWill', 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/DmF_SY_StatueVenus:talk40', 'IsNotOpenIfSkipedMostRecent': False})

                call UpdateSageSoulSeq()

            } else {

                call GetAndFinish()

            }
          case 1:

            call GetSageSoulPlus_Fire({'BeforeGetMessageId': 'EventFlowMsg/DmF_SY_StatueVenus:talk48', 'SageSoulActor': 'Obj_SageSoul_Goron', 'SageSoulPlusActor': 'Obj_SageSoulPlus_Goron'})

            goto Event229
          case 2:

            call GetSageSoulPlus_Water({'BeforeGetMessageId': 'EventFlowMsg/DmF_SY_StatueVenus:talk50', 'SageSoulActor': 'Obj_SageSoul_Zora', 'SageSoulPlusActor': 'Obj_SageSoulPlus_Zora'})

            goto Event229
          case 3:

            call GetSageSoulPlus_Thunder({'BeforeGetMessageId': 'EventFlowMsg/DmF_SY_StatueVenus:talk49', 'SageSoulActor': 'Obj_SageSoul_Gerudo', 'SageSoulPlusActor': 'Obj_SageSoulPlus_Gerudo'})

            goto Event229
          case 4:

            call GetSageSoulPlus_Spirit({'BeforeGetMessageId': 'EventFlowMsg/DmF_SY_StatueVenus:talk47', 'SageSoulActor': 'Obj_SageSoul_Zonau', 'SageSoulPlusActor': 'Obj_SageSoulPlus_Zonau'})

            goto Event229
          case [5, 6, 7]:

            call GetAndFinish()

        }
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/DmF_SY_StatueVenus:talk41', 'IsNotOpenIfSkipedMostRecent': False})

        call GetAndFinish()

    }
}

void ExchangeToStaminaUtuwaSeq() {
    switch GameDataActor.EventQueryIsGameDataFloat({'GameDataName': 'PlayerStatus.MaxStamina', 'Index': -1, 'Value': 3000.0}) {
      case 0:

        call You_wish_to_expand_your_Stamina_Wheel()

        Event13:
        switch GameSystemActor.EventQueryTalkChoice3() {
          case 0:
            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Npc_GoddessStatue_ChoiceGanbari'})
            GameSystemActor.EventTriggerSetShowStaminaGauge({'IsDisplayEx': False, 'IsDisplay': False, 'EventName': 0})

            call GetMatome({'GameDataName': 'Npc_GoddessStatue_Ganbari', 'ActorName': 'Obj_StaminaUtuwa_A_01'})

            Player.EventTriggerHealStaminaMax()
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 110})
            if GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'Npc_Goddess_UtuwaSum', 'Index': -1, 'Value': 152}) in [0, 1] {
                switch GameDataActor.EventQueryIsGameDataFloat({'GameDataName': 'PlayerStatus.MaxStamina', 'Index': -1, 'Value': 3000.0}) {
                  case 0:
                    Event281:

                    call ExchangeCompleted()

                  case [1, 2]:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/DmF_SY_StatueVenus:talk16', 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event281
                }
            }
          case 1:

            call CancelExchangeToUtuwaSeq()

          case 2:

            call GetAndFinish()

        }
      case [1, 2]:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/DmF_SY_StatueVenus:talk16', 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        switch Player.EventQueryPlayerMaxLife({'Value': 160}) {
          case 0:

            call ToHeart_NotStamina()

          case [1, 2]:

            call GetAndFinish()

        }
    }
}

void ExchangeToHeartUtuwaSeq() {
    switch Player.EventQueryPlayerMaxLife({'Value': 160}) {
      case 0:
        if !EventSystemActor.EventQueryIsEventStarter({'InstanceName': '', 'IsCheckInstanceName': False, 'ActorName': 'SkyObj_GoddesStatue_A_01'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_GoddessStatue_GetHeart', 'Index': -1}) {
                Event10:

                call You_wish_for_another_Heart_Containers()

                Event12:
                switch GameSystemActor.EventQueryTalkChoice3() {
                  case 0:
                    Event88:
                    GameSystemActor.EventTriggerSetShowStaminaGauge({'IsDisplay': False, 'IsDisplayEx': False, 'EventName': 0})

                    call GetMatome({'GameDataName': 'Npc_GoddessStatue_Heart', 'ActorName': 'Obj_HeartUtuwa_A_01'})

                    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Npc_GoddessStatue_GetHeart'})
                    if GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'Npc_Goddess_UtuwaSum', 'Index': -1, 'Value': 152}) in [0, 1] {
                        switch Player.EventQueryPlayerMaxLife({'Value': 160}) {
                          case 0:
                            Event286:

                            call ExchangeCompleted()

                          case [1, 2]:
                            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/DmF_SY_StatueVenus:talk15', 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            goto Event286
                        }
                    }
                  case 1:

                    call CancelExchangeToUtuwaSeq()

                  case 2:

                    call GetAndFinish()

                }
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/DmF_SY_StatueVenus:talk04', 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel1': 3, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 2, 'ChoiceLabel3': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                if !GameSystemActor.EventQueryTalkChoice2() {
                    goto Event88
                } else {

                    call GetAndFinish()

                }
            }
        } else {
            goto Event10
        }
      case [1, 2]:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/DmF_SY_StatueVenus:talk15', 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        switch GameDataActor.EventQueryIsGameDataFloat({'GameDataName': 'PlayerStatus.MaxStamina', 'Index': -1, 'Value': 3000.0}) {
          case 0:

            call ToStamina_NotHeart()

          case [1, 2]:

            call GetAndFinish()

        }
    }
}

void NotEnoughDungeonClearSealSeq() {
    if !GameDataActor.EventQueryCheckIsGet({'ActorName': 'Obj_SageWill'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/DmF_SY_StatueVenus:talk35', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Event8:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/DmF_SY_StatueVenus:talk02', 'IsNotOpenIfSkipedMostRecent': False})
    }
    goto Event63
}

void CancelExchangeToUtuwaSeq() {
    if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 4, 'Actor': 'Obj_SageWill', 'IsExcludeAttached': False, 'IsExcludeAttachment': True})
    && !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'GoddessStatue_HasSageSoul'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/DmF_SY_StatueVenus:talk14', 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 1, 'IsAnimeDriven': False, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 4, 'ChoiceLabel3': 5, 'ChoiceLabel4': 2, 'IsNotOpenIfSkipedMostRecent': False})

        call ExchangeToUtuwaOrUpdateSageSoulSeq_Choice4()

    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/DmF_SY_StatueVenus:talk14', 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 3, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'IsAnimeDriven': False, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        switch GameSystemActor.EventQueryTalkChoice3() {
          case 0:

            call ExchangeToHeartUtuwaSeq()

          case 1:

            call ExchangeToStaminaUtuwaSeq()

          case 2:

            call GetAndFinish()

        }
    }
}

void ExchangeToUtuwaSeq() {
    if !EventSystemActor.EventQueryIsEventStarter({'InstanceName': '', 'IsCheckInstanceName': False, 'ActorName': 'SkyObj_GoddesStatue_A_01'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_GoddessStatue_GetHeart', 'Index': -1}) {
            Event90:
            GameSystemActor.EventTriggerSetShowStaminaGauge({'IsDisplayEx': False, 'EventName': 0, 'IsDisplay': True})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/DmF_SY_StatueVenus:talk07', 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceNumber': 3, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            switch GameSystemActor.EventQueryTalkChoice3() {
              case 0:

                call ExchangeToHeartUtuwaSeq()

              case 1:

                call ExchangeToStaminaUtuwaSeq()

              case 2:

                call GetAndFinish()

            }
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 2, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/DmF_SY_StatueVenus:talk10', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            if !GameSystemActor.EventQueryTalkChoice2() {

                call ExchangeToHeartUtuwaSeq()

            } else {

                call GetAndFinish()

            }
        }
    } else {
        goto Event90
    }
}

void ExchangeToUtuwaOrUpdateSageSoulSeq() {
    GameSystemActor.EventTriggerStartNumDisplayAutoFocusForStatueVenus({'MessageID': 'EventFlowMsg/DmF_SY_StatueVenus:talk43', 'StaminaLabel': 1, 'HeartLabel': 0, 'SageWillLabel': 5})
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel2': 1, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/DmF_SY_StatueVenus:talk43', 'ChoiceNumber': 4, 'ChoiceLabel3': 5, 'ChoiceLabel4': 2, 'IsNotOpenIfSkipedMostRecent': False})
    Event358:
    switch GameSystemActor.EventQueryTalkChoice4() {
      case 0:
        GameSystemActor.EventTriggerEndNumDisplayAutoFocus()
        GameSystemActor.EventTriggerSetNumDisplayForcus({'Type': 4})

        call ExchangeToHeartUtuwaSeq()

      case 1:
        GameSystemActor.EventTriggerEndNumDisplayAutoFocus()
        GameSystemActor.EventTriggerSetNumDisplayForcus({'Type': 4})

        call ExchangeToStaminaUtuwaSeq()

      case 2:
        GameSystemActor.EventTriggerEndNumDisplayAutoFocus()
        GameSystemActor.EventTriggerSetNumDisplayForcus({'Type': 17})

        call UpdateSageSoulSeq()

      case 3:

        call GetAndFinish()

    }
}

void ToHeart_NotStamina() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/DmF_SY_StatueVenus:talk18', 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceNumber': 3, 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'ChoiceLabel3': 2, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    goto Event12
}

void ToStamina_NotHeart() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/DmF_SY_StatueVenus:talk19', 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceNumber': 3, 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'ChoiceLabel3': 2, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    goto Event13
}

void ExchangeCompleted() {
    if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Obj_DungeonClearSeal', 'Num': 4, 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'Npc_Goddess_UtuwaSum', 'Index': -1, 'Value': 152}) {
          case 0:
            Player.EventPlayerTalk({'IsWaitEnd': False, 'HelloType': 0})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/DmF_SY_StatueVenus:talk13', 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameSystemActor.EventTriggerSetShowStaminaGauge({'IsDisplayEx': False, 'IsDisplay': True, 'EventName': 0})
            if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 4, 'Actor': 'Obj_SageWill', 'IsExcludeAttached': False, 'IsExcludeAttachment': True})
            && !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'GoddessStatue_HasSageSoul'}) {

                call ExchangeToUtuwaOrUpdateSageSoulSeq()

            } else {

                call ExchangeToUtuwaSeq()

            }
          case [1, 2]:
            Event36:

            call GetAndFinish()

        }
    } else {
        goto Event36
    }
}

void Camera_GetUtuwa() {
    EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'TargetActorName': 'Player', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsWaitEnd': False, 'SceneName': 'C02-0', 'InterpolateFrame': 0.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 160})
    if !EventSystemActor.EventQueryIsEventStarter({'InstanceName': '', 'IsCheckInstanceName': False, 'ActorName': 'SkyObj_GoddesStatue_A_01'}) {
        Event85:
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'PosVector': [1.4500000476837158, 1.649999976158142, 2.0], 'AtVector': [0.7599999904632568, 1.6200000047683716, 1.2699999809265137], 'TargetFovy': 36.16999816894531, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'PosVector': [0.9800000190734863, 1.3300000429153442, 1.7000000476837158], 'AtVector': [0.4000000059604645, 1.2899999618530273, 0.8899999856948853], 'TargetFovy': 31.889999389648438, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 19, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'MoveTime': 42, 'Actor1ActorName': 'Player', 'PosVector': [1.0199999809265137, 1.409999966621399, 1.850000023841858], 'AtVector': [0.4699999988079071, 1.3700000047683716, 1.0700000524520874], 'TargetFovy': 33.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'TwnObj_GoddesStatue_A_10', 'InstanceName': 'GoddessWisdom', 'IsCheckInstanceName': True}) {
        Event304:
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'Actor1ActorName': 'Player', 'PosVector': [1.1399999856948853, 1.5800000429153442, 1.3600000143051147], 'AtVector': [0.3799999952316284, 1.5399999618530273, 0.7099999785423279], 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'TargetFovy': 48.66999816894531, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 19, 'CameraCollisionMode': 0, 'Actor1ActorName': 'Player', 'PosVector': [0.9100000262260437, 1.3799999952316284, 0.9800000190734863], 'AtVector': [0.10999999940395355, 1.340000033378601, 0.36000001430511475], 'TargetFovy': 48.66999816894531, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'Actor1ActorName': 'Player', 'PosVector': [1.100000023841858, 1.4600000381469727, 1.1399999856948853], 'AtVector': [0.30000001192092896, 1.4199999570846558, 0.5199999809265137], 'TargetFovy': 48.66999816894531, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 42, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'TwnObj_GoddesStatue_A_10', 'InstanceName': 'GoddessPower', 'IsCheckInstanceName': True}) {
        goto Event304
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'TwnObj_GoddesStatue_A_10', 'InstanceName': 'GoddessBrave', 'IsCheckInstanceName': True}) {
        goto Event304
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'TwnObj_GoddesStatue_A_01', 'InstanceName': '', 'IsCheckInstanceName': False}) {
        goto Event85
    } else
    if EventSystemActor.EventQueryIsEventStarter({'ActorName': 'TwnObj_SuperGoddesStatue_A_01', 'InstanceName': '', 'IsCheckInstanceName': False}) in [0, 1] {
        goto Event85
    }
}

void Camera_ResetToDefault() {
    if !EventSystemActor.EventQueryIsEventStarter({'InstanceName': '', 'IsCheckInstanceName': False, 'ActorName': 'SkyObj_GoddesStatue_A_01'}) {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'Actor1ActorName': 'SkyObj_GoddesStatue_A_01', 'PosVector': [-1.600000023841858, 1.649999976158142, 5.150000095367432], 'AtVector': [-0.9700000286102295, 1.7200000286102295, 3.7200000286102295], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'TwnObj_GoddesStatue_A_10', 'InstanceName': 'GoddessWisdom', 'IsCheckInstanceName': True}) {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'CameraName': '', 'SceneName': 'C01-6', 'TargetActorName': 'TwnObj_GoddesStatue_A_10', 'InterpolateFrame': 0.0, 'TargetActorInstanceName': 'GoddessWisdom', 'IsLoop': False, 'IsWaitEnd': False, 'CalcUpInInterpolate': False})
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'TwnObj_GoddesStatue_A_10', 'InstanceName': 'GoddessPower', 'IsCheckInstanceName': True}) {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'CameraName': '', 'SceneName': 'C01-6', 'TargetActorName': 'TwnObj_GoddesStatue_A_10', 'InterpolateFrame': 0.0, 'TargetActorInstanceName': 'GoddessPower', 'IsLoop': False, 'IsWaitEnd': False, 'CalcUpInInterpolate': False})
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'TwnObj_GoddesStatue_A_10', 'InstanceName': 'GoddessBrave', 'IsCheckInstanceName': True}) {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'CameraName': '', 'SceneName': 'C01-6', 'TargetActorName': 'TwnObj_GoddesStatue_A_10', 'InterpolateFrame': 0.0, 'TargetActorInstanceName': 'GoddessBrave', 'IsLoop': False, 'IsWaitEnd': False, 'CalcUpInInterpolate': False})
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'TwnObj_GoddesStatue_A_01', 'InstanceName': '', 'IsCheckInstanceName': False}) {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'CameraName': '', 'SceneName': 'C01-1', 'TargetActorName': 'TwnObj_GoddesStatue_A_01', 'InterpolateFrame': 0.0, 'IsLoop': False, 'IsWaitEnd': False, 'CalcUpInInterpolate': False})
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'TwnObj_SuperGoddesStatue_A_01', 'InstanceName': '', 'IsCheckInstanceName': False}) {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'CameraName': '', 'SceneName': 'C01-5', 'TargetActorName': 'TwnObj_SuperGoddesStatue_A_01', 'InterpolateFrame': 0.0, 'IsLoop': False, 'IsWaitEnd': False, 'CalcUpInInterpolate': False})
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'InstanceName': '', 'IsCheckInstanceName': False, 'ActorName': 'TwnObj_GoddesStatue_A_05'}) {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'CameraName': '', 'SceneName': 'C01-3', 'InterpolateFrame': 0.0, 'IsLoop': False, 'IsWaitEnd': False, 'TargetActorName': 'TwnObj_GoddesStatue_A_05', 'CalcUpInInterpolate': False})
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'InstanceName': '', 'IsCheckInstanceName': False, 'ActorName': 'TwnObj_GoddesStatue_A_04'}) {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'CameraName': '', 'SceneName': 'C01-3', 'InterpolateFrame': 0.0, 'IsLoop': False, 'IsWaitEnd': False, 'TargetActorName': 'TwnObj_GoddesStatue_A_04', 'CalcUpInInterpolate': False})
    } else {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'CameraName': '', 'SceneName': 'C01-3', 'TargetActorName': 'TwnObj_GoddesStatue_A_02', 'InterpolateFrame': 0.0, 'IsLoop': False, 'IsWaitEnd': False, 'CalcUpInInterpolate': False})
    }
}

void UpdateSageSoulSeq_First() {
    goto Event359
}

void Camera_TwnObj_SmallGoddesStatuelink() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'CameraName': '', 'SceneName': 'C01-2', 'IsWaitEnd': True, 'InterpolateFrame': 0.0, 'IsLoop': False, 'TargetActorName': 'TwnObj_GoddesStatue_A_05', 'CalcUpInInterpolate': False})
    } {
        Player.EventPlayerWarpToTargetActorAndOnGround({'IsWaitEnd': True, 'IsIncludeWater': True, 'OffsetY': 0.0, 'PositionOffset': [0.0, 1.0, 2.8499999046325684], 'YAngle': 180.0, 'TargetActorKind': 0, 'ActorName': '', 'InstanceName': '', 'OffsetBase': 1, 'UseDemoWait': True})
        Player.EventTriggerPlayerResetBoneControl({'Type': 1})
    } {
        Npc_EventStarter.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_StatueVenus_Aureole', 'SLinkKey': 'DmF_SY_StatueVenus_Aureole'})
    }

}

void ExchangeToUtuwaOrUpdateSageSoulSeq_Choice4() {
    goto Event358
}

void You_wish_for_another_Heart_Containers() {
    if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 4, 'Actor': 'Obj_SageWill', 'IsExcludeAttached': False, 'IsExcludeAttachment': True})
    && !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'GoddessStatue_HasSageSoul'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceNumber': 3, 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'ChoiceLabel3': 2, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/DmF_SY_StatueVenus:talk52', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/DmF_SY_StatueVenus:talk04', 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceNumber': 3, 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'ChoiceLabel3': 2, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void You_wish_to_expand_your_Stamina_Wheel() {
    if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 4, 'Actor': 'Obj_SageWill', 'IsExcludeAttached': False, 'IsExcludeAttachment': True})
    && !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'GoddessStatue_HasSageSoul'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceNumber': 3, 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'ChoiceLabel3': 2, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/DmF_SY_StatueVenus:talk53', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/DmF_SY_StatueVenus:talk05', 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceNumber': 3, 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'ChoiceLabel3': 2, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Camera_TwnObj_SmallGoddesStatuedragon() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'CameraName': '', 'SceneName': 'C01-2', 'IsWaitEnd': True, 'InterpolateFrame': 0.0, 'IsLoop': False, 'TargetActorName': 'TwnObj_GoddesStatue_A_04', 'CalcUpInInterpolate': False})
    } {
        Player.EventPlayerWarpToTargetActor({'TargetActorKind': 0, 'YAngle': 180.0, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'OffsetBase': 1, 'PositionOffset': [0.0, 0.0, 2.8499999046325684], 'UseDemoWait': True})
    } {
        Npc_EventStarter.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_StatueVenus_Aureole', 'SLinkKey': 'DmF_SY_StatueVenus_Aureole'})
    }

}

void EntryPoint0() {
    goto Event8
}
