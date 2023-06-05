-------- EventFlow: DmF_GE_GrandFinale --------

Actor: Dm_Locator[Position01]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsBindNearestActor': False}

Actor: Npc_oasis007[AfterDefense]
entrypoint: None()
actions: ['EventPlayAS', 'EventWarpToTargetPosAndRot', 'EventTalk', 'EventTriggerRequestLookAtTheFront', 'EventTriggerLookAtObject', 'EventTriggerChangeEmotion', 'EventTriggerEquipmentUserRequestCreateStaticEquipment', 'EventWarpBehindCamera', 'EventTriggerChangeAIScheduleEquipState']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'UseEventModelAnime': 'Work/Model/Event/DmF_GE_GrandFinale/DmF_GE_GrandFinale_Npc_Gerudo_General/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/DmF_GE_GrandFinale_Npc_Gerudo_General.root.as', 'EventMemberCreateMethod': 0, 'IsBindNearestActor': False}

Actor: Npc_Gerudo_Queen_Young[Town]
entrypoint: None()
actions: ['EventPlayAS', 'EventTalk', 'EventTriggerLookAtObject', 'EventTriggerRequestLookAtTheFront', 'EventWarpToTargetPosAndRot', 'EventTriggerChangeEmotion', 'EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'UseEventModelAnime': 'Work/Model/Event/DmF_GE_GrandFinale/DmF_GE_GrandFinale_Npc_Gerudo_Queen_Young/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/DmF_GE_GrandFinale_Npc_Gerudo_Queen_Young.root.as', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventSystemActor[P01]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor[NPC_wait]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor[NPC_wait_01]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsBindNearestActor': False}

Actor: PostProcessingActor[DmF_GE_GrandFinale_Cam]
entrypoint: None()
actions: ['EventSetDoFForFlowchart']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventPlayerWarpToTargetPosAndRot', 'EventPlayerWait', 'EventTriggerPlayerLookAtObject', 'EventTriggerPlayerRequestLookAtTheFrontLock']
queries: ['EventQueryPlayerEquipArmorSeries']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventMoveCameraAnimationInstructionsForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Npc_OasisStep_B
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayAS', 'EventWarpToTargetPosAndRot', 'EventTriggerEquipmentUserRequestCreateStaticEquipment', 'EventGoOffstageForUser', 'EventTriggerChangeAIScheduleEquipState', 'EventTriggerRequestLookAtTheFront', 'EventTriggerPushSpecificPauseMask', 'EventTriggerRequestPause', 'EventTriggerRequestCancelPause', 'EventTriggerEraseSpecificPauseMask']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsGrounding': False, 'IsWorld': True, 'UseEventModelAnime': 'Work/Model/Event/DmF_GE_GrandFinale/DmF_GE_GrandFinale_UMii_Gerudo_BodyS_W_000/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/DmF_GE_GrandFinale_UMii_Gerudo_BodyS_W_000.root.as', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'Position': [-3894.739990234375, 157.10000610351562, 2961.780029296875], 'Rotation': [0.0, 112.0, 0.0], 'IsBindNearestActor': False}

Actor: Npc_OasisStep_A
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayAS', 'EventGoOffstageForUser', 'EventTriggerEquipmentUserRequestCreateStaticEquipment', 'EventWarpToTargetPosAndRot', 'EventTriggerRequestLookAtTheFront', 'EventTriggerPushSpecificPauseMask', 'EventTriggerRequestPause', 'EventTriggerRequestCancelPause', 'EventTriggerEraseSpecificPauseMask']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsGrounding': False, 'IsWorld': True, 'UseEventModelAnime': 'Work/Model/Event/DmF_GE_GrandFinale/DmF_GE_GrandFinale_UMii_Gerudo_BodyS_W_000/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/DmF_GE_GrandFinale_UMii_Gerudo_BodyS_W_000.root.as', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'Rotation': [0.0, 120.0, 0.0], 'Position': [-3893.31005859375, 157.10000610351562, 2963.360107421875], 'IsBindNearestActor': False}

Actor: Npc_oasis036
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayAS', 'EventGoOffstageForUser', 'EventTriggerEquipmentUserRequestCreateStaticEquipment', 'EventWarpToTargetPosAndRot', 'EventTriggerRequestLookAtTheFront', 'EventTriggerPushSpecificPauseMask', 'EventTriggerRequestPause', 'EventTriggerRequestCancelPause', 'EventTriggerEraseSpecificPauseMask']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsGrounding': False, 'IsWorld': True, 'UseEventModelAnime': 'Work/Model/Event/DmF_GE_GrandFinale/DmF_GE_GrandFinale_UMii_Gerudo_BodyS_W_000/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/DmF_GE_GrandFinale_UMii_Gerudo_BodyS_W_000.root.as', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'Rotation': [0.0, 148.0, 0.0], 'Position': [-3886.550048828125, 157.47999572753906, 2970.3701171875], 'IsBindNearestActor': False}

Actor: Npc_oasis026
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayAS', 'EventGoOffstageForUser', 'EventTriggerEquipmentUserRequestCreateStaticEquipment', 'EventWarpToTargetPosAndRot', 'EventTriggerRequestLookAtTheFront', 'EventTriggerPushSpecificPauseMask', 'EventTriggerRequestPause', 'EventTriggerRequestCancelPause', 'EventTriggerEraseSpecificPauseMask']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsGrounding': False, 'IsWorld': True, 'UseEventModelAnime': 'Work/Model/Event/DmF_GE_GrandFinale/DmF_GE_GrandFinale_UMii_Gerudo_BodyS_W_000/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/DmF_GE_GrandFinale_UMii_Gerudo_BodyS_W_000.root.as', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'Position': [-3885.169921875, 157.10000610351562, 2971.8798828125], 'Rotation': [0.0, 155.0, 0.0], 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_oasis028
entrypoint: None()
actions: ['EventPlayAS', 'EventWarpToTargetPosAndRot', 'EventTriggerPushSpecificPauseMask', 'EventTriggerRequestPause', 'EventTriggerRequestCancelPause', 'EventTriggerEraseSpecificPauseMask']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_oasis013
entrypoint: None()
actions: ['EventPlayAS', 'EventWarpToTargetPosAndRot', 'EventTriggerEmitXLink', 'EventTriggerPushSpecificPauseMask', 'EventTriggerRequestPause', 'EventTriggerRequestCancelPause', 'EventTriggerEraseSpecificPauseMask']
queries: []
params: {'EventMemberCreateMethod': 2, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': 'Work/AS/Root/Event/DmF_GE_GrandFinale_UMii_Common_Gerudo_GT.root.as', 'IsBindNearestActor': False}

Actor: Npc_oasis017
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerEmitXLink', 'EventTriggerPushSpecificPauseMask', 'EventTriggerRequestPause', 'EventTriggerRequestCancelPause', 'EventTriggerEraseSpecificPauseMask']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsGrounding': False, 'IsWorld': True, 'UseEventModelAnime': '', 'UseEventAS': 'Work/AS/Root/Event/DmF_GE_GrandFinale_UMii_Common_Gerudo_GT.root.as', 'Position': [-3823.137939453125, 149.68370056152344, 2890.23095703125], 'Rotation': [0.0, 85.0, 0.0], 'IsBindNearestActor': False}

