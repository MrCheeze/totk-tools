-------- EventFlow: Dm_RT_0035 --------

Actor: Npc_Tulin_Sage[DynamicGenerateSage]
entrypoint: None()
actions: ['EventWarpToTargetActor', 'EventTalk', 'EventNpcRitoLand', 'EventPlayAS', 'EventNpcRitoTakeOff', 'EventTriggerLookAtObject', 'EventTriggerChangeEmotion', 'EventNPCTurnToTarget', 'EventSageWarpToNearAnchor', 'EventTriggerRequestLookAtTheFront', 'EventTriggerEquipmentUserRequestChangeState', 'EventWarpToTargetPosAndRot', 'EventTriggerParticipateEvent']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Bow': '', 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'UseEventModelAnime': 'Work/Model/Event/Dm_RT_0035/Dm_RT_0035_Npc_Rito_Moto_Young/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_RT_0035_Npc_Rito_Moto_Young.root.as', 'EquipmentUser_Bow_EquipmentState': 1, 'EquipmentUser_Bow_Strong': '', 'EquipmentUser_Bow_Strong_EquipmentState': 0, 'TextureReplaceType': 0, 'EventMemberCreateMethod': 4, 'IsBindNearestActor': False}

Actor: EventSystemActor[HighSoundSleep]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_HighMountain037[IpponSugi]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventTriggerChangeAIScheduleEquipState', 'EventNpcRitoTakeOff', 'EventGoOffstageForUser', 'EventWarpToTargetPosAndRot', 'EventPlayAS', 'EventNpcRitoLand', 'EventTalk', 'EventTriggerLookAtObject']
queries: []
params: {'IsGrounding': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EventMemberCreateMethod': 1, 'UseEventModelAnime': 'Work/Model/Event/Dm_RT_0035/Dm_RT_0035_UMii_Rito_BodyC_M_000/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_RT_0035_UMii_Rito_BodyC_M_000.root.as', 'IsWorld': True, 'Position': [-3032.841064453125, 620.6099853515625, -2741.742919921875], 'IsBindNearestActor': False}

Actor: Npc_HighMountain009[IpponSugi]
entrypoint: None()
actions: ['EventTalk', 'EventWarpToTargetPosAndRot', 'EventTriggerParticipateEvent', 'EventTriggerChangeAIScheduleEquipState', 'EventPlayAS', 'EventGoOffstageForUser', 'EventTriggerLookAtObject', 'EventTriggerEquipmentUserRequestCreateStaticEquipment', 'EventNpcRitoTakeOff', 'EventNpcRitoLand', 'EventWait']
queries: []
params: {'IsGrounding': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'EventMemberCreateMethod': 1, 'UseEventModelAnime': 'Work/Model/Event/Dm_RT_0035/Dm_RT_0035_UMii_Rito_BodyC_M_000/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_RT_0035_UMii_Rito_BodyC_M_000.root.as', 'IsWorld': True, 'Position': [-3032.841064453125, 620.6099853515625, -2741.742919921875], 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundRequestDucking', 'EventSoundStartSound', 'EventSoundReleaseDucking', 'EventTriggerSoundStopSound', 'EventTriggerStartBgmSimple', 'EventTriggerSoundControlBGM', 'EventTriggerSoundStopBGM', 'EventTriggerSetNpcVoiceFarMode']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeIn', 'EventWait', 'EventCloseMessageDialog']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventPlayerWarpToTargetPosAndRot', 'EventTriggerParticipateEvent', 'EventPlayerTurnAndLook', 'EventTriggerPlayerLookAtObject', 'EventPlayerWarpToNearAnchor', 'EventTriggerPlayerRequestLookAtTheFront', 'EventPlayerStopInAir']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerParticipateEvent', 'EventTriggerSendKeepStateMessageToPlayerCamera', 'EventMoveCameraAnimationInstructionsForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 3, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: CameraXLinkControl
entrypoint: None()
actions: ['EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataEnum']
queries: ['EventQueryIsGameDataEnum']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor[DynamicGenerateSage]
entrypoint: None()
actions: ['EventWaitForDynamicSagePresence']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Dm_RT_0035() {

    call Pre()


    call C01()


    call C02()


    call C03-1()


    call C03-2()


    call C04()


    call C05()


    call C06()


    call C07()


    call C08()


    call C09()


    call C10()


    call C11()


    call C12()


    call C13()


    call C14()


    call C15()


    call C16()


    call C17()


    call C18()


    call C19()


    call C20()

}

void C01() {
    Npc_Tulin_Sage[DynamicGenerateSage].EventTriggerEquipmentUserRequestChangeState({'EquipmentState': 2, 'DynamicEquipmentSlot': 3})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    Npc_Tulin_Sage[DynamicGenerateSage].EventNpcRitoLand({'IsWaitEnd': True, 'LandingHeight': 5.0, 'FallSpped': 20.0, 'FlagOnly': False, 'IsChangePhysicsSettingDynamic': False})
    Npc_Tulin_Sage[DynamicGenerateSage].EventTriggerLookAtObject({'ActorName': 'Player', 'OffsetBase': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'PosOffset': [0.0, 1.0, 0.0], 'Target': 2, 'ResetArriveTransformFixed': False})
    Npc_Tulin_Sage[DynamicGenerateSage].EventTalk({'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsCloseDialog': True, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Dm_RT_0035:Dm_RT_0035_01', 'ASName': 'DemoJoyTalk', 'IsPlayASAllSlot': True, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
}

void C02() {
    EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'SceneName': 'C02_0', 'RootType': 3, 'TargetActorName': 'Player', 'IsWaitEnd': True, 'CalcUpInInterpolate': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Npc_Tulin_Sage[DynamicGenerateSage].EventTriggerLookAtObject({'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': '', 'Target': 0, 'WorldPos': [-3032.0, 646.75, -2742.5], 'OffsetBase': 0, 'ActorName': '', 'ResetArriveTransformFixed': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Npc_Tulin_Sage[DynamicGenerateSage].EventTalk({'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsCloseDialog': True, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Dm_RT_0035:Dm_RT_0035_02', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ASName': 'Wait', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:Bgmミュート(フェード普通)', 'DuckingName2': 'DmF:WorldSEミュート(フェード普通)', 'DuckingName3': '', 'CommandLife': 0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Dm_AncientCall_Signal', 'IsIgnoreDucking': False})
    SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Dm_AncientCall_Blur_loop', 'IsIgnoreDucking': False})
    CameraXLinkControl.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_RT_0035_AncientCall'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

    fork {
        Npc_Tulin_Sage[DynamicGenerateSage].EventTriggerRequestLookAtTheFront()
        Npc_Tulin_Sage[DynamicGenerateSage].EventPlayAS({'IsAnimeDriven': False, 'IsWaitEnd': False, 'Partial': '', 'ASName': 'DemoLookAround', 'IsAllSlot': True, 'ForceFadeInFrame': 5.0})
    } {
        Player.EventPlayerPlayASForFlowchart({'IsAllSlot': True, 'IsWaitEnd': False, 'UseAnmDriven': False, 'ASCommand': 'Demo_AncientCall_LookAround', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {
        EventSystemActor[HighSoundSleep].EventWait({'IsWaitEnd': True, 'Frames': 180})
        SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'DmF:Bgmミュート(フェード普通)', 'DuckingName2': 'DmF:WorldSEミュート(フェード普通)', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False})
        CameraXLinkControl.EventTriggerXLinkFadeByKey({'SLinkKey': '', 'ELinkKey': 'Dm_RT_0035_AncientCall', 'IsKill': False})
        SoundSystemActor.EventTriggerSoundStopSound({'SLinkKey': 'Dm_AncientCall_Blur_loop', 'GroupName': '', 'FadeFrame': -1})
    }

    Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'DemoWait', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
}

void C03-1() {
    EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'RootType': 3, 'IsReferenceRootOnce': True, 'TargetActorName': 'Npc_Tulin_Sage', 'TargetActorInstanceName': 'DynamicGenerateSage', 'SceneName': 'C03_0', 'CalcUpInInterpolate': False})
    Npc_Tulin_Sage[DynamicGenerateSage].EventTalk({'MessageId': 'EventFlowMsg/Dm_RT_0035:Dm_RT_0035_04', 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsWaitEnd': True, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': 'DemoLookAroundTalk', 'IsPlayASAllSlot': True, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Tulin_Sage[DynamicGenerateSage].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsWaitEnd': True, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': True, 'MessageId': 'EventFlowMsg/Dm_RT_0035:Dm_RT_0035_05', 'ASName': 'DemoLookUp', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void C04() {

    fork {
        Npc_HighMountain009[IpponSugi].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 150.0, 'Position': [-3087.0, 671.0, -2664.0]})
        Npc_HighMountain009[IpponSugi].EventPlayAS({'IsWaitEnd': False, 'IsAnimeDriven': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Fly_demo01'})
    } {
        Npc_HighMountain037[IpponSugi].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 150.0, 'Position': [-3085.0, 673.5, -2660.0]})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
        Npc_HighMountain037[IpponSugi].EventPlayAS({'IsWaitEnd': False, 'IsAnimeDriven': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Fly_demo02'})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'SceneName': 'C04_0', 'RootType': 3, 'TargetActorName': 'Player', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False})
    } {
        Npc_Tulin_Sage[DynamicGenerateSage].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [-3037.743896484375, 646.5902099609375, -2739.587890625], 'YAngle': -60.0})
    } {
        SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_Dm_RT_0035', 'CommandLife': 2, 'IsReleaseDucking': False})
    }

    Npc_Tulin_Sage[DynamicGenerateSage].EventTalk({'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsWaitEnd': True, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Dm_RT_0035:Dm_RT_0035_08', 'IsPlayASAllSlot': False, 'IsCloseDialog': False, 'EndDialogOption': 1, 'NotPlayLipSyncAnim': False, 'ASName': 'DemoLookUp_TalkWait', 'IsAnimeDriven': False, 'IsNotOpenIfSkipedMostRecent': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
}

void C03-2() {
    SoundSystemActor.EventTriggerSetNpcVoiceFarMode()
    Npc_HighMountain009[IpponSugi].EventTalk({'IsWaitEnd': True, 'IsAnonymous': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': True, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Dm_RT_0035:Dm_RT_0035_06', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Tulin_Sage[DynamicGenerateSage].EventTalk({'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsCloseDialog': True, 'IsWaitEnd': True, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Dm_RT_0035:Dm_RT_0035_07', 'IsPlayASAllSlot': True, 'ASName': 'DemoLookUpSuprise', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

    fork {
        Player.EventPlayerTurnAndLook({'Target': 0, 'WorldPos': [-3088.0, 750.0, -2618.0], 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'KeepTalkWait': True, 'OffsetBase': 0})
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'ASCommand': 'DemoWait', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {
        Npc_HighMountain037[IpponSugi].EventNpcRitoTakeOff({'IsWaitEnd': True, 'FlagOnly': True})
        Npc_HighMountain037[IpponSugi].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 150.0, 'Position': [-3085.0, 673.5, -2660.0]})
        Npc_HighMountain037[IpponSugi].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Npc_HighMountain009[IpponSugi].EventNpcRitoTakeOff({'IsWaitEnd': True, 'FlagOnly': True})
        Npc_HighMountain009[IpponSugi].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 150.0, 'Position': [-3087.0, 671.0, -2664.0]})
        Npc_HighMountain009[IpponSugi].EventGoOffstageForUser({'IsSleepXLink': False, 'IsWaitEnd': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Npc_Tulin_Sage[DynamicGenerateSage].EventTriggerChangeEmotion({'IsActFaceOnly': False, 'EmotionType': 0})
        Npc_Tulin_Sage[DynamicGenerateSage].EventPlayAS({'ASName': 'DemoTurn', 'IsAllSlot': True, 'IsAnimeDriven': True, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
    }

}

void C05() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_HighMountain009', 'PosVector': [-0.27000001072883606, -1.590000033378601, 6.130000114440918], 'AtVector': [-0.20000000298023224, -0.30000001192092896, 2.4700000286102295], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1InstanceName': 'IpponSugi', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    } {
        Player.EventPlayerWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'InstanceName': 'IpponSugi', 'UseDemoWait': True})
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'DemoWait', 'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        Player.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_HighMountain009', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': 'IpponSugi', 'TurnFaceControlType': 1})
    } {
        Npc_Tulin_Sage[DynamicGenerateSage].EventTriggerRequestLookAtTheFront()
        Npc_Tulin_Sage[DynamicGenerateSage].EventSageWarpToNearAnchor({'IsWaitEnd': True, 'InstanceName': 'IpponSugi_sage', 'ActorName': 'DestinationAnchor'})
    }

}

void C06() {
    Player.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_HighMountain009', 'Direction': 135.0, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'InstanceName': 'IpponSugi', 'TurnFaceControlType': 1})

    fork {
        Npc_HighMountain009[IpponSugi].EventWarpToTargetPosAndRot({'YAngle': 135.0, 'IsWaitEnd': False, 'Position': [-3042.25, 650.0, -2738.0]})
        Npc_HighMountain009[IpponSugi].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})
    } {
        Npc_HighMountain037[IpponSugi].EventWarpToTargetPosAndRot({'YAngle': 150.0, 'Position': [-3041.75, 650.0, -2736.0], 'IsWaitEnd': False})
        Npc_HighMountain037[IpponSugi].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})
    }

    EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'SceneName': 'C06_0', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'RootType': 3, 'TargetActorName': 'Player', 'CalcUpInInterpolate': False})
}

void Pre() {
    Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 42.881099700927734, 'Position': [-3039.75, 648.0, -2741.75], 'UseDemoWait': True})
    Player.EventPlayerStopInAir({'IsWaitEnd': True, 'EnableCalcAnm': False})

    fork {
        Npc_HighMountain009[IpponSugi].EventTriggerParticipateEvent()
        Npc_HighMountain037[IpponSugi].EventTriggerParticipateEvent()
        Npc_HighMountain009[IpponSugi].EventTriggerEquipmentUserRequestCreateStaticEquipment({'EquipmentActorName': 'Weapon_Bow_016', 'DynamicEquipmentState': 2, 'AttachmentName': '', 'EffectType': 0, 'EffectValue': -1})
        Npc_HighMountain009[IpponSugi].EventTriggerChangeAIScheduleEquipState({'EquipState': 1})
        Npc_HighMountain037[IpponSugi].EventTriggerChangeAIScheduleEquipState({'EquipState': 1})
    } {

        call SetUp_Tulin()

    }

    Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [-3039.75, 646.4113159179688, -2741.75], 'YAngle': 42.881099700927734, 'UseDemoWait': True})
    Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'ASCommand': 'DemoWait', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})

    fork {
        Player.EventTriggerParticipateEvent()
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'DemoWait', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [-3039.75, 646.4113159179688, -2741.75], 'YAngle': 42.881099700927734, 'UseDemoWait': True})
    } {
        Npc_Tulin_Sage[DynamicGenerateSage].EventTriggerRequestLookAtTheFront()
        Npc_Tulin_Sage[DynamicGenerateSage].EventNpcRitoTakeOff({'IsWaitEnd': True, 'FlagOnly': True})
    } {
        EventCamera.EventTriggerParticipateEvent()
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    Npc_Tulin_Sage[DynamicGenerateSage].EventWarpToTargetActor({'ActorName': 'Player', 'TargetActorKind': 1, 'OffsetBase': 1, 'IsWaitEnd': True, 'InstanceName': '', 'YAngle': -180.0, 'PositionOffset': [0.0, 5.0, 3.0]})
    EventCamera.EventMoveToTargetPosCamera({'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'PosVector': [-3039.1201171875, 647.989990234375, -2740.320068359375], 'AtVector': [-3038.3798828125, 647.8200073242188, -2740.090087890625], 'TargetFovy': 48.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
}

void C07() {

    fork {
        Npc_HighMountain009[IpponSugi].EventNpcRitoLand({'IsWaitEnd': True, 'FallSpped': 1.0, 'LandingHeight': 5.0, 'FlagOnly': False, 'IsChangePhysicsSettingDynamic': False})
        Npc_HighMountain009[IpponSugi].EventPlayAS({'IsAnimeDriven': False, 'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'SceneName': 'C07_0', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'RootType': 3, 'TargetActorName': 'Player', 'CalcUpInInterpolate': False})
        Npc_HighMountain009[IpponSugi].EventTalk({'IsWaitEnd': True, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Dm_RT_0035:Dm_RT_0035_09', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})
        Npc_HighMountain037[IpponSugi].EventNpcRitoLand({'LandingHeight': 5.0, 'IsWaitEnd': True, 'FallSpped': 1.0, 'FlagOnly': False, 'IsChangePhysicsSettingDynamic': False})
        Npc_HighMountain037[IpponSugi].EventTriggerChangeAIScheduleEquipState({'EquipState': 0})
        Npc_HighMountain037[IpponSugi].EventPlayAS({'IsAnimeDriven': False, 'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
    } {
        Npc_Tulin_Sage[DynamicGenerateSage].EventTriggerLookAtObject({'ActorName': 'Npc_HighMountain009', 'Target': 3, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': 'IpponSugi', 'OffsetBase': 0, 'WorldPos': [0.0, 0.0, 0.0], 'ResetArriveTransformFixed': False})
        Npc_Tulin_Sage[DynamicGenerateSage].EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': 20.0, 'IsAllSlot': False})
    }

}

void C08() {
    EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'SceneName': 'C08_0', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'RootType': 3, 'TargetActorName': 'Player', 'CalcUpInInterpolate': False})

    fork {
        Npc_Tulin_Sage[DynamicGenerateSage].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsWaitEnd': True, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Dm_RT_0035:Dm_RT_0035_11', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'Talk', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Tulin_Sage[DynamicGenerateSage].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsWaitEnd': True, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': 'Wait', 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Dm_RT_0035:Dm_RT_0035_11_01', 'IsNotOpenIfSkipedMostRecent': False})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        Npc_HighMountain009[IpponSugi].EventTriggerLookAtObject({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'InstanceName': 'DynamicGenerateSage', 'ActorName': 'Npc_Tulin_Sage', 'ResetArriveTransformFixed': False})
    }

    Npc_HighMountain009[IpponSugi].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Dm_RT_0035:Dm_RT_0035_12', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void C09() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'SceneName': 'C09_0', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'RootType': 3, 'TargetActorName': 'Player', 'CalcUpInInterpolate': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})

        fork {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'SceneName': 'C09_1', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'RootType': 3, 'TargetActorName': 'Player', 'CalcUpInInterpolate': False})
        } {
            Npc_Tulin_Sage[DynamicGenerateSage].EventTriggerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'ActorName': 'Player', 'InstanceName': '', 'ResetArriveTransformFixed': False})
        } {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
            Player.EventTriggerPlayerLookAtObject({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': 'DynamicGenerateSage', 'ActorName': 'Npc_Tulin_Sage', 'TurnFaceControlType': 1})
        }

        Npc_Tulin_Sage[DynamicGenerateSage].EventTriggerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'ActorName': 'Npc_HighMountain009', 'InstanceName': 'IpponSugi', 'ResetArriveTransformFixed': False})
    } {
        Npc_Tulin_Sage[DynamicGenerateSage].EventTalk({'IsWaitEnd': True, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsCloseDialog': False, 'EndDialogOption': 3, 'MessageId': 'EventFlowMsg/Dm_RT_0035:Dm_RT_0035_13', 'IsPlayASAllSlot': False, 'ASName': 'Wait', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 91})
    }

    EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
}

void C10() {
    EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'SceneName': 'C10_0', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'RootType': 3, 'TargetActorName': 'Player', 'CalcUpInInterpolate': False})
    Player.EventTriggerPlayerLookAtObject({'Target': 3, 'InstanceName': 'IpponSugi', 'ActorName': 'Npc_HighMountain009', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1})
    Npc_Tulin_Sage[DynamicGenerateSage].EventTriggerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'ActorName': 'Npc_HighMountain037', 'InstanceName': 'IpponSugi', 'PosOffset': [0.0, 0.699999988079071, 0.0], 'ResetArriveTransformFixed': False})
    Npc_HighMountain037[IpponSugi].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Dm_RT_0035:Dm_RT_0035_14', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Tulin_Sage[DynamicGenerateSage].EventTriggerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'ActorName': 'Npc_HighMountain009', 'InstanceName': 'IpponSugi', 'PosOffset': [0.0, 0.699999988079071, 0.0], 'ResetArriveTransformFixed': False})

    fork {
        Npc_Tulin_Sage[DynamicGenerateSage].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Dm_RT_0035:Dm_RT_0035_15', 'IsPlayASAllSlot': False, 'ASName': 'Talk', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 8})
        Player.EventTriggerPlayerLookAtObject({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1, 'ActorName': 'Npc_Tulin_Sage', 'InstanceName': 'DynamicGenerateSage'})
    }

}

void C11() {
    EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'SceneName': 'C11_0', 'CameraName': '', 'IsIgnoreRootRot': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'RootType': 3, 'IsReferenceRootOnce': True, 'TargetActorName': 'Npc_Tulin_Sage', 'TargetActorInstanceName': 'DynamicGenerateSage', 'CalcUpInInterpolate': False})
    Npc_Tulin_Sage[DynamicGenerateSage].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Dm_RT_0035:Dm_RT_0035_16', 'IsPlayASAllSlot': False, 'ASName': 'Talk', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Tulin_Sage[DynamicGenerateSage].EventPlayAS({'IsWaitEnd': False, 'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    Player.EventTriggerPlayerLookAtObject({'Target': 3, 'InstanceName': 'IpponSugi', 'ActorName': 'Npc_HighMountain009', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1})
}

