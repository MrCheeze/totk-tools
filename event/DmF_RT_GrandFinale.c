-------- EventFlow: DmF_RT_GrandFinale --------

Actor: Npc_HighMountain005
entrypoint: None()
actions: ['EventTalk', 'EventTriggerLookAtObject', 'EventTriggerParticipateEvent', 'EventGoOffstageForUser', 'EventWarpToTargetPosAndRot', 'EventPlayAS', 'EventTriggerChangeEmotion', 'EventWait', 'EventTriggerRequestLookAtTheFront']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/DmF_RT_GrandFinale/DmF_RT_GrandFinale_Npc_Rito_Saki/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/DmF_RT_GrandFinale_Saki.root.as', 'IsBindNearestActor': False}

Actor: Npc_HighMountain009[Finish]
entrypoint: None()
actions: ['EventTalk', 'EventTriggerLookAtObject', 'EventTriggerParticipateEvent', 'EventTriggerChangeEmotion', 'EventPlayAS', 'EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'UseEventModelAnime': 'Work/Model/Event/DmF_RT_GrandFinale/DmF_RT_GrandFinale_Npc_Rito_Hearts/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/DmF_RT_GrandFinale_Hearts.root.as', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerWarpToTargetPosAndRot', 'EventTriggerParticipateEvent', 'EventTriggerPlayerLookAtObject', 'EventPlayerTurnAndLook', 'EventPlayerPlayASForFlowchart', 'EventGoOffstageForUser', 'EventPlayerWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'UseEventModelAnime': '', 'UseEventAS': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Npc_HighMountain034
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventPlayAS', 'EventTriggerParticipateEvent', 'EventTriggerLookAtObject']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 2, 'IsBindNearestActor': False}

Actor: Npc_HighMountain030
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventAIScheduleMoveToPos', 'EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_HighMountain008
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventAIScheduleMoveToPos', 'EventTriggerParticipateEvent', 'EventTriggerLookAtObject']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsBindNearestActor': False}

Actor: Npc_HighMountain033
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor[Player]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsBindNearestActor': False}

Actor: GameSystemActor[Tulin]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsBindNearestActor': False}

Actor: GameSystemActor[Teba]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsBindNearestActor': False}

Actor: TwnObj_Village_RitoPharmacySign_A_01[B-3_001]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventWarpToTargetPosAndRot']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Weapon_Bow_128
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventTriggerModelBind', 'EventTriggerEquipEquipment', 'EventGoOffstageForUser', 'EventWait', 'EventTriggerChangeActivateReaction']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'Position': [0.0, 2.0, 0.0], 'IsBindNearestActor': False}

Actor: Dm_Locator[TulinPos]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'Position': [-3592.5, 317.95941162109375, -1801.25], 'Rotation': [0.0, 95.0, 0.0], 'IsGrounding': False, 'IsWorld': False, 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundRequestDucking', 'EventTriggerForbidEmitIfOutsideView', 'EventTriggerCancelForbidEmitIfOutsideView']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventEffectAddELinkHiddenSetting']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['Event_SetWeatherForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Tulin_Sage[Finish]
entrypoint: None()
actions: ['EventTalk', 'EventNPCTurnToTarget', 'EventPlayAS', 'EventTriggerLookAtObject', 'EventTriggerParticipateEvent', 'EventWarpToTargetActor', 'EventTriggerRequestLookAtTheFront', 'EventTriggerChangeAIScheduleEquipState', 'EventWait', 'EventTriggerChangeEmotion']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/DmF_RT_GrandFinale/DmF_RT_GrandFinale_Npc_Rito_Moto_Young/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/DmF_RT_GrandFinale_Moto_Young.root.as', 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Bow_Strong': '', 'EquipmentUser_Bow_Strong_EquipmentState': 0, 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Npc_ValleyVillage010
entrypoint: None()
actions: ['EventTalk', 'EventTriggerLookAtObject', 'EventPlayAS', 'EventTriggerChangeEmotion', 'EventNPCTurnToTarget', 'EventWarpToTargetPosAndRot', 'EventTriggerChangeAIScheduleEquipState', 'EventTriggerParticipateEvent', 'EventWarpToTargetActor', 'EventTriggerRequestLookAtTheFront']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/DmF_RT_GrandFinale/DmF_RT_GrandFinale_Npc_Rito_Teba/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/DmF_RT_GrandFinale_Teba.root.as', 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendKeepStateMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeIn', 'EventWait', 'EventEventFadeOut', 'EventTraverseAroundAndWaitCreateActor', 'EventWaitResourceStableForTerrainAndCave']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventWait']
queries: ['EventQueryIsGameDataInt', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Weapon_Bow_129
entrypoint: None()
actions: ['EventGoOffstageForUser']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_HighMountain021
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void DmF_RT_GrandFinale() {

    call Setup_initial()


    call C01()


    call C02()


    call C03()


    call C04()


    call C05()


    call C06_C07()


    call C08()


    call C09()


    call C10()


    call C11_C13()


    call C14()


    call C15()

}

void Setup_initial() {
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'Color': 0, 'Length': 2, 'IsNoPlayAnime': True})
    EventWorldManagerController.Event_SetWeatherForFlowchart({'IsImmTrans': True, 'WeatherType': 0})
    EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'Camera', 'KeyName': 'Snow'})
    GameSystemActor.EventWaitResourceStableForTerrainAndCave({'IsWaitEnd': True})
    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})

    fork {
        Npc_HighMountain008.EventTriggerParticipateEvent()
        Npc_HighMountain008.EventWarpToTargetPosAndRot({'Position': [-3641.304931640625, 319.6083984375, -1795.97802734375], 'YAngle': -41.529930114746094, 'IsWaitEnd': True})
    } {
        Npc_HighMountain030.EventTriggerParticipateEvent()
        Npc_HighMountain030.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [-3636.450927734375, 320.14910888671875, -1805.6839599609375], 'YAngle': -173.79159545898438})
    } {
        TwnObj_Village_RitoPharmacySign_A_01[B-3_001].EventTriggerParticipateEvent()
        TwnObj_Village_RitoPharmacySign_A_01[B-3_001].EventWarpToTargetPosAndRot({'Position': [-3636.31201171875, 289.9490051269531, -1819.1500244140625], 'YAngle': 64.29215240478516, 'IsWaitEnd': True})
    } {
        Npc_HighMountain021.EventTriggerParticipateEvent()
    }

}