Actor: Npc_oasis008
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerPushSpecificPauseMask', 'EventTriggerRequestPause', 'EventTriggerRequestCancelPause', 'EventTriggerEraseSpecificPauseMask']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsGrounding': False, 'IsWorld': True, 'UseEventModelAnime': '', 'UseEventAS': '', 'Position': [-3827.708984375, 149.5800018310547, 2911.20703125], 'Rotation': [0.0, -100.62899780273438, 0.0], 'IsBindNearestActor': False}

Actor: Npc_oasis014
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerPushSpecificPauseMask', 'EventTriggerRequestPause', 'EventTriggerRequestCancelPause', 'EventTriggerEraseSpecificPauseMask']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsGrounding': False, 'IsWorld': True, 'UseEventModelAnime': '', 'UseEventAS': '', 'Position': [-3830.27001953125, 149.57699584960938, 2911.409912109375], 'Rotation': [0.0, 90.75, 0.0], 'IsBindNearestActor': False}

Actor: Npc_oasis021
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventPlayAS', 'EventTriggerPushSpecificPauseMask', 'EventTriggerRequestPause', 'EventTriggerRequestCancelPause', 'EventTriggerEraseSpecificPauseMask']
queries: []
params: {'EventMemberCreateMethod': 2, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/DmF_GE_GrandFinale/DmF_GE_GrandFinale_UMii_Gerudo_BodyC_W_000/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/DmF_GE_GrandFinale_UMii_Gerudo_BodyC_W.root.as', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStartSpotBgm', 'EventSoundRequestDucking', 'EventTriggerSetReverbParamSnapshot', 'EventTriggerResetReverbParamSnapshot', 'EventTriggerStartInGameBgm', 'EventTriggerSoundForceUpdateOcclusion']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: []
queries: ['EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataInt']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn', 'EventWait', 'EventOpenInstantTips', 'EventTraverseAroundAndWaitCreateActor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_OasisHylia_001[OutUG]
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerPushSpecificPauseMask', 'EventTriggerRequestPause', 'EventTriggerRequestCancelPause', 'EventTriggerEraseSpecificPauseMask']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Dm_GE_GrandFinale_oasis025
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayAS', 'EventTriggerEquipmentUserRequestCreateStaticEquipment', 'EventTriggerChangeAIScheduleEquipState', 'EventGoOffstageForUser', 'EventWarpToTargetPosAndRot', 'EventTriggerRequestLookAtTheFront', 'EventTriggerPushSpecificPauseMask', 'EventTriggerRequestPause', 'EventTriggerRequestCancelPause', 'EventTriggerEraseSpecificPauseMask']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsWorld': True, 'Position': [-3883.929931640625, 157.10000610351562, 2973.280029296875], 'Rotation': [0.0, 160.0, 0.0], 'UseEventModelAnime': 'Work/Model/Event/DmF_GE_GrandFinale/DmF_GE_GrandFinale_UMii_Gerudo_BodyS_W_000/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/DmF_GE_GrandFinale_UMii_Gerudo_BodyS_W_000.root.as', 'IsGrounding': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: TwnObj_GerudoMillstoneDoor_A_02
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {

    call Pre()


    call C01()


    call C02()


    call C03()


    call C04()


    call C05()

    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NumOfSageClear', 'Value': 1, 'Index': -1}) {
      case 1:

        call C05_NoClear()


        call C06_NoClear()

        Event70:

        call C07()


        call C08()


        call C09()

        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'GOToTheCastleOfHyrule_IsAfter_MeetPurah_Exp'}) {
            switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NumOfSageClear', 'Index': -1, 'Value': 4}) {
              case 0:
                Event375:

                call C11()

              case [1, 2]:

                call C10_04_02()

                goto Event375
            }
        } else
        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NumOfSageClear', 'Index': -1, 'Value': 4}) {
          case 0:

            call C10_01_03()

            goto Event375
          case [1, 2]:

            call C10_04_01()

            goto Event375
        }
      case 2:
        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NumOfSageClear', 'Value': 3, 'Index': -1}) {
          case 0:

            call C05_1stClear()


            call C06_1stClear()

            goto Event70
          case 1:

            call C05_2ndClear()


            call C06_2ndClear()

            goto Event70
          case 2:

            call C05_3rdClear()


            call C06_3rdClear()

            goto Event70
        }
    }
}

void C01() {

    call C02_NPC_Off()


    fork {
        SoundSystemActor.EventTriggerSetReverbParamSnapshot({'SnapshotFilename': 'Work/Sound/Effect/ReverbParamSnapshot/DmF_GE_GrandFinale_Cut1.game__sound__ReverbParamSnapshot.gyml'})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'PosVector': [-3809.02001953125, 151.58999633789062, 2887.419921875], 'AtVector': [-3809.72998046875, 151.6999969482422, 2888.1201171875], 'CameraCollisionMode': 1, 'TargetFovy': 49.0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'IsLinearMove': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'PosVector': [-3818.93994140625, 152.5800018310547, 2897.4599609375], 'AtVector': [-3819.639892578125, 152.69000244140625, 2898.169921875], 'IsWaitEnd': False, 'MoveTime': 500, 'CameraCollisionMode': 1, 'TargetFovy': 49.0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 150})
    } {
        Npc_Gerudo_Queen_Young[Town].EventPlayAS({'IsAnimeDriven': False, 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ASName': 'C02-Npc_Gerudo_Queen_Young-A-0_Sit_Wait', 'ForceFadeInFrame': -1.0})
        Npc_oasis007[AfterDefense].EventTriggerLookAtObject({'Target': 2, 'ActorName': 'Player', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        Npc_oasis007[AfterDefense].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'Act_GeneralWait', 'ForceFadeInFrame': -1.0})
        Player.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Gerudo_Queen_Young', 'InstanceName': 'Town', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1})
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'DemoWait', 'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {
        SoundSystemActor.EventTriggerStartInGameBgm({'IsFadeIn': False, 'IsControlSpotBgm': True, 'WithPlayableEvent': True})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'Color': 0, 'Length': 2, 'IsNoPlayAnime': False})
    } {

        call C01_NPC_Position()

    }


    call C01_NPC_Off()


    call C02_NPC_On()

}