void C12() {
    EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'SceneName': 'C12_0', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'RootType': 3, 'TargetActorName': 'Player', 'CalcUpInInterpolate': False})
    Npc_HighMountain009[IpponSugi].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Dm_RT_0035:Dm_RT_0035_17', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 25})

    fork {
        Npc_HighMountain009[IpponSugi].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Dm_RT_0035:Dm_RT_0035_18', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        Npc_Tulin_Sage[DynamicGenerateSage].EventTriggerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'ActorName': 'Npc_HighMountain009', 'InstanceName': 'IpponSugi', 'PosOffset': [0.0, 0.699999988079071, 0.0], 'ResetArriveTransformFixed': False})
    }

}

void C13() {
    EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'SceneName': 'C13_0', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'RootType': 3, 'TargetActorName': 'Player', 'CalcUpInInterpolate': False})
    Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'ASCommand': 'DemoWait', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    Npc_HighMountain037[IpponSugi].EventTriggerLookAtObject({'ActorName': 'Npc_HighMountain009', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'InstanceName': 'IpponSugi', 'ResetArriveTransformFixed': False})

    fork {
        Npc_HighMountain009[IpponSugi].EventTalk({'IsWaitEnd': True, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsCloseDialog': True, 'EndDialogOption': 0, 'MessageId': 'EventFlowMsg/Dm_RT_0035:Dm_RT_0035_19', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    }

}

void C14() {
    EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'SceneName': 'C14_0', 'CameraName': '', 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'RootType': 3, 'TargetActorName': 'Player', 'IsIgnoreRootRot': False, 'CalcUpInInterpolate': False})
    Npc_HighMountain037[IpponSugi].EventTriggerLookAtObject({'ActorName': 'Npc_Tulin_Sage', 'InstanceName': 'DynamicGenerateSage', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'ResetArriveTransformFixed': False})
    Npc_Tulin_Sage[DynamicGenerateSage].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Dm_RT_0035:Dm_RT_0035_20', 'IsPlayASAllSlot': False, 'ASName': 'TalkSurprisedSmall', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

    fork {
        Npc_HighMountain009[IpponSugi].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Dm_RT_0035:Dm_RT_0035_21', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        Npc_Tulin_Sage[DynamicGenerateSage].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
        Npc_Tulin_Sage[DynamicGenerateSage].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Wait', 'IsWaitEnd': False})
    }

    SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 91})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    Npc_HighMountain009[IpponSugi].EventTriggerLookAtObject({'Target': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'WorldPos': [-3030.5, 1585.4339599609375, -2772.0], 'ResetArriveTransformFixed': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}

void C15() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'StartAccelerateRate': 0.20000000298023224, 'PosVector': [-3043.889892578125, 650.8300170898438, -2734.239990234375], 'AtVector': [-3042.6298828125, 649.8400268554688, -2736.010009765625], 'TargetFovy': 35.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 200, 'TargetFovy': 35.0, 'PosVector': [-3043.56005859375, 649.3900146484375, -2734.699951171875], 'AtVector': [-3042.6298828125, 652.9600219726562, -2736.010009765625], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_HighMountain009[IpponSugi].EventWait({'IsWaitEnd': True, 'Frames': 50})
        Npc_HighMountain009[IpponSugi].EventTalk({'IsWaitEnd': True, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsCloseDialog': False, 'EndDialogOption': 3, 'MessageId': 'EventFlowMsg/Dm_RT_0035:Dm_RT_0035_22', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        Npc_HighMountain037[IpponSugi].EventTriggerLookAtObject({'Target': 0, 'OffsetBase': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'WorldPos': [-3030.5, 1585.4339599609375, -2772.0], 'ResetArriveTransformFixed': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
        Npc_Tulin_Sage[DynamicGenerateSage].EventTriggerLookAtObject({'Target': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'WorldPos': [-3030.5, 1585.4339599609375, -2772.0], 'ResetArriveTransformFixed': False})
        Player.EventTriggerPlayerLookAtObject({'Target': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1, 'WorldPos': [-3030.5, 1585.4339599609375, -2772.0]})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})

        fork {
            Player.EventPlayerTurnAndLook({'Target': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1, 'IsWaitEnd': True, 'WorldPos': [-835.5208129882812, 1585.4339599609375, -3535.69091796875], 'KeepTalkWait': True, 'OffsetBase': 0})
        } {
            Npc_Tulin_Sage[DynamicGenerateSage].EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 0, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'WorldPos': [-2859.5, 1585.4339599609375, -3005.5], 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        }

    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
}