void C01() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'PosVector': [-3652.419921875, 352.3999938964844, -1751.8599853515625], 'AtVector': [-3648.3701171875, 350.2799987792969, -1755.9300537109375], 'TargetFovy': 55.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-3652.419921875, 351.0199890136719, -1751.8599853515625], 'AtVector': [-3648.800048828125, 347.6499938964844, -1755.4599609375], 'TargetFovy': 55.0, 'MoveTime': 180, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_HighMountain008.EventAIScheduleMoveToPos({'Pos': [-3649.780029296875, 319.7330017089844, -1786.5880126953125], 'Rot': 0.0, 'ASName': '', 'IsTurnToRot': False, 'IsAlignPos': False, 'DesiredGear': 0, 'IsWaitEnd': False, 'ForceIsNotAlignmentWaitPosition': False})
    } {
        Npc_HighMountain030.EventAIScheduleMoveToPos({'Pos': [-3637.696044921875, 314.3738098144531, -1816.02099609375], 'IsWaitEnd': False, 'Rot': 0.0, 'ASName': '', 'IsTurnToRot': False, 'IsAlignPos': False, 'DesiredGear': 0, 'ForceIsNotAlignmentWaitPosition': False})
    } {

        call Setup_background()

        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 2})
    }

}

void C02() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'TargetFovy': 50.0, 'PosVector': [-3634.6201171875, 297.739990234375, -1798.550048828125], 'AtVector': [-3635.02001953125, 297.4800109863281, -1800.969970703125], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 120, 'PosVector': [-3634.6201171875, 296.1600036621094, -1798.550048828125], 'AtVector': [-3635.02001953125, 295.7799987792969, -1800.969970703125], 'TargetFovy': 50.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 94.9999771118164, 'Position': [-3594.009033203125, 317.95941162109375, -1803.4610595703125], 'UseDemoWait': True})
        Player.EventTriggerPlayerLookAtObject({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Npc_ValleyVillage010', 'InstanceName': '', 'TurnFaceControlType': 1})
    } {
        Npc_HighMountain034.EventTriggerLookAtObject({'InstanceName': '', 'Direction': 0.0, 'OffsetBase': 0, 'ActorName': 'Npc_HighMountain008', 'WorldPos': [-3633.489990234375, 292.0, -1817.657958984375], 'Target': 3, 'PosOffset': [0.5, -0.10000000149011612, -1.0], 'ResetArriveTransformFixed': False})
        Npc_HighMountain034.EventPlayAS({'ASName': 'Act_Call_Hello', 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAllSlot': True, 'IsAnimeDriven': True, 'IsWaitEnd': False})
    } {
        Npc_HighMountain008.EventWarpToTargetPosAndRot({'IsWaitEnd': False, 'YAngle': -49.842681884765625, 'Position': [-3629.93994140625, 290.8399963378906, -1820.469970703125]})
        Npc_HighMountain008.EventTriggerLookAtObject({'ActorName': 'Npc_HighMountain034', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'ResetArriveTransformFixed': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 11})
        Npc_HighMountain008.EventAIScheduleMoveToPos({'ASName': '', 'DesiredGear': 0, 'IsWaitEnd': False, 'Rot': -60.0, 'IsAlignPos': False, 'Pos': [-3635.47509765625, 289.9690856933594, -1816.6240234375], 'IsTurnToRot': True, 'ForceIsNotAlignmentWaitPosition': False})
    }

}

void C03() {

    fork {

        call Camera_A()

    } {
        GameSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})
        Npc_HighMountain009[Finish].EventTriggerLookAtObject({'Target': 3, 'ActorName': 'Npc_Tulin_Sage', 'InstanceName': 'Finish', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:Bgm下げ', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
        Npc_HighMountain009[Finish].EventTalk({'IsNotBecomeSpeaker': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/DmF_RT_GrandFinale:DmF_RT_GrandFinale_001', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        GameSystemActor[Player].EventWait({'IsWaitEnd': True, 'Frames': 20})
        Player.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_HighMountain009', 'InstanceName': 'Finish', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1})
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Talk', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {
        GameSystemActor[Tulin].EventWait({'Frames': 15, 'IsWaitEnd': True})
        Npc_Tulin_Sage[Finish].EventTriggerLookAtObject({'Target': 3, 'ActorName': 'Npc_HighMountain009', 'InstanceName': 'Finish', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    }

    Npc_Tulin_Sage[Finish].EventNPCTurnToTarget({'Target': 3, 'ActorName': 'Npc_HighMountain009', 'InstanceName': 'Finish', 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'IsWaitEnd': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})

    fork {
        Npc_Tulin_Sage[Finish].EventTalk({'IsNotBecomeSpeaker': True, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/DmF_RT_GrandFinale:DmF_RT_GrandFinale_002', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        Npc_HighMountain005.EventTriggerLookAtObject({'ActorName': 'Npc_Tulin_Sage', 'InstanceName': 'Finish', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'ResetArriveTransformFixed': False})
    }

}

void C04() {

    fork {

        call Camera_B()

    } {
        Player.EventTriggerPlayerLookAtObject({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Npc_HighMountain005', 'InstanceName': '', 'TurnFaceControlType': 1})
    } {
        Npc_HighMountain009[Finish].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
    } {
        Npc_HighMountain005.EventTriggerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'InstanceName': '', 'Target': 3, 'ActorName': 'Npc_ValleyVillage010', 'ResetArriveTransformFixed': False})
    } {
        Npc_Tulin_Sage[Finish].EventNPCTurnToTarget({'Target': 3, 'IsWaitEnd': False, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'ActorName': 'Npc_ValleyVillage010', 'FaceControlType': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    }

    Npc_ValleyVillage010.EventTalk({'IsNotBecomeSpeaker': True, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/DmF_RT_GrandFinale:DmF_RT_GrandFinale_003', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': True, 'ASName': 'C04_TalkS_Teba', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_ValleyVillage010.EventTalk({'IsNotBecomeSpeaker': True, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/DmF_RT_GrandFinale:DmF_RT_GrandFinale_006', 'IsPlayASAllSlot': True, 'ASName': 'C04_TalkL_Teba', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor[Teba].EventWait({'IsWaitEnd': True, 'Frames': 40})

    fork {
        GameSystemActor[Teba].EventWait({'IsWaitEnd': True, 'Frames': 25})
        Npc_ValleyVillage010.EventPlayAS({'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'LookLeft_Teba', 'IsAllSlot': True})
    } {
        Npc_HighMountain005.EventTriggerLookAtObject({'ActorName': 'Npc_Tulin_Sage', 'InstanceName': 'Finish', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'PosOffset': [0.0, 0.5, 0.0], 'ResetArriveTransformFixed': False})
        Npc_HighMountain005.EventWait({'Frames': 20, 'IsWaitEnd': True})
        Npc_HighMountain005.EventTalk({'IsNotBecomeSpeaker': True, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/DmF_RT_GrandFinale:DmF_RT_GrandFinale_004', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        Npc_Tulin_Sage[Finish].EventPlayAS({'IsWaitEnd': False, 'ASName': 'C05_PreLoop_Tulin', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    }

}

void C05() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-3591.570068359375, 319.32000732421875, -1802.739990234375], 'AtVector': [-3593.080078125, 318.8900146484375, -1800.02001953125], 'TargetFovy': 50.29999923706055, 'MoveTime': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        GameSystemActor[Player].EventWait({'IsWaitEnd': True, 'Frames': 25})
        Player.EventTriggerPlayerLookAtObject({'Target': 3, 'InstanceName': 'Finish', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Npc_Tulin_Sage', 'TurnFaceControlType': 1})
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Wait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {
        Npc_Tulin_Sage[Finish].EventTalk({'IsNotBecomeSpeaker': True, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/DmF_RT_GrandFinale:DmF_RT_GrandFinale_005', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': True, 'ASName': 'C05_Tulin', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        Npc_ValleyVillage010.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [-3589.823974609375, 317.9339904785156, -1802.595947265625], 'YAngle': -63.297298431396484})
        GameSystemActor[Teba].EventWait({'Frames': 25, 'IsWaitEnd': True})
        Npc_ValleyVillage010.EventTriggerRequestLookAtTheFront()
        Npc_ValleyVillage010.EventPlayAS({'ASName': 'Wait_LookTulin', 'IsWaitEnd': False, 'Partial': '', 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'IsAllSlot': True})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    Npc_Tulin_Sage[Finish].EventTriggerLookAtObject({'Target': 3, 'Direction': 0.0, 'OffsetBase': 0, 'ActorName': 'Npc_ValleyVillage010', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.6000000238418579, 0.0], 'ResetArriveTransformFixed': False})
    Npc_Tulin_Sage[Finish].EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': 20.0})
    SoundSystemActor.EventTriggerForbidEmitIfOutsideView({'IsIgnoreLODResult': True})

    fork {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Npc_HighMountain009[Finish].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'cross_arms_Hearts', 'IsWaitEnd': False})
    } {
        Npc_Tulin_Sage[Finish].EventTalk({'IsNotBecomeSpeaker': True, 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/DmF_RT_GrandFinale:DmF_RT_GrandFinale_008', 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
    }

}

void C06_C07() {

    fork {

        fork {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'PosVector': [-3592.860107421875, 319.5400085449219, -1805.2099609375], 'AtVector': [-3591.929931640625, 319.70001220703125, -1804.030029296875], 'TargetFovy': 26.989999771118164, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 150})
        } {
            Player.EventTriggerPlayerLookAtObject({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Npc_ValleyVillage010', 'InstanceName': '', 'TurnFaceControlType': 1})
        } {
            Npc_Tulin_Sage[Finish].EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'TulinPos', 'OffsetBase': 1, 'IsWaitEnd': True, 'PositionOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})
            Npc_Tulin_Sage[Finish].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'C08_1_Wait_Tulin'})
        } {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
            Npc_HighMountain005.EventTriggerLookAtObject({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ActorName': 'Npc_ValleyVillage010', 'InstanceName': '', 'ResetArriveTransformFixed': False})
        }


        fork {

            call Camera_A()

        } {
            Npc_HighMountain005.EventTriggerRequestLookAtTheFront()
            Npc_HighMountain005.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ASName': '07-Saki', 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True})
        }

    } {
        Npc_ValleyVillage010.EventPlayAS({'Partial': '', 'IsAllSlot': True, 'ASName': 'C06_Teba', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        GameSystemActor[Teba].EventWait({'Frames': 120, 'IsWaitEnd': True})
        SoundSystemActor.EventTriggerCancelForbidEmitIfOutsideView()
        Npc_ValleyVillage010.EventPlayAS({'Partial': '', 'IsWaitEnd': True, 'ASName': 'C07_Teba', 'IsAllSlot': True, 'IsAnimeDriven': True, 'ForceFadeInFrame': 30.0})
    }

}

void C08() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'PosVector': [-3594.219970703125, 319.489990234375, -1806.8900146484375], 'AtVector': [-3590.679931640625, 319.45001220703125, -1799.6800537109375], 'TargetFovy': 24.700000762939453, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_ValleyVillage010.EventTriggerChangeAIScheduleEquipState({'EquipState': 0})
        Npc_ValleyVillage010.EventPlayAS({'Partial': '', 'IsAnimeDriven': False, 'IsWaitEnd': False, 'IsAllSlot': True, 'ForceFadeInFrame': 0.0, 'ASName': 'C08_St_Teba'})
    } {
        Npc_Tulin_Sage[Finish].EventPlayAS({'Partial': '', 'IsAnimeDriven': False, 'IsWaitEnd': False, 'IsAllSlot': True, 'ForceFadeInFrame': 0.0, 'ASName': 'C08_2_Wait_Tulin'})
    } {
        Player.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Npc_HighMountain005.EventPlayAS({'ASName': 'Wait', 'ForceFadeInFrame': 0.0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        Npc_HighMountain005.EventTriggerLookAtObject({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ActorName': 'Npc_Tulin_Sage', 'InstanceName': 'Finish', 'PosOffset': [0.0, 0.5, 0.0], 'ResetArriveTransformFixed': False})
    }


    fork {
        GameSystemActor[Player].EventWait({'Frames': 30, 'IsWaitEnd': True})
        Player.EventTriggerPlayerLookAtObject({'WorldPos': [-3592.488037109375, 318.8500061035156, -1801.2239990234375], 'Target': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1})
    } {
        GameSystemActor[Teba].EventWait({'IsWaitEnd': True, 'Frames': 100})
        Npc_ValleyVillage010.EventTalk({'IsNotBecomeSpeaker': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/DmF_RT_GrandFinale:DmF_RT_GrandFinale_007', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': True, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': 'C08_Talk_Teba', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Tulin_Sage[Finish].EventTalk({'IsNotBecomeSpeaker': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/DmF_RT_GrandFinale:DmF_RT_GrandFinale_009', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': True, 'IsWaitEnd': True, 'ASName': 'C08_3_SurpriseS_Tulin', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_ValleyVillage010.EventTalk({'IsNotBecomeSpeaker': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/DmF_RT_GrandFinale:DmF_RT_GrandFinale_010', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': True, 'IsWaitEnd': True, 'ASName': 'C08_Talk_Teba', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }

    Npc_Tulin_Sage[Finish].EventWait({'IsWaitEnd': True, 'Frames': 20})
    Npc_Tulin_Sage[Finish].EventPlayAS({'Partial': '', 'IsAnimeDriven': False, 'IsAllSlot': True, 'ASName': 'C08_5_Think_Tulin', 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
    Npc_Tulin_Sage[Finish].EventWait({'IsWaitEnd': True, 'Frames': 100})
    Npc_Tulin_Sage[Finish].EventPlayAS({'Partial': '', 'IsAnimeDriven': False, 'IsAllSlot': True, 'ASName': 'C08_6_Decision_Tulin', 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
    Npc_Tulin_Sage[Finish].EventWait({'IsWaitEnd': True, 'Frames': 50})

    fork {
        Npc_ValleyVillage010.EventPlayAS({'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsAllSlot': True, 'ASName': 'C08_Ed_Teba', 'IsWaitEnd': False})
    } {
        Npc_Tulin_Sage[Finish].EventPlayAS({'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsAllSlot': True, 'ASName': 'C08_7_Take_Tulin', 'IsWaitEnd': False})
    }

    GameSystemActor[Teba].EventWait({'IsWaitEnd': True, 'Frames': 50})
}

void C09() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'PosVector': [-3593.93994140625, 318.7900085449219, -1806.050048828125], 'AtVector': [-3593.679931640625, 318.8399963378906, -1805.2900390625], 'TargetFovy': 14.600000381469727, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsLinearMove': True, 'IsWaitEnd': False, 'MoveTime': 375, 'PosVector': [-3593.669921875, 318.7900085449219, -1806.1099853515625], 'AtVector': [-3593.409912109375, 318.8399963378906, -1805.3499755859375], 'TargetFovy': 14.600000381469727, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Weapon_Bow_129.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        Npc_ValleyVillage010.EventPlayAS({'Partial': '', 'ForceFadeInFrame': 0.0, 'IsAnimeDriven': False, 'IsAllSlot': True, 'IsWaitEnd': True, 'ASName': 'C09_Teba'})
        Npc_ValleyVillage010.EventWarpToTargetPosAndRot({'Position': [-3590.0, 317.9588928222656, -1802.5], 'YAngle': -83.00000762939453, 'IsWaitEnd': True})
        Npc_ValleyVillage010.EventTriggerRequestLookAtTheFront()
        Npc_ValleyVillage010.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C10_Nod_Teba_PreLoop', 'IsAllSlot': True})
    } {
        Npc_HighMountain005.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [-3589.860107421875, 317.9599914550781, -1801.1500244140625], 'YAngle': -89.99999237060547})
    } {
        Npc_Tulin_Sage[Finish].EventTriggerChangeAIScheduleEquipState({'EquipState': 1})
        Npc_Tulin_Sage[Finish].EventPlayAS({'Partial': '', 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0, 'IsAllSlot': True, 'ASName': 'C09_1_Take_Tulin', 'IsWaitEnd': False})
        GameSystemActor[Tulin].EventWait({'IsWaitEnd': True, 'Frames': 80})
        Npc_Tulin_Sage[Finish].EventTalk({'IsNotBecomeSpeaker': True, 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/DmF_RT_GrandFinale:DmF_RT_GrandFinale_011', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': True, 'ASName': 'C09_1_TakeTalk_Tulin', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor[Tulin].EventWait({'IsWaitEnd': True, 'Frames': 30})
        Npc_Tulin_Sage[Finish].EventTalk({'IsNotBecomeSpeaker': True, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/DmF_RT_GrandFinale:DmF_RT_GrandFinale_012', 'IsWaitEnd': True, 'IsCloseDialog': False, 'EndDialogOption': 4, 'IsAnimeDriven': False, 'IsPlayASAllSlot': True, 'ASName': 'C09_2_Serious_Tulin', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor[Tulin].EventWait({'IsWaitEnd': True, 'Frames': 40})
        Npc_Tulin_Sage[Finish].EventTalk({'IsNotBecomeSpeaker': True, 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/DmF_RT_GrandFinale:DmF_RT_GrandFinale_014', 'IsWaitEnd': True, 'EndDialogOption': 4, 'IsCloseDialog': False, 'IsPlayASAllSlot': True, 'ASName': 'C09_3_Decision_Tulin', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Weapon_Bow_128.EventTriggerChangeActivateReaction({'IsActive': True})
    } {
        Weapon_Bow_128.EventWait({'Frames': 0, 'IsWaitEnd': False})
        Weapon_Bow_128.EventTriggerChangeActivateReaction({'IsActive': False})
        Weapon_Bow_128.EventTriggerModelBind({'ActorName': 'Npc_Tulin_Sage', 'InstanceName': 'Finish', 'BoneName': 'Weapon_R', 'RotOffset': [0.0, 0.0, 0.0], 'TransOffset': [0.0, 0.0, 0.0]})
    }

}

void C10() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'PosVector': [-3593.590087890625, 319.5, -1806.3299560546875], 'AtVector': [-3590.360107421875, 320.04998779296875, -1802.3900146484375], 'TargetFovy': 15.399999618530273, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 150, 'IsLinearMove': True, 'PosVector': [-3593.419921875, 319.5, -1806.3800048828125], 'AtVector': [-3590.18994140625, 320.04998779296875, -1802.43994140625], 'TargetFovy': 15.399999618530273, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 94.9999771118164, 'Position': [-3594.009033203125, 317.95941162109375, -1803.4610595703125], 'UseDemoWait': True})
        Player.EventTriggerPlayerLookAtObject({'WorldPos': [-3592.488037109375, 318.8500061035156, -1801.2239990234375], 'Target': 3, 'ActorName': 'Npc_ValleyVillage010', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1})
    } {
        Npc_ValleyVillage010.EventPlayAS({'Partial': '', 'IsAnimeDriven': False, 'IsAllSlot': True, 'IsWaitEnd': False, 'ASName': 'C10_Nod_Teba', 'ForceFadeInFrame': -1.0})
    } {
        Npc_HighMountain005.EventTriggerChangeEmotion({'IsActFaceOnly': True, 'EmotionType': 0})
        Npc_HighMountain005.EventPlayAS({'ASName': 'prayer_Saki', 'IsWaitEnd': False, 'Partial': '', 'IsAnimeDriven': False, 'IsAllSlot': True, 'ForceFadeInFrame': 5.0})
    } {
        Weapon_Bow_128.EventTriggerEquipEquipment({'ActorName': 'Npc_Tulin_Sage', 'InstanceName': 'Finish', 'IsSheathed': False, 'IsGetDemo': False})
    } {
        Npc_Tulin_Sage[Finish].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
        Npc_Tulin_Sage[Finish].EventPlayAS({'Partial': '', 'IsAnimeDriven': False, 'IsAllSlot': True, 'ForceFadeInFrame': -1.0, 'ASName': 'C11_Tulin_Ready', 'IsWaitEnd': False})
    }

}

void C11_C13() {

    call MainChallenge.Check_NumOfSageClear()

    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NumOfSageClear', 'Value': 1, 'Index': -1}) {
      case [0, 1]:

        fork {

            call C11_C13_camera()

        } {

            call C11_Player_action()

        } {

            call C11_Tulin_action()

            Npc_Tulin_Sage[Finish].EventTalk({'IsNotBecomeSpeaker': True, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/DmF_RT_GrandFinale:DmF_RT_GrandFinale_016', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_Tulin_Sage[Finish].EventTalk({'IsNotBecomeSpeaker': True, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/DmF_RT_GrandFinale:DmF_RT_GrandFinale_033', 'IsNotOpenIfSkipedMostRecent': False})
        } {

            call C11_Saki_action()

        }


        fork {

            call C12_camera()

        } {
            Npc_Tulin_Sage[Finish].EventTriggerLookAtObject({'Direction': 0.0, 'OffsetBase': 0, 'InstanceName': '', 'Target': 0, 'PosOffset': [0.0, 0.0, 0.0], 'ActorName': '', 'WorldPos': [-3594.009033203125, 319.0, -1803.4610595703125], 'ResetArriveTransformFixed': False})
            Npc_Tulin_Sage[Finish].EventTalk({'IsNotBecomeSpeaker': True, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/DmF_RT_GrandFinale:DmF_RT_GrandFinale_022', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_Tulin_Sage[Finish].EventTalk({'IsNotBecomeSpeaker': True, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/DmF_RT_GrandFinale:DmF_RT_GrandFinale_034', 'IsNotOpenIfSkipedMostRecent': False})
        }

        Npc_Tulin_Sage[Finish].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
        Npc_Tulin_Sage[Finish].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})

        fork {

            call C11_C13_camera()

        } {
            Npc_Tulin_Sage[Finish].EventPlayAS({'ForceFadeInFrame': 21.0, 'ASName': 'TalkWait', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False})
            GameSystemActor[Tulin].EventWait({'IsWaitEnd': True, 'Frames': 25})
            Npc_Tulin_Sage[Finish].EventTalk({'IsNotBecomeSpeaker': True, 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/DmF_RT_GrandFinale:DmF_RT_GrandFinale_015', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
        } {

            call C13_Hearts_action()

        }

      case 2:
        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NumOfSageClear', 'Value': 3, 'Index': -1}) {
          case 0:

            fork {

                call C11_C13_camera()

            } {

                call C11_Player_action()

            } {

                call C11_Tulin_action()

                Npc_Tulin_Sage[Finish].EventTalk({'IsNotBecomeSpeaker': True, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/DmF_RT_GrandFinale:DmF_RT_GrandFinale_013', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Npc_Tulin_Sage[Finish].EventTalk({'IsNotBecomeSpeaker': True, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/DmF_RT_GrandFinale:DmF_RT_GrandFinale_035', 'IsNotOpenIfSkipedMostRecent': False})
            } {

                call C11_Saki_action()

            }


            fork {

                call C12_camera()

            } {
                Npc_Tulin_Sage[Finish].EventTalk({'IsNotBecomeSpeaker': True, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/DmF_RT_GrandFinale:DmF_RT_GrandFinale_023', 'NotPlayLipSyncAnim': False, 'ASName': 'C12_Angry_Tulin', 'IsNotOpenIfSkipedMostRecent': False})
                Npc_Tulin_Sage[Finish].EventTriggerLookAtObject({'Direction': 0.0, 'OffsetBase': 0, 'InstanceName': '', 'Target': 0, 'PosOffset': [0.0, 0.0, 0.0], 'ActorName': '', 'WorldPos': [-3594.009033203125, 319.0, -1803.4610595703125], 'ResetArriveTransformFixed': False})
                Npc_Tulin_Sage[Finish].EventTalk({'IsNotBecomeSpeaker': True, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/DmF_RT_GrandFinale:DmF_RT_GrandFinale_036', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
                Npc_Tulin_Sage[Finish].EventTalk({'IsNotBecomeSpeaker': True, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/DmF_RT_GrandFinale:DmF_RT_GrandFinale_037', 'IsNotOpenIfSkipedMostRecent': False})
            }


            fork {

                call C11_C13_camera()

            } {
                GameSystemActor[Tulin].EventWait({'Frames': 15, 'IsWaitEnd': True})
                Npc_Tulin_Sage[Finish].EventTalk({'IsNotBecomeSpeaker': True, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/DmF_RT_GrandFinale:DmF_RT_GrandFinale_024', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Npc_Tulin_Sage[Finish].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
                Npc_Tulin_Sage[Finish].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
                Npc_Tulin_Sage[Finish].EventPlayAS({'ForceFadeInFrame': 21.0, 'ASName': 'TalkWait', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False})
                GameSystemActor[Tulin].EventWait({'IsWaitEnd': True, 'Frames': 30})
                Npc_Tulin_Sage[Finish].EventTalk({'IsNotBecomeSpeaker': True, 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/DmF_RT_GrandFinale:DmF_RT_GrandFinale_015', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
            } {

                call C13_Hearts_action()

            }

          case 1:

            fork {

                call C11_C13_camera()

            } {

                call C11_Player_action()

            } {

                call C11_Tulin_action()

                Npc_Tulin_Sage[Finish].EventTalk({'IsNotBecomeSpeaker': True, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/DmF_RT_GrandFinale:DmF_RT_GrandFinale_017', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Npc_Tulin_Sage[Finish].EventTalk({'IsNotBecomeSpeaker': True, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/DmF_RT_GrandFinale:DmF_RT_GrandFinale_038', 'IsNotOpenIfSkipedMostRecent': False})
            } {

                call C11_Saki_action()

            }


            fork {

                call C12_camera()

            } {
                Npc_Tulin_Sage[Finish].EventTalk({'IsNotBecomeSpeaker': True, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/DmF_RT_GrandFinale:DmF_RT_GrandFinale_025', 'NotPlayLipSyncAnim': False, 'ASName': 'Talk', 'IsNotOpenIfSkipedMostRecent': False})
            }


            fork {

                call C11_C13_camera()

            } {
                GameSystemActor[Tulin].EventWait({'Frames': 15, 'IsWaitEnd': True})
                Npc_Tulin_Sage[Finish].EventTalk({'IsNotBecomeSpeaker': True, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/DmF_RT_GrandFinale:DmF_RT_GrandFinale_026', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                GameSystemActor[Tulin].EventWait({'IsWaitEnd': True, 'Frames': 30})
                Npc_Tulin_Sage[Finish].EventTalk({'IsNotBecomeSpeaker': True, 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/DmF_RT_GrandFinale:DmF_RT_GrandFinale_015', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
            } {

                call C13_Hearts_action()

            }

          case 2:

            fork {

                call C11_C13_camera()

            } {

                call C11_Player_action()

            } {

                call C11_Tulin_action()

                Npc_Tulin_Sage[Finish].EventTalk({'IsNotBecomeSpeaker': True, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/DmF_RT_GrandFinale:DmF_RT_GrandFinale_018', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Npc_Tulin_Sage[Finish].EventTalk({'IsNotBecomeSpeaker': True, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/DmF_RT_GrandFinale:DmF_RT_GrandFinale_039', 'IsNotOpenIfSkipedMostRecent': False})
            } {

                call C11_Saki_action()

            }


            fork {

                call C12_camera()

            } {
                Npc_Tulin_Sage[Finish].EventTalk({'IsNotBecomeSpeaker': True, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/DmF_RT_GrandFinale:DmF_RT_GrandFinale_027', 'NotPlayLipSyncAnim': False, 'ASName': 'Talk', 'IsNotOpenIfSkipedMostRecent': False})
                Npc_Tulin_Sage[Finish].EventTalk({'IsNotBecomeSpeaker': True, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/DmF_RT_GrandFinale:DmF_RT_GrandFinale_028', 'NotPlayLipSyncAnim': False, 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
            }


            fork {

                call C11_C13_camera()

            } {
                GameSystemActor[Tulin].EventWait({'IsWaitEnd': True, 'Frames': 15})
                Npc_Tulin_Sage[Finish].EventTalk({'IsNotBecomeSpeaker': True, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/DmF_RT_GrandFinale:DmF_RT_GrandFinale_029', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                GameSystemActor[Tulin].EventWait({'IsWaitEnd': True, 'Frames': 30})
                Npc_Tulin_Sage[Finish].EventTalk({'IsNotBecomeSpeaker': True, 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/DmF_RT_GrandFinale:DmF_RT_GrandFinale_015', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
            } {

                call C13_Hearts_action()

            }

        }
    }
}

void C11_Player_action() {
    GameSystemActor[Player].EventWait({'IsWaitEnd': True, 'Frames': 80})
    Player.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Npc_Tulin_Sage', 'InstanceName': 'Finish', 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 0, 'KeepTalkWait': True, 'OffsetBase': 0})
    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Talk', 'ForceFadeFrame': 30.0, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'ClothWarpMode': 0})
}

void C11_Tulin_action() {
    Npc_Tulin_Sage[Finish].EventTriggerRequestLookAtTheFront()
    Npc_Tulin_Sage[Finish].EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'ASName': 'C11_Tulin', 'IsAnimeDriven': True, 'ForceFadeInFrame': 0.0, 'IsAllSlot': True})
    Npc_Tulin_Sage[Finish].EventTriggerRequestLookAtTheFront()
    Npc_Tulin_Sage[Finish].EventPlayAS({'Partial': '', 'ForceFadeInFrame': 0.0, 'ASName': 'TalkWait', 'IsWaitEnd': False, 'IsAllSlot': False, 'IsAnimeDriven': False})
    Npc_Tulin_Sage[Finish].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
}

void Camera_A() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'PosVector': [-3594.050048828125, 320.1099853515625, -1807.93994140625], 'AtVector': [-3592.219970703125, 319.3599853515625, -1804.469970703125], 'TargetFovy': 50.29998779296875, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void Camera_B() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'PosVector': [-3592.97998046875, 319.5400085449219, -1805.1400146484375], 'AtVector': [-3592.0, 319.70001220703125, -1804.010009765625], 'TargetFovy': 26.989999771118164, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void C12_camera() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'Actor1ActorName': 'Npc_Tulin_Sage', 'Actor1InstanceName': 'Finish', 'PosVector': [-1.090000033378601, 1.0199999809265137, 3.5999999046325684], 'AtVector': [0.6399999856948853, 1.059999942779541, -1.7899999618530273], 'TargetFovy': 21.700000762939453, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void C14() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'PosVector': [-3593.89990234375, 319.3999938964844, -1803.4200439453125], 'AtVector': [-3592.93994140625, 319.2200012207031, -1801.949951171875], 'TargetFovy': 22.700000762939453, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Player.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Npc_ValleyVillage010.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
    } {
        Npc_HighMountain005.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Npc_Tulin_Sage[Finish].EventTalk({'IsNotBecomeSpeaker': True, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/DmF_RT_GrandFinale:DmF_RT_GrandFinale_030', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Tulin_Sage[Finish].EventTalk({'IsNotBecomeSpeaker': True, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/DmF_RT_GrandFinale:DmF_RT_GrandFinale_032', 'ASName': 'C14_Tulin', 'NotPlayLipSyncAnim': False, 'IsPlayASAllSlot': True, 'IsNotOpenIfSkipedMostRecent': False})
    }

}

void C15() {

    fork {

        call Camera_A()

    } {
        Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 34.565059661865234, 'Position': [-3594.009033203125, 317.9339904785156, -1803.4610595703125], 'UseDemoWait': True})
    } {
        Npc_HighMountain005.EventWarpToTargetPosAndRot({'IsWaitEnd': False, 'YAngle': -89.99999237060547, 'Position': [-3589.860107421875, 317.9339904785156, -1801.1500244140625]})
        Npc_HighMountain005.EventTriggerLookAtObject({'Target': 3, 'ActorName': 'Npc_Tulin_Sage', 'InstanceName': 'Finish', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    } {

        call SageOfWind_Sub003.SageOfWind_GetSageSoul_Sub()

    }

    Npc_ValleyVillage010.EventTriggerChangeAIScheduleEquipState({'EquipState': 1})
    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NumOfSageClear', 'Value': 1, 'Index': -1}) {
      case [0, 1]:
        Event266:
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'GOToTheCastleOfHyrule_IsAfter_MeetPurah_Exp'}) {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'Color': 0, 'Length': 2, 'IsNoPlayAnime': False})
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'PosVector': [-3598.6298828125, 319.7099914550781, -1804.3299560546875], 'AtVector': [-3594.010009765625, 319.760009765625, -1803.4599609375], 'TargetFovy': 50.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera()
        } else {

            call C15_Teba_action()


            fork {

                call C15_Player_Tulin_action()

            } {
                Npc_ValleyVillage010.EventTalk({'IsNotBecomeSpeaker': True, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/DmF_RT_GrandFinale:DmF_RT_GrandFinale_019', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }

            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'Color': 0, 'Length': 2, 'IsNoPlayAnime': False})
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'PosVector': [-3598.6298828125, 319.7099914550781, -1804.3299560546875], 'AtVector': [-3594.010009765625, 319.760009765625, -1803.4599609375], 'TargetFovy': 50.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera()
        }
      case 2:
        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NumOfSageClear', 'Value': 3, 'Index': -1}) {
          case [0, 1]:
            goto Event266
          case 2:
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'GOToTheCastleOfHyrule_IsAfter_MeetPurah_Exp'}) {

                call C15_Teba_action()


                fork {

                    call C15_Player_Tulin_action()

                } {
                    Npc_ValleyVillage010.EventTalk({'IsNotBecomeSpeaker': True, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/DmF_RT_GrandFinale:DmF_RT_GrandFinale_020', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                }

                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'Color': 0, 'Length': 2, 'IsNoPlayAnime': False})
                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'PosVector': [-3598.6298828125, 319.7099914550781, -1804.3299560546875], 'AtVector': [-3594.010009765625, 319.760009765625, -1803.4599609375], 'TargetFovy': 50.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera()
            } else {

                call C15_Teba_action()


                fork {

                    call C15_Player_Tulin_action()

                } {
                    Npc_ValleyVillage010.EventTalk({'IsNotBecomeSpeaker': True, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/DmF_RT_GrandFinale:DmF_RT_GrandFinale_021', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                }

                Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'Talk', 'IsWaitEnd': False, 'ClothWarpMode': 0})
                Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'TalkYes', 'ClothWarpMode': 0})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 25})

                fork {
                    Npc_ValleyVillage010.EventTalk({'IsNotBecomeSpeaker': True, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/DmF_RT_GrandFinale:DmF_RT_GrandFinale_031', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                } {
                    GameSystemActor[Player].EventWait({'IsWaitEnd': True, 'Frames': 20})
                    Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ASCommand': 'Wait', 'ClothWarpMode': 0})
                }

                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'Color': 0, 'Length': 2, 'IsNoPlayAnime': False})
                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'PosVector': [-3598.6298828125, 319.7099914550781, -1804.3299560546875], 'AtVector': [-3594.010009765625, 319.760009765625, -1803.4599609375], 'TargetFovy': 50.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera()
            }
        }
    }
}

void C15_Player_Tulin_action() {

    fork {
        GameSystemActor[Player].EventWait({'IsWaitEnd': True, 'Frames': 20})
        Player.EventPlayerTurnAndLook({'Target': 3, 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': '', 'ActorName': 'Npc_ValleyVillage010', 'KeepTalkWait': True, 'OffsetBase': 0})
        GameSystemActor[Player].EventWait({'IsWaitEnd': True, 'Frames': 20})
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Talk', 'ForceFadeFrame': 30.0, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'ClothWarpMode': 0})
    } {
        GameSystemActor[Tulin].EventWait({'IsWaitEnd': True, 'Frames': 5})
        Npc_Tulin_Sage[Finish].EventTriggerLookAtObject({'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'WorldPos': [0.0, 0.0, 0.0], 'Target': 3, 'ActorName': 'Npc_ValleyVillage010', 'ResetArriveTransformFixed': False})
        Npc_Tulin_Sage[Finish].EventPlayAS({'Partial': '', 'IsAnimeDriven': True, 'ASName': 'C15_PoseReset', 'IsAllSlot': True, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': True})
        Npc_Tulin_Sage[Finish].EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'IsWaitEnd': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})
        GameSystemActor[Tulin].EventWait({'IsWaitEnd': True, 'Frames': 35})
        Npc_Tulin_Sage[Finish].EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'Target': 3, 'ActorName': 'Npc_ValleyVillage010', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    }

}

void C15_Teba_action() {
    GameSystemActor[Teba].EventWait({'IsWaitEnd': True, 'Frames': 60})
    Npc_ValleyVillage010.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    GameSystemActor[Teba].EventWait({'IsWaitEnd': True, 'Frames': 5})
    Npc_ValleyVillage010.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_ValleyVillage010.EventPlayAS({'ASName': 'Wait', 'ForceFadeInFrame': 30.0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False})
}

void Setup_background() {
    Dm_Locator[TulinPos].EventWarpToTargetPosAndRot({'Position': [-3592.5, 317.95941162109375, -1801.25], 'IsWaitEnd': True, 'YAngle': 116.70269775390625})

    fork {
        Player.EventTriggerParticipateEvent()
        Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [-3594.009033203125, 317.95941162109375, -1803.4610595703125], 'YAngle': 94.9999771118164, 'UseDemoWait': True})

        call Common.InitPlayState({'IsUnequip': True, 'IsRidableGetOff': True})

        Player.EventPlayerWait({'IsWaitEnd': False})
    } {
        Npc_Tulin_Sage[Finish].EventTriggerParticipateEvent()
        Npc_Tulin_Sage[Finish].EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'TulinPos', 'OffsetBase': 1, 'YAngle': 0.0, 'PositionOffset': [0.0, 0.0, 0.0]})
        Npc_Tulin_Sage[Finish].EventTriggerRequestLookAtTheFront()
        Npc_Tulin_Sage[Finish].EventPlayAS({'IsWaitEnd': False, 'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        Npc_ValleyVillage010.EventTriggerParticipateEvent()
        Npc_ValleyVillage010.EventTriggerChangeAIScheduleEquipState({'EquipState': 1})
        Npc_ValleyVillage010.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'TulinPos', 'OffsetBase': 1, 'IsWaitEnd': True, 'YAngle': 180.0, 'PositionOffset': [0.0, 0.0, 2.859999895095825]})
        Npc_ValleyVillage010.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Wait_LookTulin', 'IsAllSlot': True})
        Npc_ValleyVillage010.EventTriggerRequestLookAtTheFront()
    } {
        Npc_HighMountain009[Finish].EventTriggerParticipateEvent()
        Npc_HighMountain009[Finish].EventWarpToTargetPosAndRot({'YAngle': -60.0, 'Position': [-3590.00390625, 318.456787109375, -1805.0030517578125], 'IsWaitEnd': True})
        Npc_HighMountain009[Finish].EventTriggerLookAtObject({'ActorName': 'Npc_Tulin_Sage', 'InstanceName': 'Finish', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'WorldPos': [-3592.5, 317.95941162109375, -1801.25], 'Target': 3, 'ResetArriveTransformFixed': False})
    } {
        Npc_HighMountain005.EventTriggerParticipateEvent()
        Npc_HighMountain005.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [-3589.860107421875, 317.9599914550781, -1801.1500244140625], 'YAngle': -89.99999237060547})
        Npc_HighMountain005.EventTriggerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 2, 'InstanceName': '', 'ActorName': '', 'ResetArriveTransformFixed': False})
        Npc_HighMountain005.EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        Npc_HighMountain034.EventTriggerParticipateEvent()
        Npc_HighMountain034.EventWarpToTargetPosAndRot({'YAngle': 80.00003051757812, 'Position': [-3636.970947265625, 289.9689025878906, -1815.571044921875], 'IsWaitEnd': False})
        Npc_HighMountain033.EventTriggerParticipateEvent()
        Npc_HighMountain033.EventWarpToTargetPosAndRot({'YAngle': 0.0, 'Position': [-3601.5810546875, 296.7955017089844, -1792.425048828125], 'IsWaitEnd': False})
    } {
        Weapon_Bow_128.EventTriggerParticipateEvent()
        Weapon_Bow_128.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }

}

void C11_Saki_action() {
    Npc_HighMountain005.EventTriggerChangeEmotion({'IsActFaceOnly': True, 'EmotionType': 0})
    GameDataActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    Npc_HighMountain005.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'Wait', 'ForceFadeInFrame': 30.0})
    Npc_HighMountain005.EventTriggerRequestLookAtTheFront()
}

void C13_Hearts_action() {
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 75})
    Npc_HighMountain009[Finish].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
    Npc_HighMountain009[Finish].EventPlayAS({'ASName': 'Wait', 'ForceFadeInFrame': 30.0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False})
}

void C11_C13_camera() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'PosVector': [-3593.429931640625, 319.29998779296875, -1807.27001953125], 'AtVector': [-3593.340087890625, 319.44000244140625, -1801.6099853515625], 'TargetFovy': 21.700000762939453, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}