void C02() {
    Dm_Locator[Position01].EventTriggerParticipateEvent()
    SoundSystemActor.EventSoundRequestDucking({'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0, 'DuckingName': 'DmF:Bgm下げ'})
    SoundSystemActor.EventTriggerResetReverbParamSnapshot()

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsLinearMove': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'IsWaitEnd': True, 'MoveTime': 0, 'PosVector': [-3876.739990234375, 157.38999938964844, 2959.77001953125], 'AtVector': [-3877.580078125, 157.50999450683594, 2960.2900390625], 'TargetFovy': 33.20000076293945, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        SoundSystemActor.EventTriggerSoundForceUpdateOcclusion()
        EventCamera.EventMoveToTargetPosCamera({'IsLinearMove': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'MoveTime': 300, 'IsWaitEnd': False, 'PosVector': [-3877.199951171875, 157.4600067138672, 2960.050048828125], 'AtVector': [-3878.050048828125, 157.57000732421875, 2960.570068359375], 'TargetFovy': 33.20000076293945, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Npc_Gerudo_Queen_Young[Town].EventTalk({'IsAnimeDriven': False, 'EndDialogOption': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/DmF_GE_GrandFinale:Dm_GE_GrandFinale_01', 'ASName': 'C02-Npc_Gerudo_Queen_Young-A-0_Sit_Wait', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        PostProcessingActor[DmF_GE_GrandFinale_Cam].EventSetDoFForFlowchart({'EndFNumber': 15.0, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'StartDistance': 8.0, 'EndDistance': 8.0, 'StartFNumber': 15.0, 'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0})
    }

}

void Pre() {
    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsFastLoad': False, 'IsWaitEnd': True})
    SoundSystemActor.EventTriggerStartSpotBgm({'SpotBgmControlType': 6})
    SoundSystemActor.EventTriggerStartSpotBgm({'SpotBgmControlType': 1})

    call prepare()

    Dm_Locator[Position01].EventTriggerParticipateEvent()
    TwnObj_GerudoMillstoneDoor_A_02.EventTriggerParticipateEvent()

    call Common.InitPlayState({'IsUnequip': True, 'IsRidableGetOff': True})

    Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [-3882.449951171875, 156.30999755859375, 2961.1298828125], 'YAngle': -45.0, 'UseDemoWait': True})
    Npc_oasis007[AfterDefense].EventWarpToTargetPosAndRot({'IsWaitEnd': False, 'Position': [-3889.570068359375, 157.47999572753906, 2965.320068359375], 'YAngle': 135.0})
    Npc_Gerudo_Queen_Young[Town].EventWarpToTargetPosAndRot({'Position': [-3888.340087890625, 157.47999572753906, 2967.02001953125], 'YAngle': 135.0, 'IsWaitEnd': True})
    Npc_oasis007[AfterDefense].EventTriggerEquipmentUserRequestCreateStaticEquipment({'AttachmentName': '', 'DynamicEquipmentState': 1, 'EquipmentActorName': 'Weapon_Lsword_129', 'EffectType': 0, 'EffectValue': -1})
    Npc_oasis007[AfterDefense].EventTriggerChangeAIScheduleEquipState({'EquipState': 0})
    Npc_Gerudo_Queen_Young[Town].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})

    call C01_NPC_On()


    call C02_NPC_On()


    call NPC_Position()


    call C01_NPC_Warp()


    call MainChallenge.Check_NumOfSageClear()

}

void C03() {
    Dm_Locator[Position01].EventTriggerParticipateEvent()

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsLinearMove': True, 'MoveTime': 0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'PosVector': [-3882.669921875, 158.4499969482422, 2961.300048828125], 'AtVector': [-3883.3701171875, 158.52000427246094, 2962.010009765625], 'TargetFovy': 11.300000190734863, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_Gerudo_Queen_Young[Town].EventTriggerChangeEmotion({'EmotionType': 1, 'IsActFaceOnly': True})
        Npc_Gerudo_Queen_Young[Town].EventTalk({'IsAnimeDriven': False, 'EndDialogOption': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': 'C03-Npc_Gerudo_Queen_Young-A-0_Sit_Talk', 'MessageId': 'EventFlowMsg/DmF_GE_GrandFinale:Dm_GE_GrandFinale_12', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        PostProcessingActor[DmF_GE_GrandFinale_Cam].EventSetDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartDistance': 9.0, 'EndDistance': 9.0, 'StartBluarLevel': 1.5, 'EndBluarLevel': 1.5, 'StartFNumber': 70.0, 'EndFNumber': 70.0})
    }


    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'IsLinearMove': False, 'MoveTime': 25, 'PosVector': [-3882.669921875, 158.4499969482422, 2961.300048828125], 'AtVector': [-3883.530029296875, 158.5800018310547, 2961.81005859375], 'TargetFovy': 11.300000190734863, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_oasis007[AfterDefense].EventTriggerChangeEmotion({'EmotionType': 1, 'IsActFaceOnly': True})
        Npc_oasis007[AfterDefense].EventTalk({'IsAnimeDriven': False, 'ASName': 'Act_GeneralWait', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/DmF_GE_GrandFinale:Dm_GE_GrandFinale_02', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        Npc_Gerudo_Queen_Young[Town].EventPlayAS({'IsAnimeDriven': False, 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ASName': 'C02-Npc_Gerudo_Queen_Young-A-0_Sit_Wait', 'ForceFadeInFrame': -1.0})
        Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [-3882.449951171875, 156.30999755859375, 2961.1298828125], 'YAngle': -45.0, 'UseDemoWait': True})
        Player.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_oasis007', 'InstanceName': 'AfterDefense', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1})
    } {
        Dm_GE_GrandFinale_oasis025.EventTriggerRequestLookAtTheFront()
        Npc_oasis026.EventTriggerRequestLookAtTheFront()
        Npc_oasis036.EventTriggerRequestLookAtTheFront()
        Npc_OasisStep_A.EventTriggerRequestLookAtTheFront()
        Npc_OasisStep_B.EventTriggerRequestLookAtTheFront()
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}