void C16() {

    fork {
        Npc_HighMountain009[IpponSugi].EventTriggerLookAtObject({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'InstanceName': 'DynamicGenerateSage', 'ActorName': 'Npc_Tulin_Sage', 'ResetArriveTransformFixed': False})
        Npc_HighMountain009[IpponSugi].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Dm_RT_0035:Dm_RT_0035_23', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_HighMountain009[IpponSugi].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_RT_0035:Dm_RT_0035_30', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-3034.429931640625, 652.0, -2746.77001953125], 'AtVector': [-3037.0, 650.010009765625, -2743.550048828125], 'TargetFovy': 30.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})

        fork {
            Player.EventPlayerTurnAndLook({'ActorName': 'Npc_HighMountain037', 'TurnFaceControlType': 1, 'Target': 3, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': 'IpponSugi', 'KeepTalkWait': True, 'OffsetBase': 0})
            Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'DemoWait', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            Player.EventTriggerPlayerLookAtObject({'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'WorldPos': [-2859.5, 1585.4339599609375, -3005.5], 'Target': 3, 'ActorName': 'Npc_HighMountain009', 'InstanceName': 'IpponSugi', 'TurnFaceControlType': 1})
        } {
            Npc_Tulin_Sage[DynamicGenerateSage].EventNPCTurnToTarget({'Target': 3, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'InstanceName': 'IpponSugi', 'ActorName': 'Npc_HighMountain009', 'PosOffset': [0.0, 0.699999988079071, 0.0], 'FaceControlType': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            Npc_Tulin_Sage[DynamicGenerateSage].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})
            Npc_Tulin_Sage[DynamicGenerateSage].EventTriggerLookAtObject({'WorldPos': [-2859.5, 1585.4339599609375, -3005.5], 'Direction': 0.0, 'OffsetBase': 0, 'ActorName': 'Npc_HighMountain009', 'Target': 3, 'InstanceName': 'IpponSugi', 'PosOffset': [0.0, 0.699999988079071, 0.0], 'ResetArriveTransformFixed': False})
        } {
            Npc_HighMountain037[IpponSugi].EventTriggerLookAtObject({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'InstanceName': 'DynamicGenerateSage', 'ActorName': 'Npc_Tulin_Sage', 'ResetArriveTransformFixed': False})
        }

    }

}

void C18() {
    EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'SceneName': 'C18_0', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'RootType': 3, 'TargetActorName': 'Npc_HighMountain009', 'TargetActorInstanceName': 'IpponSugi', 'CalcUpInInterpolate': False})
    Npc_HighMountain009[IpponSugi].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Dm_RT_0035:Dm_RT_0035_27', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Tulin_Sage[DynamicGenerateSage].EventTriggerChangeEmotion({'IsActFaceOnly': False, 'EmotionType': 0})
}