void C04() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsLinearMove': True, 'MoveTime': 0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVector': [-3875.429931640625, 160.1199951171875, 2953.840087890625], 'AtVector': [-3876.1201171875, 159.99000549316406, 2954.550048828125], 'TargetFovy': 34.70000076293945, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        Npc_oasis007[AfterDefense].EventTalk({'IsAnimeDriven': False, 'ASName': 'Act_GeneralWait', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/DmF_GE_GrandFinale:Dm_GE_GrandFinale_13', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_oasis007[AfterDefense].EventTriggerChangeEmotion({'IsActFaceOnly': True, 'EmotionType': 0})
        Npc_oasis007[AfterDefense].EventPlayAS({'IsAnimeDriven': False, 'ASName': 'C04_Npc_Gerudo_General-A-0_Thank', 'IsWaitEnd': False, 'IsAllSlot': True, 'Partial': '', 'ForceFadeInFrame': -1.0})
    } {
        Npc_Gerudo_Queen_Young[Town].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': True})
    } {
        PostProcessingActor[DmF_GE_GrandFinale_Cam].EventSetDoFForFlowchart({'EndFNumber': 11.0, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'StartDistance': 10.0, 'EndDistance': 10.0, 'StartFNumber': 11.0, 'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

    fork {
        EventSystemActor[P01].EventWait({'IsWaitEnd': True, 'Frames': 30})
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'Talk', 'ClothWarpMode': 0})
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'TalkSurprise', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {

        call C04_Npc_anim()

    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 65})
}

void C05() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'CameraCollisionMode': 1, 'PosVector': [-3885.780029296875, 158.66000366210938, 2967.760009765625], 'AtVector': [-3887.2099609375, 159.0, 2967.080078125], 'TargetFovy': 30.399999618530273, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_oasis007[AfterDefense].EventPlayAS({'IsAnimeDriven': False, 'IsWaitEnd': True, 'ASName': 'C04_Npc_Gerudo_General-A-0_Thank_ed', 'IsAllSlot': True, 'Partial': '', 'ForceFadeInFrame': -1.0})
        Npc_oasis007[AfterDefense].EventPlayAS({'IsAnimeDriven': False, 'ASName': 'Act_GeneralWait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': 20.0})
        EventSystemActor[NPC_wait].EventWait({'IsWaitEnd': True, 'Frames': 20})
        Npc_oasis007[AfterDefense].EventTalk({'IsAnimeDriven': False, 'ASName': 'Act_GeneralWait', 'IsWaitEnd': True, 'EndDialogOption': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/DmF_GE_GrandFinale:Dm_GE_GrandFinale_03', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {

        call C05_NPC()

        Player.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Gerudo_Queen_Young', 'InstanceName': 'Town', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1})
        Player.EventPlayerWait({'IsWaitEnd': False})
    } {
        PostProcessingActor[DmF_GE_GrandFinale_Cam].EventSetDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartDistance': 2.5, 'EndDistance': 2.5, 'StartBluarLevel': 1.0, 'EndBluarLevel': 1.0, 'StartFNumber': 45.0, 'EndFNumber': 45.0})
    }

}

void C07() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'PosVector': [-3877.2900390625, 156.50999450683594, 2959.320068359375], 'AtVector': [-3878.489990234375, 156.77000427246094, 2959.969970703125], 'TargetFovy': 17.100000381469727, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'IsAtVectorReferenceActorPosOnce': True, 'IsPosVectorReferenceActorPosOnce': True, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_Gerudo_Queen_Young[Town].EventPlayAS({'IsAnimeDriven': False, 'IsWaitEnd': True, 'ASName': 'C07-Npc_Gerudo_Queen_Young-A-0', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
        Npc_Gerudo_Queen_Young[Town].EventTriggerChangeEmotion({'EmotionType': 6, 'IsActFaceOnly': True})
        Npc_Gerudo_Queen_Young[Town].EventTalk({'IsAnimeDriven': False, 'EndDialogOption': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/DmF_GE_GrandFinale:Dm_GE_GrandFinale_08', 'ASName': 'C02-Npc_Gerudo_Queen_Young-A-0_Sit_Wait', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        Npc_oasis007[AfterDefense].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'Act_GeneralWait', 'ForceFadeInFrame': -1.0})
    } {

        call C07_NPC()

    } {
        PostProcessingActor[DmF_GE_GrandFinale_Cam].EventSetDoFForFlowchart({'StartFNumber': 75.0, 'EndFNumber': 75.0, 'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartDistance': 6.0, 'EndDistance': 6.0, 'StartBluarLevel': 1.5, 'EndBluarLevel': 1.5})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
}

void C08() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C09', 'RootType': 3, 'IsReferenceRootOnce': True, 'TargetActorName': 'Npc_Gerudo_Queen_Young', 'TargetActorInstanceName': 'Town', 'CameraName': '', 'IsIgnoreRootRot': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'IsWaitEnd': False, 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        Npc_Gerudo_Queen_Young[Town].EventTriggerChangeEmotion({'IsActFaceOnly': True, 'EmotionType': 1})
        Npc_Gerudo_Queen_Young[Town].EventTriggerRequestLookAtTheFront()
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        Npc_Gerudo_Queen_Young[Town].EventPlayAS({'IsAnimeDriven': False, 'ASName': 'C09-Npc_Gerudo_Queen_Young-A-0_Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Npc_Gerudo_Queen_Young[Town].EventTalk({'IsAnimeDriven': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'EndDialogOption': 3, 'ASName': 'C09-Npc_Gerudo_Queen_Young-A-0_Nod', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/DmF_GE_GrandFinale:Dm_GE_GrandFinale_22', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        Player.EventPlayerWait({'IsWaitEnd': False})
    } {
        PostProcessingActor[DmF_GE_GrandFinale_Cam].EventSetDoFForFlowchart({'StartFNumber': 60.0, 'EndFNumber': 60.0, 'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartDistance': 2.0, 'EndDistance': 2.0, 'StartBluarLevel': 2.5, 'EndBluarLevel': 2.5})
    } {

        call C08_NPCwait()

    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}

void C09() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'Actor1ActorName': 'Player', 'PosVector': [0.0, 1.7599999904632568, -2.990000009536743], 'AtVector': [0.0, 1.6699999570846558, -1.9900000095367432], 'TargetFovy': 55.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {

        call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Obj_SageSoul_Gerudo'})

    } {
        PostProcessingActor[DmF_GE_GrandFinale_Cam].EventSetDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartDistance': 4.0, 'EndDistance': 4.0, 'StartFNumber': 9.0, 'EndFNumber': 9.0, 'StartBluarLevel': 1.5, 'EndBluarLevel': 1.5})
    }

    GameSystemActor.EventOpenInstantTips({'InstantTipwType': 38, 'IsWaitEnd': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}

void C06_NoClear() {

    fork {

        call C06_Camera()

    } {
        Npc_Gerudo_Queen_Young[Town].EventTriggerChangeEmotion({'EmotionType': 5, 'IsActFaceOnly': True})
        Npc_Gerudo_Queen_Young[Town].EventPlayAS({'IsAnimeDriven': False, 'IsWaitEnd': True, 'ASName': 'C06_GdQueen_Sit_Think_Talk', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
        Npc_Gerudo_Queen_Young[Town].EventTalk({'IsAnimeDriven': False, 'EndDialogOption': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': 'C06_GdQueen_Sit_Think_Talk_Loop', 'MessageId': 'EventFlowMsg/DmF_GE_GrandFinale:Dm_GE_GrandFinale_14', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        Npc_oasis007[AfterDefense].EventTriggerRequestLookAtTheFront()
        Npc_oasis007[AfterDefense].EventTriggerLookAtObject({'Target': 2, 'ActorName': 'Player', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    }

}

void NPC_Position() {
    Npc_OasisStep_B.EventTriggerParticipateEvent()
    Npc_OasisStep_B.EventWarpToTargetPosAndRot({'YAngle': 105.0, 'IsWaitEnd': True, 'Position': [-3895.610107421875, 157.10000610351562, 2962.340087890625]})
    Npc_OasisStep_A.EventTriggerParticipateEvent()
    Npc_oasis036.EventTriggerParticipateEvent()
    Npc_oasis026.EventTriggerParticipateEvent()
    Dm_GE_GrandFinale_oasis025.EventTriggerParticipateEvent()
    Dm_GE_GrandFinale_oasis025.EventPlayAS({'IsWaitEnd': False, 'ASName': 'C02-UMii_Gerudo_BodyS_W_000-A-0_Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    Dm_GE_GrandFinale_oasis025.EventTriggerEquipmentUserRequestCreateStaticEquipment({'EquipmentActorName': 'Weapon_Spear_129', 'DynamicEquipmentState': 1, 'AttachmentName': '', 'EffectType': 0, 'EffectValue': -1})
    Dm_GE_GrandFinale_oasis025.EventTriggerChangeAIScheduleEquipState({'EquipState': 0})
    Npc_OasisStep_B.EventTriggerEquipmentUserRequestCreateStaticEquipment({'DynamicEquipmentState': 1, 'AttachmentName': '', 'EquipmentActorName': 'Weapon_Spear_129', 'EffectType': 0, 'EffectValue': -1})
    Npc_OasisStep_B.EventTriggerChangeAIScheduleEquipState({'EquipState': 0})
    Npc_OasisStep_A.EventTriggerEquipmentUserRequestCreateStaticEquipment({'DynamicEquipmentState': 1, 'AttachmentName': '', 'EquipmentActorName': 'Weapon_Spear_129', 'EffectType': 0, 'EffectValue': -1})
    Npc_oasis036.EventTriggerEquipmentUserRequestCreateStaticEquipment({'DynamicEquipmentState': 1, 'AttachmentName': '', 'EquipmentActorName': 'Weapon_Spear_129', 'EffectType': 0, 'EffectValue': -1})
    Npc_oasis026.EventTriggerEquipmentUserRequestCreateStaticEquipment({'DynamicEquipmentState': 1, 'AttachmentName': '', 'EquipmentActorName': 'Weapon_Spear_129', 'EffectType': 0, 'EffectValue': -1})
}

void C06_1stClear() {

    fork {

        call C06_Camera()

    } {
        Npc_Gerudo_Queen_Young[Town].EventTriggerChangeEmotion({'EmotionType': 5, 'IsActFaceOnly': True})
        Npc_Gerudo_Queen_Young[Town].EventPlayAS({'IsAnimeDriven': False, 'IsWaitEnd': True, 'ASName': 'C06_GdQueen_Sit_Think_Talk', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
        Npc_Gerudo_Queen_Young[Town].EventTalk({'IsAnimeDriven': False, 'EndDialogOption': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': 'C06_GdQueen_Sit_Think_Talk_Loop', 'MessageId': 'EventFlowMsg/DmF_GE_GrandFinale:Dm_GE_GrandFinale_15', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        Npc_oasis007[AfterDefense].EventTriggerRequestLookAtTheFront()
        Npc_oasis007[AfterDefense].EventTriggerLookAtObject({'Target': 2, 'ActorName': 'Player', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    }

}

void C06_2ndClear() {

    fork {

        call C06_Camera()

    } {
        Npc_Gerudo_Queen_Young[Town].EventTriggerChangeEmotion({'EmotionType': 5, 'IsActFaceOnly': True})
        Npc_Gerudo_Queen_Young[Town].EventPlayAS({'IsAnimeDriven': False, 'IsWaitEnd': True, 'ASName': 'C06_GdQueen_Sit_Think_Talk', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
        Npc_Gerudo_Queen_Young[Town].EventTalk({'IsAnimeDriven': False, 'EndDialogOption': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': 'C06_GdQueen_Sit_Think_Talk_Loop', 'MessageId': 'EventFlowMsg/DmF_GE_GrandFinale:Dm_GE_GrandFinale_16', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        Npc_oasis007[AfterDefense].EventTriggerRequestLookAtTheFront()
        Npc_oasis007[AfterDefense].EventTriggerLookAtObject({'Target': 2, 'ActorName': 'Player', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    }

}

void C06_3rdClear() {

    fork {

        call C06_Camera()

    } {
        Npc_Gerudo_Queen_Young[Town].EventTriggerChangeEmotion({'EmotionType': 5, 'IsActFaceOnly': True})
        Npc_Gerudo_Queen_Young[Town].EventPlayAS({'IsAnimeDriven': False, 'IsWaitEnd': True, 'ASName': 'C06_GdQueen_Sit_Think_Talk', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
        Npc_Gerudo_Queen_Young[Town].EventTalk({'IsAnimeDriven': False, 'EndDialogOption': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': 'C06_GdQueen_Sit_Think_Talk_Loop', 'MessageId': 'EventFlowMsg/DmF_GE_GrandFinale:Dm_GE_GrandFinale_17', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        Npc_oasis007[AfterDefense].EventTriggerRequestLookAtTheFront()
        Npc_oasis007[AfterDefense].EventTriggerLookAtObject({'Target': 2, 'ActorName': 'Player', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    }

}

void C06_Camera() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'IsReferenceRootOnce': True, 'TargetActorName': 'Npc_Gerudo_Queen_Young', 'TargetActorInstanceName': 'Town', 'CameraName': '', 'IsIgnoreRootRot': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'IsWaitEnd': False, 'SceneName': 'C06', 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        PostProcessingActor[DmF_GE_GrandFinale_Cam].EventSetDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'StartDistance': 3.5, 'EndDistance': 3.5, 'StartFNumber': 80.0, 'EndFNumber': 80.0})
    }

}

void C05_Camera() {
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'CameraCollisionMode': 1, 'PosVector': [-3885.780029296875, 158.66000366210938, 2967.760009765625], 'AtVector': [-3887.280029296875, 158.99000549316406, 2967.239990234375], 'TargetFovy': 30.399999618530273, 'MoveTime': 25, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void C05_NoClear() {

    fork {

        call C05_Camera()

    } {
        Npc_Gerudo_Queen_Young[Town].EventTriggerLookAtObject({'Target': 3, 'ActorName': 'Npc_oasis007', 'InstanceName': 'AfterDefense', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        Npc_Gerudo_Queen_Young[Town].EventTalk({'IsAnimeDriven': False, 'EndDialogOption': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/DmF_GE_GrandFinale:Dm_GE_GrandFinale_04', 'ASName': 'C03-Npc_Gerudo_Queen_Young-A-0_Sit_Talk', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Gerudo_Queen_Young[Town].EventTalk({'IsAnimeDriven': False, 'EndDialogOption': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/DmF_GE_GrandFinale:Dm_GE_GrandFinale_05', 'ASName': 'C02-Npc_Gerudo_Queen_Young-A-0_Sit_Wait', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Gerudo_Queen_Young[Town].EventTriggerRequestLookAtTheFront()
    } {
        EventSystemActor[P01].EventWait({'IsWaitEnd': True, 'Frames': 50})
        Npc_oasis007[AfterDefense].EventTriggerLookAtObject({'Target': 3, 'ActorName': 'Npc_Gerudo_Queen_Young', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'InstanceName': 'Town', 'ResetArriveTransformFixed': False})
    }

}

void C05_1stClear() {

    fork {

        call C05_Camera()

    } {
        Npc_Gerudo_Queen_Young[Town].EventTriggerLookAtObject({'Target': 3, 'ActorName': 'Npc_oasis007', 'InstanceName': 'AfterDefense', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        Npc_Gerudo_Queen_Young[Town].EventTalk({'IsAnimeDriven': False, 'EndDialogOption': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/DmF_GE_GrandFinale:Dm_GE_GrandFinale_04', 'ASName': 'C03-Npc_Gerudo_Queen_Young-A-0_Sit_Talk', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Gerudo_Queen_Young[Town].EventTriggerLookAtObject({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ActorName': 'Player', 'InstanceName': '', 'ResetArriveTransformFixed': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        Npc_Gerudo_Queen_Young[Town].EventTalk({'IsAnimeDriven': False, 'EndDialogOption': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/DmF_GE_GrandFinale:Dm_GE_GrandFinale_06', 'ASName': 'C02-Npc_Gerudo_Queen_Young-A-0_Sit_Wait', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Gerudo_Queen_Young[Town].EventTriggerRequestLookAtTheFront()
    } {
        EventSystemActor[P01].EventWait({'IsWaitEnd': True, 'Frames': 50})
        Npc_oasis007[AfterDefense].EventTriggerLookAtObject({'Target': 3, 'ActorName': 'Npc_Gerudo_Queen_Young', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'InstanceName': 'Town', 'ResetArriveTransformFixed': False})
    }

}

void C05_2ndClear() {

    fork {

        call C05_Camera()

    } {
        Npc_Gerudo_Queen_Young[Town].EventTriggerLookAtObject({'Target': 3, 'ActorName': 'Npc_oasis007', 'InstanceName': 'AfterDefense', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        Npc_Gerudo_Queen_Young[Town].EventTalk({'IsAnimeDriven': False, 'EndDialogOption': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/DmF_GE_GrandFinale:Dm_GE_GrandFinale_04', 'ASName': 'C03-Npc_Gerudo_Queen_Young-A-0_Sit_Talk', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Gerudo_Queen_Young[Town].EventTriggerLookAtObject({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ActorName': 'Player', 'InstanceName': '', 'ResetArriveTransformFixed': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        Npc_Gerudo_Queen_Young[Town].EventTalk({'IsAnimeDriven': False, 'EndDialogOption': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/DmF_GE_GrandFinale:Dm_GE_GrandFinale_07', 'ASName': 'C02-Npc_Gerudo_Queen_Young-A-0_Sit_Wait', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Gerudo_Queen_Young[Town].EventTriggerRequestLookAtTheFront()
    } {
        EventSystemActor[P01].EventWait({'IsWaitEnd': True, 'Frames': 50})
        Npc_oasis007[AfterDefense].EventTriggerLookAtObject({'Target': 3, 'ActorName': 'Npc_Gerudo_Queen_Young', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'InstanceName': 'Town', 'ResetArriveTransformFixed': False})
    }

}

void C05_3rdClear() {

    fork {

        call C05_Camera()

    } {
        Npc_Gerudo_Queen_Young[Town].EventTriggerLookAtObject({'Target': 3, 'ActorName': 'Npc_oasis007', 'InstanceName': 'AfterDefense', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        Npc_Gerudo_Queen_Young[Town].EventTalk({'IsAnimeDriven': False, 'EndDialogOption': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/DmF_GE_GrandFinale:Dm_GE_GrandFinale_04', 'ASName': 'C03-Npc_Gerudo_Queen_Young-A-0_Sit_Talk', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Gerudo_Queen_Young[Town].EventTriggerLookAtObject({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ActorName': 'Player', 'InstanceName': '', 'ResetArriveTransformFixed': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        Npc_Gerudo_Queen_Young[Town].EventTalk({'IsAnimeDriven': False, 'EndDialogOption': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/DmF_GE_GrandFinale:Dm_GE_GrandFinale_09', 'ASName': 'C02-Npc_Gerudo_Queen_Young-A-0_Sit_Wait', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Gerudo_Queen_Young[Town].EventTriggerRequestLookAtTheFront()
    } {
        EventSystemActor[P01].EventWait({'IsWaitEnd': True, 'Frames': 50})
        Npc_oasis007[AfterDefense].EventTriggerLookAtObject({'Target': 3, 'ActorName': 'Npc_Gerudo_Queen_Young', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'InstanceName': 'Town', 'ResetArriveTransformFixed': False})
    }

}

void C04_Npc_anim() {

    fork {
        EventSystemActor[NPC_wait_01].EventWait({'IsWaitEnd': True, 'Frames': 7})
        Dm_GE_GrandFinale_oasis025.EventPlayAS({'IsWaitEnd': False, 'ASName': 'C04-UMii_Gerudo_BodyS_W_000-A-0_SquatSt', 'ForceFadeInFrame': 0.0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False})
    } {
        EventSystemActor[NPC_wait].EventWait({'IsWaitEnd': True, 'Frames': 3})
        Npc_oasis026.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'C04-UMii_Gerudo_BodyS_W_000-A-0_SquatSt', 'ForceFadeInFrame': 0.0})
    } {
        Npc_oasis036.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'C04-UMii_Gerudo_BodyS_W_000-A-0_SquatSt', 'ForceFadeInFrame': 0.0})
    } {
        Npc_OasisStep_A.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'C04-UMii_Gerudo_BodyS_W_000-A-0_SquatSt', 'ForceFadeInFrame': 0.0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
        Npc_OasisStep_B.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'C04-UMii_Gerudo_BodyS_W_000-A-0_SquatSt', 'ForceFadeInFrame': 0.0})
    } {
        Npc_Gerudo_Queen_Young[Town].EventTriggerEmitXLink({'SLinkKey': 'DmF_GE_GrandFinale_Soldier_Kneel', 'ELinkKey': ''})
    }

}

void C05_NPC() {

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})
        Npc_OasisStep_A.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': True, 'ASName': 'C04-UMii_Gerudo_BodyS_W_000-A-0_SquatUp', 'ForceFadeInFrame': -1.0})
        Npc_OasisStep_A.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Wait', 'ForceFadeInFrame': -1.0})
    } {
        EventSystemActor[P01].EventWait({'IsWaitEnd': True, 'Frames': 60})
        Npc_OasisStep_B.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': True, 'ASName': 'C04-UMii_Gerudo_BodyS_W_000-A-0_SquatUp', 'ForceFadeInFrame': -1.0})
        Npc_OasisStep_B.EventPlayAS({'IsWaitEnd': False, 'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})
    }

}

void C01_NPC_Position() {

    fork {
        Npc_oasis014.EventPlayAS({'IsWaitEnd': False, 'ASName': 'Talk', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})
    } {
        Npc_oasis008.EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})
    } {
        EventSystemActor[NPC_wait].EventWait({'IsWaitEnd': True, 'Frames': 3})
        Npc_oasis017.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'DmF_GE_GrandFinale_Oasis017_LaughL'})
        Npc_oasis017.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': True, 'ASName': 'C01_Move_Run_02', 'ForceFadeInFrame': -1.0})
    } {
        Npc_oasis013.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'DmF_GE_GrandFinale_Oasis013_LaughL'})
        Npc_oasis013.EventPlayAS({'IsWaitEnd': False, 'IsAnimeDriven': True, 'Partial': '', 'IsAllSlot': False, 'ASName': 'C01_Move_Run', 'ForceFadeInFrame': -1.0})
    } {
        Npc_OasisHylia_001[OutUG].EventPlayAS({'IsWaitEnd': False, 'ASName': 'Act_Touting', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        Npc_oasis028.EventPlayAS({'IsWaitEnd': False, 'ASName': 'Walk', 'IsAnimeDriven': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
    } {
        Npc_oasis021.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'C01-UMii_Gerudo_BodyC_Wait'})
    }

}

void C01_NPC_Warp() {
    Npc_oasis021.EventWarpToTargetPosAndRot({'Position': [-3814.3330078125, 149.5800018310547, 2898.069091796875], 'YAngle': -164.7790069580078, 'IsWaitEnd': True})
    Npc_oasis021.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'Act_Wander_Wait', 'ForceFadeInFrame': -1.0})
    Npc_oasis028.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [-3820.719970703125, 149.5800018310547, 2895.6298828125], 'YAngle': -48.0})
    Npc_oasis013.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 88.0, 'Position': [-3821.281982421875, 149.68370056152344, 2891.006103515625]})
}

void C07_NPC() {
    Npc_OasisStep_B.EventGoOffstageForUser({'IsSleepXLink': True, 'IsWaitEnd': False, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    Npc_OasisStep_A.EventGoOffstageForUser({'IsSleepXLink': True, 'IsWaitEnd': False, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    Npc_oasis036.EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    Npc_oasis026.EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    Dm_GE_GrandFinale_oasis025.EventGoOffstageForUser({'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsWaitEnd': False, 'IsRidingTargetGoOffstage': False})
}

void C10_01_03() {

    fork {

        call C10_Cam()

    } {
        EventSystemActor[P01].EventWait({'IsWaitEnd': True, 'Frames': 30})
        Npc_oasis007[AfterDefense].EventTalk({'IsAnimeDriven': False, 'EndDialogOption': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/DmF_GE_GrandFinale:Dm_GE_GrandFinale_19', 'ASName': '', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }

}

void C10_04_01() {

    fork {

        call C10_Cam()

    } {
        EventSystemActor[P01].EventWait({'IsWaitEnd': True, 'Frames': 30})
        Npc_oasis007[AfterDefense].EventTalk({'IsAnimeDriven': False, 'EndDialogOption': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/DmF_GE_GrandFinale:Dm_GE_GrandFinale_20', 'ASName': '', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }

}

void C10_Cam() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-3882.2099609375, 158.72000122070312, 2960.909912109375], 'AtVector': [-3889.72998046875, 159.5399932861328, 2965.389892578125], 'TargetFovy': 11.300000190734863, 'MoveTime': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-3882.639892578125, 158.77000427246094, 2961.159912109375], 'AtVector': [-3889.72998046875, 159.5399932861328, 2965.389892578125], 'TargetFovy': 11.300000190734863, 'IsWaitEnd': False, 'IsLinearMove': True, 'MoveTime': 500, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        PostProcessingActor[DmF_GE_GrandFinale_Cam].EventSetDoFForFlowchart({'EndFNumber': 50.0, 'StartFNumber': 50.0, 'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartBluarLevel': 2.5, 'EndBluarLevel': 2.5, 'StartDistance': 8.5, 'EndDistance': 8.5})
    }

}

void C10_04_02() {

    fork {

        call C10_Cam()

    } {
        EventSystemActor[P01].EventWait({'IsWaitEnd': True, 'Frames': 30})
        Npc_oasis007[AfterDefense].EventTalk({'IsAnimeDriven': False, 'EndDialogOption': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/DmF_GE_GrandFinale:Dm_GE_GrandFinale_21', 'ASName': '', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }

}

void C11() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'Actor1ActorName': 'Player', 'PosVector': [0.0, 1.7599999904632568, -2.990000009536743], 'AtVector': [0.0, 1.6699999570846558, -1.9900000095367432], 'TargetFovy': 55.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_Gerudo_Queen_Young[Town].EventTalk({'IsAnimeDriven': False, 'EndDialogOption': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/DmF_GE_GrandFinale:Dm_GE_GrandFinale_11', 'ASName': 'C09-Npc_Gerudo_Queen_Young-A-0_Loop', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Gerudo_Queen_Young[Town].EventTalk({'IsAnimeDriven': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'EndDialogOption': 3, 'MessageId': 'EventFlowMsg/DmF_GE_GrandFinale:Dm_GE_GrandFinale_18', 'ASName': 'C09-Npc_Gerudo_Queen_Young-A-0_Nod', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    } {
        PostProcessingActor[DmF_GE_GrandFinale_Cam].EventSetDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartDistance': 4.0, 'EndDistance': 4.0, 'StartFNumber': 9.0, 'EndFNumber': 9.0, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0})
    }

    if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckSeries': 'Yiga', 'CheckUpper': False, 'CheckLower': False}) {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        Npc_oasis007[AfterDefense].EventTalk({'IsAnimeDriven': False, 'ASName': 'Act_GeneralWait', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/DmF_GE_GrandFinale:Dm_GE_GrandFinale_23', 'IsNotOpenIfSkipedMostRecent': False})
        Event398:
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'Color': 0, 'Length': 2, 'IsNoPlayAnime': False})
        Player.EventPlayerWarpToTargetPosAndRot({'YAngle': 135.0, 'IsWaitEnd': True, 'Position': [-3781.75, 148.5800018310547, 2860.5], 'UseDemoWait': True})
        Player.EventTriggerPlayerRequestLookAtTheFrontLock()
        Event368:
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': False, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False, 'Actor1ActorName': 'Player', 'PosVector': [0.0, 1.7699999809265137, -2.990000009536743], 'AtVector': [0.0, 1.5, 0.0], 'TargetFovy': 55.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False})
        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 100.0})
        Npc_Gerudo_Queen_Young[Town].EventPlayAS({'IsAnimeDriven': False, 'ASName': 'Act_GdQueen_Sit', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
        Npc_oasis007[AfterDefense].EventWarpBehindCamera({'Offset': 20.0, 'IsWaitEnd': True})

        call NPC_End()


        call C01_NPC_On()


        call C02_NPC_On()

    } else
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckSeries': 'Naked', 'CheckUpper': True, 'CheckHead': False, 'CheckLower': False}) {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        Npc_oasis007[AfterDefense].EventTalk({'IsAnimeDriven': False, 'ASName': 'Act_GeneralWait', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/DmF_GE_GrandFinale:Dm_GE_GrandFinale_24', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event398
    } else {
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'Color': 0, 'Length': 2, 'IsNoPlayAnime': False})
        goto Event368
    }
}

void C08_NPCwait() {

    fork {
        Dm_GE_GrandFinale_oasis025.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [-3882.5400390625, 157.10060119628906, 2973.903076171875], 'YAngle': 170.0})
        Dm_GE_GrandFinale_oasis025.EventPlayAS({'IsWaitEnd': False, 'ASName': 'C02-UMii_Gerudo_BodyS_W_000-A-0_Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        Npc_oasis026.EventWarpToTargetPosAndRot({'IsWaitEnd': False, 'Position': [-3884.81005859375, 157.10060119628906, 2971.56494140625], 'YAngle': 157.0})
        Npc_oasis026.EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        Npc_oasis036.EventWarpToTargetPosAndRot({'IsWaitEnd': False, 'Position': [-3886.550048828125, 157.10220336914062, 2970.3701171875], 'YAngle': 150.0})
        Npc_oasis036.EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        Npc_OasisStep_A.EventWarpToTargetPosAndRot({'Position': [-3893.31005859375, 157.10220336914062, 2963.360107421875], 'IsWaitEnd': True, 'YAngle': 115.0})
        Npc_OasisStep_A.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Wait', 'ForceFadeInFrame': -1.0})
    } {
        Npc_OasisStep_B.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [-3895.2119140625, 157.10110473632812, 2961.3330078125], 'YAngle': 100.0})
        Npc_OasisStep_B.EventPlayAS({'IsWaitEnd': False, 'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})
    }

}

void C01_NPC_On() {
    Npc_oasis021.EventTriggerRequestCancelPause()
    Npc_oasis028.EventTriggerRequestCancelPause()
    Npc_oasis013.EventTriggerRequestCancelPause()
    Npc_oasis017.EventTriggerRequestCancelPause()
    Npc_OasisHylia_001[OutUG].EventTriggerRequestCancelPause()
    Npc_oasis008.EventTriggerRequestCancelPause()
    Npc_oasis014.EventTriggerRequestCancelPause()
}

void C01_NPC_Off() {
    Npc_oasis021.EventTriggerRequestPause()
    Npc_oasis028.EventTriggerRequestPause()
    Npc_oasis013.EventTriggerRequestPause()
    Npc_oasis017.EventTriggerRequestPause()
    Npc_OasisHylia_001[OutUG].EventTriggerRequestPause()
    Npc_oasis008.EventTriggerRequestPause()
    Npc_oasis014.EventTriggerRequestPause()
}

void prepare() {
    Npc_oasis021.EventTriggerPushSpecificPauseMask({'IsCloth': True, 'IsPauseAS': False, 'IsDisableIK': True, 'IsDisablePerceptionReceiver': True, 'IsFrameEndCalc': False, 'IsPhysics': False, 'IsPauseHelperBone': False})
    Npc_oasis028.EventTriggerPushSpecificPauseMask({'IsCloth': True, 'IsDisableIK': True, 'IsDisablePerceptionReceiver': True, 'IsFrameEndCalc': False, 'IsPhysics': False, 'IsPauseHelperBone': False, 'IsPauseAS': False})
    Npc_oasis013.EventTriggerPushSpecificPauseMask({'IsPhysics': False, 'IsCloth': True, 'IsDisableIK': True, 'IsDisablePerceptionReceiver': True, 'IsFrameEndCalc': False, 'IsPauseHelperBone': False, 'IsPauseAS': False})
    Npc_oasis017.EventTriggerPushSpecificPauseMask({'IsCloth': True, 'IsDisableIK': True, 'IsDisablePerceptionReceiver': True, 'IsFrameEndCalc': False, 'IsPhysics': False, 'IsPauseHelperBone': False, 'IsPauseAS': False})
    Npc_OasisHylia_001[OutUG].EventTriggerPushSpecificPauseMask({'IsCloth': True, 'IsDisableIK': True, 'IsDisablePerceptionReceiver': True, 'IsFrameEndCalc': False, 'IsPhysics': False, 'IsPauseHelperBone': False, 'IsPauseAS': False})
    Npc_oasis008.EventTriggerPushSpecificPauseMask({'IsCloth': True, 'IsDisableIK': True, 'IsDisablePerceptionReceiver': True, 'IsFrameEndCalc': False, 'IsPhysics': False, 'IsPauseHelperBone': False, 'IsPauseAS': False})
    Npc_oasis014.EventTriggerPushSpecificPauseMask({'IsCloth': True, 'IsDisableIK': True, 'IsDisablePerceptionReceiver': True, 'IsFrameEndCalc': False, 'IsPhysics': False, 'IsPauseHelperBone': False, 'IsPauseAS': False})
    Npc_OasisStep_B.EventTriggerPushSpecificPauseMask({'IsCloth': True, 'IsDisableIK': True, 'IsDisablePerceptionReceiver': True, 'IsFrameEndCalc': False, 'IsPhysics': False, 'IsPauseHelperBone': False, 'IsPauseAS': False})
    Npc_OasisStep_A.EventTriggerPushSpecificPauseMask({'IsCloth': True, 'IsDisableIK': True, 'IsDisablePerceptionReceiver': True, 'IsFrameEndCalc': False, 'IsPhysics': False, 'IsPauseHelperBone': False, 'IsPauseAS': False})
    Dm_GE_GrandFinale_oasis025.EventTriggerPushSpecificPauseMask({'IsCloth': True, 'IsDisableIK': True, 'IsDisablePerceptionReceiver': True, 'IsFrameEndCalc': False, 'IsPhysics': False, 'IsPauseHelperBone': False, 'IsPauseAS': False})
    Npc_oasis026.EventTriggerPushSpecificPauseMask({'IsDisableIK': True, 'IsDisablePerceptionReceiver': True, 'IsCloth': True, 'IsFrameEndCalc': False, 'IsPhysics': False, 'IsPauseHelperBone': False, 'IsPauseAS': False})
    Npc_oasis036.EventTriggerPushSpecificPauseMask({'IsPauseAS': False, 'IsPauseHelperBone': False, 'IsCloth': True, 'IsDisableIK': True, 'IsDisablePerceptionReceiver': True, 'IsFrameEndCalc': False, 'IsPhysics': False})
    EventSystemActor[NPC_wait_01].EventWait({'Frames': 1, 'IsWaitEnd': True})
    Npc_oasis021.EventTriggerRequestPause()
    Npc_oasis028.EventTriggerRequestPause()
    Npc_oasis013.EventTriggerRequestPause()
    Npc_oasis017.EventTriggerRequestPause()
    Npc_OasisHylia_001[OutUG].EventTriggerRequestPause()
    Npc_oasis008.EventTriggerRequestPause()
    Npc_oasis014.EventTriggerRequestPause()
    Npc_OasisStep_B.EventTriggerRequestPause()
    Npc_OasisStep_A.EventTriggerRequestPause()
    Dm_GE_GrandFinale_oasis025.EventTriggerRequestPause()
    Npc_oasis026.EventTriggerRequestPause()
    Npc_oasis036.EventTriggerRequestPause()
}

void C02_NPC_On() {
    Npc_OasisStep_B.EventTriggerRequestCancelPause()
    Npc_OasisStep_A.EventTriggerRequestCancelPause()
    Dm_GE_GrandFinale_oasis025.EventTriggerRequestCancelPause()
    Npc_oasis026.EventTriggerRequestCancelPause()
    Npc_oasis036.EventTriggerRequestCancelPause()
}

void C02_NPC_Off() {
    Npc_OasisStep_B.EventTriggerRequestPause()
    Npc_OasisStep_A.EventTriggerRequestPause()
    Dm_GE_GrandFinale_oasis025.EventTriggerRequestPause()
    Npc_oasis026.EventTriggerRequestPause()
    Npc_oasis036.EventTriggerRequestPause()
}

void NPC_End() {
    Npc_oasis021.EventTriggerEraseSpecificPauseMask()
    Npc_oasis028.EventTriggerEraseSpecificPauseMask()
    Npc_oasis013.EventTriggerEraseSpecificPauseMask()
    Npc_oasis017.EventTriggerEraseSpecificPauseMask()
    Npc_OasisHylia_001[OutUG].EventTriggerEraseSpecificPauseMask()
    Npc_oasis008.EventTriggerEraseSpecificPauseMask()
    Npc_oasis014.EventTriggerEraseSpecificPauseMask()
    Npc_OasisStep_B.EventTriggerEraseSpecificPauseMask()
    Npc_OasisStep_A.EventTriggerEraseSpecificPauseMask()
    Dm_GE_GrandFinale_oasis025.EventTriggerEraseSpecificPauseMask()
    Npc_oasis026.EventTriggerEraseSpecificPauseMask()
    Npc_oasis036.EventTriggerEraseSpecificPauseMask()
}