void C17() {
    EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'SceneName': 'C17_0', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'RootType': 3, 'TargetActorName': 'Player', 'CalcUpInInterpolate': False})
    Npc_HighMountain009[IpponSugi].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Dm_RT_0035:Dm_RT_0035_24', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Tulin_Sage[DynamicGenerateSage].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Dm_RT_0035:Dm_RT_0035_25', 'IsPlayASAllSlot': False, 'ASName': 'Wait', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void C19() {
    EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'SceneName': 'C19_0', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'RootType': 3, 'TargetActorName': 'Player', 'CalcUpInInterpolate': False})
    Npc_Tulin_Sage[DynamicGenerateSage].EventTalk({'IsWaitEnd': True, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Dm_RT_0035:Dm_RT_0035_28', 'IsPlayASAllSlot': False, 'ASName': '', 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
}

void C20() {
    EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'SceneName': 'C20_0', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'RootType': 3, 'TargetActorName': 'Player', 'TargetActorInstanceName': '', 'CalcUpInInterpolate': False})
    Npc_Tulin_Sage[DynamicGenerateSage].EventNPCTurnToTarget({'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'FaceControlType': 1, 'Target': 2, 'WorldPos': [0.0, 0.0, 0.0], 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})

    fork {
        Npc_Tulin_Sage[DynamicGenerateSage].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Dm_RT_0035:Dm_RT_0035_28_01', 'ASName': 'Wait', 'IsNotOpenIfSkipedMostRecent': False})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        Player.EventTriggerPlayerRequestLookAtTheFront()
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})

    fork {
        Npc_HighMountain009[IpponSugi].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Dm_RT_0035:Dm_RT_0035_29', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        Npc_Tulin_Sage[DynamicGenerateSage].EventTriggerLookAtObject({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'InstanceName': 'IpponSugi', 'ActorName': 'Npc_HighMountain009', 'PosOffset': [0.0, 0.699999988079071, 0.0], 'ResetArriveTransformFixed': False})
    }

    SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_Dm_RT_0035', 'IsUseSuspendFade': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
    Npc_Tulin_Sage[DynamicGenerateSage].EventTriggerRequestLookAtTheFront()
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-3042.989990234375, 648.0700073242188, -2738.659912109375], 'AtVector': [-3041.22998046875, 648.2100219726562, -2740.2900390625], 'TargetFovy': 50.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera()
}

void SetUp_Tulin() {
    if !GameDataActor.EventQueryIsGameDataEnum({'Index': -1, 'GameDataName': 'PlayerStatus.Companion.Wind.JoiningCondition', 'Value': 'Breakaway'}) {
        GameDataActor.EventTriggerSetGameDataEnum({'Index': -1, 'GameDataName': 'PlayerStatus.Companion.Wind.JoiningCondition', 'Value': 'Joining'})
    }
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    GameSystemActor[DynamicGenerateSage].EventWaitForDynamicSagePresence({'IsWaitEnd': True, 'SageType': 4})
    Npc_Tulin_Sage[DynamicGenerateSage].EventTriggerParticipateEvent()
}
