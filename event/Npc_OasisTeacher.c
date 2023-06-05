-------- EventFlow: Npc_OasisTeacher --------

Actor: Npc_OasisTeacher
entrypoint: None()
actions: ['EventTalk', 'EventTriggerRequestLookSpeaker', 'EventTriggerLookAtObject', 'EventPlayAS']
queries: ['EventQueryAIScheduleCheckActorAction14', 'EventQueryIsOnRecentTalkFlag', 'EventQueryAvoidDuplicationRandomChoice3']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn', 'EventWait', 'EventCloseMessageDialog']
queries: ['EventQueryTalkChoice2', 'EventQueryRandomChoice2', 'EventQueryRandomChoice4', 'EventQueryRandomChoice8']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_oasis016
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: ['EventQueryAIScheduleCheckActorAction14']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_oasis017
entrypoint: None()
actions: ['EventTalk', 'EventTriggerRequestLookSpeaker', 'EventTriggerLookAtObject', 'EventPlayAS', 'EventTriggerParticipateEvent']
queries: ['EventQueryAIScheduleCheckActorAction14']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_oasis013
entrypoint: None()
actions: ['EventTalk', 'EventTriggerRequestLookSpeaker', 'EventPlayAS', 'EventTriggerLookAtObject', 'EventTriggerParticipateEvent']
queries: ['EventQueryAIScheduleCheckActorAction14']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_OasisMilk_D
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventAIScheduleWarpToAnchor', 'EventTalk', 'EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS', 'EventTriggerNPCChangePosture', 'EventPlayAS', 'EventTriggerChangeEmotion', 'EventTriggerParticipateEvent', 'EventTriggerLookAtObject']
queries: ['EventQueryAIScheduleCheckActorAction14']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_oasis021
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventAIScheduleWarpToAnchor', 'EventTalk', 'EventNPCTurnToTarget', 'EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS', 'EventTriggerNPCChangePosture', 'EventPlayAS', 'EventTriggerChangeEmotion', 'EventWait', 'EventTriggerParticipateEvent', 'EventTriggerLookAtObject']
queries: ['EventQueryAIScheduleCheckActorAction14']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_oasis008
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventAIScheduleWarpToAnchor', 'EventTalk', 'EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS', 'EventTriggerNPCChangePosture', 'EventPlayAS', 'EventTriggerChangeEmotion', 'EventTriggerParticipateEvent', 'EventTriggerLookAtObject']
queries: ['EventQueryAIScheduleCheckActorAction14']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventSendMultiEventTalkMessageToPlayerCamera', 'EventTriggerCameraSavePoint', 'EventMoveCameraToSavePoint']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerUnequip', 'EventPlayerWarpToNearAnchor', 'EventTriggerPlayerLookAtObject', 'EventPlayerPlayASForFlowchart', 'EventPlayerWarpToStarterLinkAnchor', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventPlayerClimbOff', 'EventTriggerParticipateEvent']
queries: ['EventQueryPlayerEquipArmorSeries', 'EventQueryEquipWeaponAttachmentActor', 'EventQueryEquipWeaponSlotType', 'EventQueryIsEquipArmor', 'EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventRequestQuit', 'EventWait', 'EventTransition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryTimeDivision']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_oasis016[OutUG]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: ['EventQueryAIScheduleCheckActorAction14']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_oasis011
entrypoint: None()
actions: ['EventTriggerRequestLookSpeaker', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: ['EventTriggerAddOrRemovePouchContent']
queries: ['EventQueryIsExistInPouch']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundRequestDucking', 'EventSoundChangeListenerPreset']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_oasis016[OasisTeacher_oasis016(Self)]
entrypoint: OasisTeacher_oasis016(Self)
actions: ['EventTriggerRequestLookSpeaker', 'EventPlayAS', 'EventTalk']
queries: []
params: None

Actor: Npc_OasisMilk_D[TalkAnimation_BeforeReset(Npc_Student)]
entrypoint: TalkAnimation_BeforeReset(Npc_Student)
actions: ['EventTriggerChangeEmotion', 'EventPlayAS', 'EventTriggerLookAtObject']
queries: []
params: None

Actor: Npc_EventStarter[InitTalk_Quartet_InAir(Actor1)]
entrypoint: InitTalk_Quartet_InAir(Actor1)
actions: ['EventTriggerBecomeSpeaker', 'EventTriggerSetRecentTalkFlag', 'EventTriggerSetHaveTalked', 'EventUnequipWeapon', 'EventNPCTurnToObjectGreeting']
queries: ['EventQueryNeedEquipWeapon', 'EventQueryHasControllerSet']
params: None

Actor: Npc_EventStarter[InitTalk_Quartet_InAir(Actor2)]
entrypoint: InitTalk_Quartet_InAir(Actor2)
actions: ['EventTriggerSetRecentTalkFlag', 'EventTriggerSetHaveTalked', 'EventUnequipWeapon', 'EventNPCTurnToObjectGreeting']
queries: ['EventQueryNeedEquipWeapon', 'EventQueryHasControllerSet']
params: None

Actor: Npc_EventStarter[InitTalk_Quartet_InAir(Actor3)]
entrypoint: InitTalk_Quartet_InAir(Actor3)
actions: ['EventTriggerSetRecentTalkFlag', 'EventTriggerSetHaveTalked', 'EventUnequipWeapon', 'EventNPCTurnToObjectGreeting']
queries: ['EventQueryNeedEquipWeapon', 'EventQueryHasControllerSet']
params: None

Actor: Npc_EventStarter[InitTalk_Quartet_InAir(Actor4)]
entrypoint: InitTalk_Quartet_InAir(Actor4)
actions: ['EventTriggerSetRecentTalkFlag', 'EventTriggerSetHaveTalked', 'EventUnequipWeapon', 'EventNPCTurnToObjectGreeting']
queries: ['EventQueryNeedEquipWeapon', 'EventQueryHasControllerSet']
params: None

Actor: Npc_EventStarter[InitTalk_Quartet_NoCamera(Actor1)]
entrypoint: InitTalk_Quartet_NoCamera(Actor1)
actions: ['EventTriggerBecomeSpeaker', 'EventTriggerSetRecentTalkFlag', 'EventTriggerSetHaveTalked', 'EventUnequipWeapon', 'EventNPCTurnToObjectGreeting']
queries: ['EventQueryNeedEquipWeapon', 'EventQueryHasControllerSet']
params: None

Actor: Npc_EventStarter[InitTalk_Quartet_NoCamera(Actor2)]
entrypoint: InitTalk_Quartet_NoCamera(Actor2)
actions: ['EventTriggerSetRecentTalkFlag', 'EventTriggerSetHaveTalked', 'EventUnequipWeapon', 'EventNPCTurnToObjectGreeting']
queries: ['EventQueryNeedEquipWeapon', 'EventQueryHasControllerSet']
params: None

Actor: Npc_EventStarter[InitTalk_Quartet_NoCamera(Actor3)]
entrypoint: InitTalk_Quartet_NoCamera(Actor3)
actions: ['EventTriggerSetRecentTalkFlag', 'EventTriggerSetHaveTalked', 'EventUnequipWeapon', 'EventNPCTurnToObjectGreeting']
queries: ['EventQueryNeedEquipWeapon', 'EventQueryHasControllerSet']
params: None

Actor: Npc_EventStarter[InitTalk_Quartet_NoCamera(Actor4)]
entrypoint: InitTalk_Quartet_NoCamera(Actor4)
actions: ['EventTriggerSetRecentTalkFlag', 'EventTriggerSetHaveTalked', 'EventUnequipWeapon', 'EventNPCTurnToObjectGreeting']
queries: ['EventQueryNeedEquipWeapon', 'EventQueryHasControllerSet']
params: None

void Talk() {
    switch Npc_OasisTeacher.EventQueryAIScheduleCheckActorAction14() {
      case [0, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_OasisTeacher_ListenClass'}) {
            switch Npc_OasisTeacher.EventQueryAIScheduleCheckActorAction14() {
              case [0, 1, 2, 3, 4, 6, 7, 8, 9, 10, 11, 12, 13]:
                Event32:

                call Not_Lesson()

              case 5:
                switch Npc_oasis021.EventQueryAIScheduleCheckActorAction14() {
                  case [0, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
                    goto Event32
                  case 1:
                    switch Npc_oasis008.EventQueryAIScheduleCheckActorAction14() {
                      case [0, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
                        goto Event32
                      case 1:
                        switch Npc_OasisMilk_D.EventQueryAIScheduleCheckActorAction14() {
                          case [0, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
                            goto Event32
                          case 1:

                            call LessonNight()

                        }
                    }
                }
            }
        } else {
            Event733:

            call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_OasisTeacher_InPrison'}) {
                Npc_OasisTeacher.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0016', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_OasisTeacher.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0000', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
            Npc_OasisTeacher.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0008', 'ChoiceNumber': 2, 'ChoiceLabel2': 1, 'ChoiceLabel1': 0, 'ChoiceCancelNo': 1, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            if !GameSystemActor.EventQueryTalkChoice2() {
                Npc_OasisTeacher.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0004', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_OasisTeacher.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0009', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
            Npc_OasisTeacher.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0010', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_OasisTeacher_ListenClass', 'Index': -1, 'Value': True})
        }
      case 1:
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfGerudo_IsAfter_DungeonBossDead_Exp'}) {
            switch Npc_oasis016[OutUG].EventQueryAIScheduleCheckActorAction14() {
              case [0, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
                goto Event32
              case 1:
                Event51:
                switch Npc_oasis017.EventQueryAIScheduleCheckActorAction14() {
                  case [0, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
                    goto Event32
                  case 1:
                    switch Npc_oasis013.EventQueryAIScheduleCheckActorAction14() {
                      case [0, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
                        goto Event32
                      case 1:

                        call ComeOut()

                    }
                }
            }
        } else
        switch Npc_oasis016.EventQueryAIScheduleCheckActorAction14() {
          case [0, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
            goto Event32
          case 1:
            goto Event51
        }
    }
}

void ComeOut() {

    call Common.AirStartUP_Player()

    if Player.EventQueryCheckPlayerState({'State': 6}) {
        Player.EventPlayerClimbOff({'IsWaitEnd': True})
    }

    call InitTalk.InitTalkOnEvent({'Arg_Turn': 4, 'Self': ActorIdentifier(name="Npc_OasisTeacher")})

    Event301:
    Npc_oasis017.EventTriggerParticipateEvent()
    Npc_oasis013.EventTriggerParticipateEvent()
    Npc_oasis016[OutUG].EventTriggerParticipateEvent()
    Npc_oasis016.EventTriggerParticipateEvent()
    Player.EventTriggerParticipateEvent()
    Npc_OasisTeacher.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_OasisTeacher_Warning1', 'Index': -1}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_OasisTeacher_Warning2'}) {
            Npc_OasisTeacher.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0003', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_OasisTeacher_Warning2', 'Value': False, 'Index': -1})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_OasisTeacher_InPrison', 'Value': True, 'Index': -1})

            fork {
                Npc_OasisTeacher.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0006', 'IsNotOpenIfSkipedMostRecent': False})
            } {
                EventSystemActor.EventWait({'Frames': 10, 'IsWaitEnd': True})
                Player.EventPlayerPlayASForFlowchart({'ASCommand': 'LookAround', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ClothWarpMode': 0})
            }


            call Npc_OasisStep_A.InPrizon()

        } else {
            Npc_OasisTeacher.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0002', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'GameDataName': 'Npc_OasisTeacher_Warning2', 'Index': -1})
            Event58:
            GameSystemActor.EventEventFadeOut({'Length': 1, 'Color': 0, 'IsWaitEnd': True, 'IsNoPlayAnime': False})

            fork {

                call Npc_OasisStep_A.PlayerSittingCheck()

                Player.EventPlayerWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'Npc_OasisTeacher_PlayerWarp', 'IsWaitEnd': True, 'UseDemoWait': True})
                Player.EventPlayerUnequip({'IsWaitEnd': True})
            } {
                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-3873.280029296875, 141.07000732421875, 2976.8798828125], 'AtVector': [-3869.0, 141.07000732421875, 2980.0], 'TargetFovy': 50.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            }

            Player.EventTriggerPlayerRequestLookAtTheFrontLock()
            Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Wait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
            GameSystemActor.EventEventFadeIn({'Length': 1, 'Color': 0, 'IsWaitEnd': True, 'IsNoPlayAnime': False})
            EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
        }
    } else {
        Npc_OasisTeacher.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0001', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_OasisTeacher_Warning1', 'Value': True, 'Index': -1})
        goto Event58
    }
}

void LessonNoon() {
    EventCamera.EventTriggerCameraSavePoint()
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfGerudo_IsAfter_DungeonBossDead_Exp'}) {

        call InitTalk_Quartet_NoCamera({'Arg_Turn': 0, 'Arg_Greeting': 4, 'Spearker1ActorName': 'Npc_OasisTeacher', 'Spearker2ActorName': 'Npc_oasis016', 'Spearker2InstanceName': 'OutUG', 'Spearker3ActorName': 'Npc_oasis013', 'Spearker4ActorName': 'Npc_oasis017', 'Spearker1InstanceName': '', 'Actor1': ActorIdentifier(name="Npc_OasisTeacher"), 'Actor2': ActorIdentifier(name="Npc_oasis016", sub_name="OutUG"), 'Actor3': ActorIdentifier(name="Npc_oasis013"), 'Actor4': ActorIdentifier(name="Npc_oasis017"), 'Spearker3InstanceName': '', 'Spearker4InstanceName': ''})

    } else {

        call InitTalk_Quartet_NoCamera({'Arg_Turn': 0, 'Arg_Greeting': 4, 'Spearker1ActorName': 'Npc_OasisTeacher', 'Spearker2ActorName': 'Npc_oasis016', 'Spearker3ActorName': 'Npc_oasis013', 'Spearker4ActorName': 'Npc_oasis017', 'Actor1': ActorIdentifier(name="Npc_OasisTeacher"), 'Actor2': ActorIdentifier(name="Npc_oasis016"), 'Actor3': ActorIdentifier(name="Npc_oasis013"), 'Actor4': ActorIdentifier(name="Npc_oasis017"), 'Spearker1InstanceName': '', 'Spearker2InstanceName': '', 'Spearker3InstanceName': '', 'Spearker4InstanceName': ''})

    }
    Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'Wait', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})

    call Teacher_Noon_Camera()

    if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckUpper': True, 'CheckLower': True, 'CheckSeries': 'Gerudo'}) {
        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0})
        Event70:
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfGerudo_IsAfter_DungeonBossDead_Exp'}) {

            call oasis016_OutUG()

        } else {

            call oasis016()

        }
    } else {
        Npc_oasis013.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        Npc_oasis013.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceLabel1': 50, 'ChoiceLabel2': 51, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0015', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

        call ComeOutStudent()

    }
}

void LessonNight() {

    fork {

        call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    } {
        Npc_oasis021.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Act_SitChair_Wait', 'IsWaitEnd': False})
    } {
        Npc_OasisMilk_D.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Act_SitChair_Wait', 'IsWaitEnd': False})
    } {
        Npc_oasis008.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Act_SitChair_Wait', 'IsWaitEnd': False})
    }

    Npc_OasisTeacher.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0050', 'ChoiceNumber': 2, 'ChoiceLabel1': 50, 'ChoiceLabel2': 51, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    if !GameSystemActor.EventQueryTalkChoice2() {
        Npc_oasis021.EventTriggerParticipateEvent()
        Npc_OasisMilk_D.EventTriggerParticipateEvent()
        Npc_oasis008.EventTriggerParticipateEvent()
        Npc_OasisTeacher.EventTriggerLookAtObject({'Target': 3, 'ActorName': 'Npc_oasis008', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})

        call Teacher_Night_Camera()


        fork {
            GameSystemActor.EventWait({'Frames': 10, 'IsWaitEnd': True})
            Npc_oasis021.EventTriggerLookAtObject({'Target': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
            Npc_oasis008.EventTriggerLookAtObject({'Target': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
            Npc_OasisMilk_D.EventTriggerLookAtObject({'Target': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        } {
            Npc_OasisTeacher.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0053', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }

        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_OasisTeacher_NightLesson1', 'Index': -1}) {
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_OasisTeacher_NightLesson2', 'Index': -1}) {
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_OasisTeacher_NightLesson3', 'Index': -1}) {
                    switch Npc_OasisTeacher.EventQueryAvoidDuplicationRandomChoice3() {
                      case 0:

                        call OasisMilk_D_Camera()


                        fork {
                            Npc_OasisTeacher.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0054', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        } {
                            Npc_OasisMilk_D.EventTriggerChangeEmotion({'IsActFaceOnly': True, 'EmotionType': 1})
                        }


                        call NPC3_Set()

                        Npc_OasisMilk_D.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0102', 'ChoiceNumber': 2, 'ChoiceLabel1': 10, 'ChoiceLabel2': 11, 'ChoiceCancelNo': 1, 'IsNotOpenIfSkipedMostRecent': False})
                        if !GameSystemActor.EventQueryTalkChoice2() {
                            Npc_OasisMilk_D.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 10, 'ChoiceLabel2': 11, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0103', 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
                        } else {
                            Npc_OasisMilk_D.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 10, 'ChoiceLabel2': 11, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0104', 'IsNotOpenIfSkipedMostRecent': False})
                        }

                        fork {
                            Npc_OasisTeacher.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0060', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        } {

                            call TalkAnimation_BeforeReset({'Npc_Student': ActorIdentifier(name="Npc_OasisMilk_D")})

                        }


                        call Reset()

                        Npc_OasisTeacher.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0105', 'IsNotOpenIfSkipedMostRecent': False})
                        Event190:
                        Npc_OasisTeacher.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
                        Npc_OasisTeacher.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0107', 'IsNotOpenIfSkipedMostRecent': False})
                      case 1:

                        call oasis008_Camera()


                        fork {
                            Npc_OasisTeacher.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0056', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        } {
                            Npc_oasis008.EventTriggerChangeEmotion({'IsActFaceOnly': True, 'EmotionType': 1})
                        }


                        call NPC2_Set()

                        Npc_oasis008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0094', 'ChoiceLabel2': 3, 'ChoiceLabel1': 2, 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
                        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkHandOver', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': False, 'ClothWarpMode': 0})
                        Npc_OasisTeacher.EventTriggerLookAtObject({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 2, 'ActorName': '', 'ResetArriveTransformFixed': False})

                        fork {
                            Npc_OasisTeacher.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0095', 'IsNotOpenIfSkipedMostRecent': False})
                        } {

                            call TalkAnimation_BeforeReset({'Npc_Student': ActorIdentifier(name="Npc_oasis008")})

                        }


                        call Reset()

                        Npc_OasisTeacher.EventTriggerLookAtObject({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'ActorName': 'Npc_oasis008', 'ResetArriveTransformFixed': False})
                        Npc_OasisTeacher.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0096', 'IsNotOpenIfSkipedMostRecent': False})
                        Npc_OasisTeacher.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0098', 'IsNotOpenIfSkipedMostRecent': False})
                        goto Event190
                      case 2:

                        call oasis021_Camera()


                        fork {
                            Npc_OasisTeacher.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0055', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        } {
                            Npc_oasis021.EventTriggerChangeEmotion({'IsActFaceOnly': True, 'EmotionType': 1})
                        }


                        call NPC1_Set()

                        Npc_oasis021.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0088', 'IsNotOpenIfSkipedMostRecent': False})

                        fork {
                            Npc_OasisTeacher.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0060', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        } {

                            call TalkAnimation_BeforeReset({'Npc_Student': ActorIdentifier(name="Npc_oasis021")})

                        }


                        call Reset()

                        Npc_OasisTeacher.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0089', 'IsNotOpenIfSkipedMostRecent': False})
                        Npc_OasisTeacher.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
                        Npc_OasisTeacher.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0090', 'IsNotOpenIfSkipedMostRecent': False})
                    }
                } else {

                    call OasisMilk_D_Camera()


                    fork {
                        Npc_OasisTeacher.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0054', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    } {
                        Npc_OasisMilk_D.EventTriggerChangeEmotion({'EmotionType': 4, 'IsActFaceOnly': True})
                    }


                    call NPC3_Set()

                    Npc_OasisMilk_D.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0057', 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'ChoiceLabel3': 6, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
                    Npc_OasisTeacher.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0064', 'IsNotOpenIfSkipedMostRecent': False})
                    Npc_OasisMilk_D.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'ChoiceLabel3': 6, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0097', 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
                    if !Player.EventQueryEquipWeaponAttachmentActor({'ActorFileName': 'Obj_SheikerWakkaCharm_A_01', 'EquipmentSlot': 0}) {
                        Npc_OasisMilk_D.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'ChoiceLabel3': 6, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0100', 'IsNotOpenIfSkipedMostRecent': False})
                        switch Player.EventQueryEquipWeaponSlotType() {
                          case 0:
                            Event182:
                            Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkYes', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                            Event102:
                            Npc_OasisMilk_D.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'ChoiceLabel3': 6, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0101', 'IsNotOpenIfSkipedMostRecent': False})

                            fork {
                                Npc_OasisTeacher.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0084', 'ChoiceLabel1': 10, 'ChoiceLabel2': 11, 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
                            } {

                                call TalkAnimation_BeforeReset({'Npc_Student': ActorIdentifier(name="Npc_OasisMilk_D")})

                            }


                            call Reset()

                            Npc_OasisTeacher.EventTriggerLookAtObject({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 2, 'ActorName': '', 'ResetArriveTransformFixed': False})
                            Npc_OasisTeacher.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0085', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Npc_OasisTeacher_NightLesson3'})
                          case 1:
                            Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkWeaponShowSword', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                            goto Event102
                          case 2:
                            Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkWeaponShowLSword', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                            goto Event102
                          case 3:
                            Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkWeaponShowSpear', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                            goto Event102
                        }
                    } else
                    if !Player.EventQueryEquipWeaponAttachmentActor({'ActorFileName': 'Obj_SheikerWakkaCharm_A_01', 'EquipmentSlot': 4}) {
                        Npc_OasisMilk_D.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'ChoiceLabel3': 6, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0100', 'IsNotOpenIfSkipedMostRecent': False})
                        goto Event182
                    } else {

                        fork {
                            Npc_OasisTeacher.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0099', 'IsNotOpenIfSkipedMostRecent': False})
                        } {

                            call TalkAnimation_BeforeReset({'Npc_Student': ActorIdentifier(name="Npc_OasisMilk_D")})

                        }


                        call Reset()

                        Npc_OasisTeacher.EventTriggerLookAtObject({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 2, 'ActorName': '', 'ResetArriveTransformFixed': False})
                        Npc_OasisTeacher.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0082', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    }
                }
            } else {

                call oasis008_Camera()


                fork {
                    Npc_OasisTeacher.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0056', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                } {
                    Npc_oasis008.EventTriggerChangeEmotion({'EmotionType': 4, 'IsActFaceOnly': True})
                }


                call NPC2_Set()

                Npc_oasis008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0059', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
                Npc_OasisTeacher.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0062', 'IsNotOpenIfSkipedMostRecent': False})

                fork {
                    Npc_oasis008.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0063', 'ChoiceNumber': 0, 'IsCloseDialog': False, 'EndDialogOption': 1, 'IsNotOpenIfSkipedMostRecent': False})
                    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
                } {
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
                    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkSurprise', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 32})
                }

                if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Item_Cook_R_03', 'Num': 1, 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
                    Npc_oasis008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0069', 'ChoiceNumber': 2, 'IsNotOpenIfSkipedMostRecent': False})
                    if !GameSystemActor.EventQueryTalkChoice2() {
                        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'TalkHandOver', 'ClothWarpMode': 0})
                        PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Actor': 'Item_Cook_R_03', 'Num': -1, 'AttachmentActor': '', 'IsEquipDIrect': False, 'EffectType': 0, 'EffectValue': -1, 'IsSetOnlyEquipIndex': False})
                        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
                        Npc_oasis008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0072', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'TalkYes', 'ClothWarpMode': 0})
                        Npc_oasis008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0087', 'IsNotOpenIfSkipedMostRecent': False})

                        fork {
                            Npc_OasisTeacher.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0093', 'IsNotOpenIfSkipedMostRecent': False})
                        } {

                            call TalkAnimation_BeforeReset({'Npc_Student': ActorIdentifier(name="Npc_oasis008")})

                        }


                        call Reset()

                        Npc_OasisTeacher.EventTriggerLookAtObject({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 2, 'ActorName': '', 'ResetArriveTransformFixed': False})
                        Npc_OasisTeacher.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0073', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Npc_OasisTeacher_NightLesson2'})
                    } else {
                        Event415:

                        fork {
                            Npc_OasisTeacher.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0091', 'IsNotOpenIfSkipedMostRecent': False})
                        } {

                            call TalkAnimation_BeforeReset({'Npc_Student': ActorIdentifier(name="Npc_oasis008")})

                        }


                        call Reset()

                        Npc_OasisTeacher.EventTriggerLookAtObject({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 2, 'ActorName': '', 'ResetArriveTransformFixed': False})
                        Npc_OasisTeacher.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0071', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    }
                } else {
                    Npc_oasis008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0069', 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event415
                }
            }
        } else {

            call oasis021_Camera()


            fork {
                Npc_OasisTeacher.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0055', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            } {
                Npc_oasis021.EventTriggerChangeEmotion({'EmotionType': 4, 'IsActFaceOnly': True})
            }


            call NPC1_Set()


            call CheckFace_Series({'CheckSeries': 'Yiga'})


            call CheckFace_Series({'CheckSeries': 'Rubber'})


            call CheckFace_Series({'CheckSeries': 'Diving'})


            call CheckFace_Series({'CheckSeries': 'LightEmission'})


            call CheckFace_Series({'CheckSeries': 'UnderGround'})


            call CheckFace_Series({'CheckSeries': 'AncientHeroSoul'})


            call CheckFace_Series({'CheckSeries': 'ThunderHelm'})


            call CheckFace_Series({'CheckSeries': 'Fashonable'})


            call CheckFace_Series({'CheckSeries': 'Phantom'})


            call CheckFace_Series({'CheckSeries': 'Awakening'})


            call CheckFace_Series({'CheckSeries': 'Ancient'})


            call CheckFace_Actor({'ArmorName': 'Armor_1125_Head'})


            call CheckFace_Actor({'ArmorName': 'Armor_056_Head'})


            call CheckFace_Actor({'ArmorName': 'Armor_172_Head'})


            call CheckFace_Actor({'ArmorName': 'Armor_177_Head'})


            call CheckFace_Actor({'ArmorName': 'Armor_178_Head'})


            call CheckFace_Actor({'ArmorName': 'Armor_180_Head'})


            call CheckFace_Actor({'ArmorName': 'Armor_176_Head'})

            Npc_oasis021.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0058', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_oasis021.EventNPCTurnToTarget({'FaceControlType': 0, 'PosOffset': [0.0, 0.0, 5.0], 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 1, 'IsConfront': True, 'Target': 2, 'Direction': 0.0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            Npc_oasis021.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0061', 'ASName': 'Talk_Shy', 'IsWaitEnd': True, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_OasisTeacher.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0065', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call Reset()

            Npc_OasisTeacher.EventTriggerLookAtObject({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 2, 'ActorName': '', 'ResetArriveTransformFixed': False})
            Npc_OasisTeacher.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0086', 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Npc_OasisTeacher_NightLesson1_1st'})
        }
    } else {
        Npc_OasisTeacher.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0052', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void LessonNoon_Success() {
    EventCamera.EventTriggerCameraSavePoint()
    if !Player.EventQueryCheckPlayerState({'State': 5}) {

        call Common.AirStartUP_Player()

        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfGerudo_IsAfter_DungeonBossDead_Exp'}) {

            call InitTalk_Quartet_InAir({'Arg_Greeting': 4, 'Arg_Turn': 0, 'Spearker1ActorName': 'Npc_OasisTeacher', 'Spearker1InstanceName': '', 'Spearker2ActorName': 'Npc_oasis016', 'Spearker3ActorName': 'Npc_oasis013', 'Spearker3InstanceName': '', 'Spearker4ActorName': 'Npc_oasis017', 'Spearker4InstanceName': '', 'Actor1': ActorIdentifier(name="Npc_OasisTeacher"), 'Actor2': ActorIdentifier(name="Npc_oasis016", sub_name="OutUG"), 'Actor3': ActorIdentifier(name="Npc_oasis013"), 'Actor4': ActorIdentifier(name="Npc_oasis017"), 'Spearker2InstanceName': 'OutUG'})

        } else {

            call InitTalk_Quartet_InAir({'Arg_Greeting': 4, 'Arg_Turn': 0, 'Actor1': ActorIdentifier(name="Npc_OasisTeacher"), 'Actor2': ActorIdentifier(name="Npc_oasis016"), 'Actor3': ActorIdentifier(name="Npc_oasis013"), 'Actor4': ActorIdentifier(name="Npc_oasis017"), 'Spearker1ActorName': 'Npc_OasisTeacher', 'Spearker1InstanceName': '', 'Spearker2ActorName': 'Npc_oasis016', 'Spearker2InstanceName': '', 'Spearker3ActorName': 'Npc_oasis013', 'Spearker3InstanceName': '', 'Spearker4ActorName': 'Npc_oasis017', 'Spearker4InstanceName': ''})

        }
        Event338:
        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0})

        call Teacher_Noon_Camera()

        goto Event70
    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfGerudo_IsAfter_DungeonBossDead_Exp'}) {

        call InitTalk.InitTalk_Quartet({'Arg_Greeting': 4, 'Arg_Turn': 0, 'Spearker1ActorName': 'Npc_OasisTeacher', 'Spearker1InstanceName': '', 'Spearker2ActorName': 'Npc_oasis016', 'Spearker3ActorName': 'Npc_oasis013', 'Spearker3InstanceName': '', 'Spearker4ActorName': 'Npc_oasis017', 'Spearker4InstanceName': '', 'Actor1': ActorIdentifier(name="Npc_OasisTeacher"), 'Actor2': ActorIdentifier(name="Npc_oasis016", sub_name="OutUG"), 'Actor3': ActorIdentifier(name="Npc_oasis013"), 'Actor4': ActorIdentifier(name="Npc_oasis017"), 'Spearker2InstanceName': 'OutUG'})

    } else {

        call InitTalk.InitTalk_Quartet({'Arg_Greeting': 4, 'Arg_Turn': 0, 'Actor1': ActorIdentifier(name="Npc_OasisTeacher"), 'Actor2': ActorIdentifier(name="Npc_oasis016"), 'Actor3': ActorIdentifier(name="Npc_oasis013"), 'Actor4': ActorIdentifier(name="Npc_oasis017"), 'Spearker1ActorName': 'Npc_OasisTeacher', 'Spearker1InstanceName': '', 'Spearker2ActorName': 'Npc_oasis016', 'Spearker2InstanceName': '', 'Spearker3ActorName': 'Npc_oasis013', 'Spearker3InstanceName': '', 'Spearker4ActorName': 'Npc_oasis017', 'Spearker4InstanceName': ''})

    }
    goto Event338
}

void Not_Lesson() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_OasisTeacher_ListenClass'}) {

        call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

        if !Npc_OasisTeacher.EventQueryIsOnRecentTalkFlag() {
            switch Npc_OasisTeacher.EventQueryAIScheduleCheckActorAction14() {
              case [0, 1]:
                Npc_OasisTeacher.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0013', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
              case [2, 3, 6, 7, 8, 9, 10, 11, 12, 13]:
                switch EventWorldManagerController.EventQueryTimeDivision() {
                  case [0, 1, 6, 7]:
                    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_OasisTeacher_NightLesson1', 'Index': -1})
                    && !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_OasisTeacher_NightLesson2', 'Index': -1})
                    && !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_OasisTeacher_NightLesson3', 'Index': -1}) {
                        Npc_OasisTeacher.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0018', 'IsNotOpenIfSkipedMostRecent': False})
                    } else {
                        Npc_OasisTeacher.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0011', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    }
                  case [2, 3, 4, 5]:
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_OasisTeacher_NoonLessonClear'}) {
                        Npc_OasisTeacher.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0017', 'IsNotOpenIfSkipedMostRecent': False})
                    } else {
                        Npc_OasisTeacher.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0005', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    }
                }
              case [4, 5]:
                Npc_OasisTeacher.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0014', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
        } else {
            Npc_OasisTeacher.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0012', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
    } else {
        goto Event733
    }
}

void Reset() {
    GameSystemActor.EventEventFadeOut({'Length': 1, 'Color': 0, 'IsWaitEnd': True, 'IsNoPlayAnime': False})

    fork {
        Npc_oasis021.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': '', 'ActionType': 0, 'AnchorType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
        Npc_oasis021.EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS({'Value': False})
        Npc_oasis021.EventTriggerNPCChangePosture({'Posture': 2, 'IsPlayCurrentAS': True})
        Npc_oasis021.EventPlayAS({'ASName': 'Act_SitChair_Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        Npc_oasis008.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': '', 'ActionType': 0, 'AnchorType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
        Npc_oasis008.EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS({'Value': False})
        Npc_oasis008.EventTriggerNPCChangePosture({'Posture': 2, 'IsPlayCurrentAS': True})
        Npc_oasis008.EventPlayAS({'ASName': 'Act_SitChair_Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        Npc_OasisMilk_D.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': '', 'ActionType': 0, 'AnchorType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
        Npc_OasisMilk_D.EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS({'Value': False})
        Npc_OasisMilk_D.EventTriggerNPCChangePosture({'Posture': 2, 'IsPlayCurrentAS': True})
        Npc_OasisMilk_D.EventPlayAS({'ASName': 'Act_SitChair_Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    }

    Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ASCommand': 'Wait', 'IsAllSlot': True, 'ClothWarpMode': 0})
    Player.EventTriggerPlayerLookAtObject({'Target': 3, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Npc_OasisTeacher', 'TurnFaceControlType': 1})

    call Teacher_Night_Camera()

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    GameSystemActor.EventEventFadeIn({'Length': 1, 'Color': 0, 'IsWaitEnd': True, 'IsNoPlayAnime': False})
}

void NPC1_Set() {
    GameSystemActor.EventEventFadeOut({'Length': 1, 'Color': 0, 'IsWaitEnd': True, 'IsNoPlayAnime': False})
    Player.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'Npc_OasisTeacher_PlayerLesson', 'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True})
    Npc_oasis021.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 315.0, 'Position': [-3858.135009765625, 137.49530029296875, 2988.31396484375]})
    Npc_oasis021.EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS({'Value': True})
    Npc_oasis021.EventTriggerNPCChangePosture({'Posture': 0, 'IsPlayCurrentAS': False})
    Npc_oasis021.EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    Npc_oasis021.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': True})
    Player.EventTriggerPlayerLookAtObject({'Target': 3, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Npc_oasis021', 'TurnFaceControlType': 1})
    Event516:
    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Talk', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'PosVector': [-3860.830078125, 138.74000549316406, 2987.25], 'AtVector': [-3860.139892578125, 138.77000427246094, 2987.969970703125], 'TargetFovy': 50.0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    GameSystemActor.EventEventFadeIn({'Length': 1, 'Color': 0, 'IsWaitEnd': True, 'IsNoPlayAnime': False})
}

void NPC2_Set() {
    GameSystemActor.EventEventFadeOut({'Length': 1, 'Color': 0, 'IsWaitEnd': True, 'IsNoPlayAnime': False})
    Player.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'Npc_OasisTeacher_PlayerLesson', 'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True})
    Npc_oasis008.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 315.0, 'Position': [-3858.135009765625, 137.49530029296875, 2988.31396484375]})
    Npc_oasis008.EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS({'Value': True})
    Npc_oasis008.EventTriggerNPCChangePosture({'Posture': 0, 'IsPlayCurrentAS': False})
    Npc_oasis008.EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    Npc_oasis008.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': True})
    Player.EventTriggerPlayerLookAtObject({'Target': 3, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1, 'ActorName': 'Npc_oasis008'})
    goto Event516
}

void NPC3_Set() {
    GameSystemActor.EventEventFadeOut({'Length': 1, 'Color': 0, 'IsWaitEnd': True, 'IsNoPlayAnime': False})
    Player.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'Npc_OasisTeacher_PlayerLesson', 'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True})
    Npc_OasisMilk_D.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 315.0, 'Position': [-3858.135009765625, 137.49530029296875, 2988.31396484375]})
    Npc_OasisMilk_D.EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS({'Value': True})
    Npc_OasisMilk_D.EventTriggerNPCChangePosture({'Posture': 0, 'IsPlayCurrentAS': False})
    Npc_OasisMilk_D.EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    Npc_OasisMilk_D.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': True})
    Player.EventTriggerPlayerLookAtObject({'Target': 3, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1, 'ActorName': 'Npc_OasisMilk_D'})
    goto Event516
}

void Children_Camera() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 0, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': '', 'MoveTime': 10, 'Actor1ActorName': 'Npc_oasis017', 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVector': [-1.1699999570846558, 1.840000033378601, 6.230000019073486], 'AtVector': [-1.2999999523162842, 1.7100000381469727, 4.070000171661377], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void Teacher_Noon_Camera() {

    call Teacher_Noon_Camera_Main({'MoveTime': 10})

}

void OasisMilk_D_Camera() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'AtVector': [0.0, 1.5, 0.0], 'Actor1ActorName': 'Npc_OasisMilk_D', 'Actor1InstanceName': '', 'MoveTime': 30, 'PosVector': [0.0, 1.75, 1.5], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void oasis008_Camera() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'AtVector': [0.0, 1.5, 0.0], 'Actor1InstanceName': '', 'Actor1ActorName': 'Npc_oasis008', 'MoveTime': 30, 'PosVector': [0.0, 1.75, 1.5], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void oasis021_Camera() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'AtVector': [0.0, 1.5, 0.0], 'Actor1InstanceName': '', 'Actor1ActorName': 'Npc_oasis021', 'MoveTime': 30, 'PosVector': [0.0, 1.75, 1.5], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void Teacher_Night_Camera() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-3859.7099609375, 139.88999938964844, 2993.64990234375], 'AtVector': [-3859.909912109375, 139.14999389648438, 2990.6298828125], 'TargetFovy': 50.0, 'MoveTime': 30, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void OasisTeacher_oasis016() {
    Npc_OasisTeacher.EventTriggerRequestLookSpeaker()
    Npc_oasis016[OasisTeacher_oasis016(Self)].EventTriggerRequestLookSpeaker()
    Npc_oasis017.EventTriggerRequestLookSpeaker()
    Npc_oasis013.EventTriggerRequestLookSpeaker()
    Npc_oasis011.EventTriggerRequestLookSpeaker()
    Npc_OasisTeacher.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Act_TeacherWait'})
    Npc_oasis016[OasisTeacher_oasis016(Self)].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    Npc_oasis017.EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    Npc_oasis013.EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    Npc_oasis011.EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    Npc_OasisTeacher.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceLabel1': 50, 'ChoiceLabel2': 51, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0030', 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'EightHeroStatues_IsCompleted_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HeroStatues_BallEnterArea3', 'Index': -1}) {
            Event234:
            Npc_OasisTeacher.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceLabel1': 50, 'ChoiceLabel2': 51, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0111', 'IsNotOpenIfSkipedMostRecent': False})

            call Children_Camera()

            Npc_oasis017.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceLabel1': 50, 'ChoiceLabel2': 51, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0112', 'IsNotOpenIfSkipedMostRecent': False})
            Npc_oasis013.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceLabel1': 50, 'ChoiceLabel2': 51, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0113', 'IsNotOpenIfSkipedMostRecent': False})
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfGerudo_IsCompleted_Exp'}) {
                switch GameSystemActor.EventQueryRandomChoice8() {
                  case [0, 1]:
                    Npc_oasis016[OasisTeacher_oasis016(Self)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceLabel1': 50, 'ChoiceLabel2': 51, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0120', 'IsNotOpenIfSkipedMostRecent': False})
                    Event235:
                    Npc_oasis017.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceLabel1': 50, 'ChoiceLabel2': 51, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0042', 'IsNotOpenIfSkipedMostRecent': False})

                    call Teacher_Noon_Camera()

                    Npc_OasisTeacher.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceLabel1': 50, 'ChoiceLabel2': 51, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0115', 'IsNotOpenIfSkipedMostRecent': False})
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_OasisTeacher_NoonLesson2Clear', 'Index': -1, 'Value': True})
                    Event527:

                    call LessonNoon_Success_PreActorEnd()

                  case [2, 4]:
                    Event367:
                    Npc_oasis016[OasisTeacher_oasis016(Self)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceLabel1': 50, 'ChoiceLabel2': 51, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0114', 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event235
                  case [3, 7]:
                    Event373:
                    Npc_oasis016[OasisTeacher_oasis016(Self)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceLabel1': 50, 'ChoiceLabel2': 51, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0119', 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event235
                  case 5:
                    Event371:
                    Npc_oasis016[OasisTeacher_oasis016(Self)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceLabel1': 50, 'ChoiceLabel2': 51, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0117', 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event235
                  case 6:
                    Event372:
                    Npc_oasis016[OasisTeacher_oasis016(Self)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceLabel1': 50, 'ChoiceLabel2': 51, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0118', 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event235
                }
            } else
            switch GameSystemActor.EventQueryRandomChoice4() {
              case 0:
                goto Event367
              case 1:
                goto Event371
              case 2:
                goto Event372
              case 3:
                goto Event373
            }
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HeroStatues_BallEnterArea4', 'Index': -1}) {
            goto Event234
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HeroStatues_BallEnterArea5', 'Index': -1}) {
            goto Event234
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HeroStatues_BallEnterArea6', 'Index': -1}) {
            goto Event234
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HeroStatues_BallEnterArea7', 'Index': -1}) {
            goto Event234
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_OasisTeacher_NoonLesson2Clear', 'Index': -1}) {
            Npc_OasisTeacher.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceLabel1': 50, 'ChoiceLabel2': 51, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0116', 'IsNotOpenIfSkipedMostRecent': False})
            Npc_OasisTeacher.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceLabel1': 50, 'ChoiceLabel2': 51, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0130', 'IsNotOpenIfSkipedMostRecent': False})
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 0, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': '', 'MoveTime': 20, 'Actor1ActorName': 'Npc_oasis017', 'PosVector': [-0.6000000238418579, 1.4299999475479126, 2.4000000953674316], 'AtVector': [0.33000001311302185, 1.1399999856948853, -1.4199999570846558], 'TargetFovy': 49.38999938964844, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            Npc_oasis017.EventTriggerLookAtObject({'WorldPos': [-3859.3349609375, 137.7711944580078, 2989.43505859375], 'Target': 0, 'OffsetBase': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ResetArriveTransformFixed': False})
            Npc_oasis017.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceLabel1': 50, 'ChoiceLabel2': 51, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0121', 'IsNotOpenIfSkipedMostRecent': False})

            call Teacher_Noon_Camera_Ret()

            Npc_OasisTeacher.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceLabel1': 50, 'ChoiceLabel2': 51, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0122', 'IsNotOpenIfSkipedMostRecent': False})
            Npc_OasisTeacher.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceLabel1': 50, 'ChoiceLabel2': 51, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0123', 'IsNotOpenIfSkipedMostRecent': False})
            Npc_oasis017.EventTriggerRequestLookSpeaker()
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 0, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': '', 'MoveTime': 20, 'Actor1ActorName': 'Npc_oasis013', 'PosVector': [0.009999999776482582, 1.2699999809265137, 2.7200000286102295], 'AtVector': [0.03999999910593033, 1.059999942779541, -2.5], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            Npc_oasis013.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceLabel1': 50, 'ChoiceLabel2': 51, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0124', 'IsNotOpenIfSkipedMostRecent': False})

            call Teacher_Noon_Camera_Ret()

            Npc_OasisTeacher.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceLabel1': 50, 'ChoiceLabel2': 51, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0125', 'IsNotOpenIfSkipedMostRecent': False})
            Npc_OasisTeacher.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceLabel1': 50, 'ChoiceLabel2': 51, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0126', 'IsNotOpenIfSkipedMostRecent': False})
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 0, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 20, 'PosVector': [0.27000001072883606, 1.5499999523162842, 2.950000047683716], 'AtVector': [-0.23000000417232513, 0.5400000214576721, -2.9000000953674316], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False, 'Actor1ActorName': 'ActorName', 'Actor1InstanceName': 'InstanceName'})
            Npc_oasis016[OasisTeacher_oasis016(Self)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceLabel1': 50, 'ChoiceLabel2': 51, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0127', 'IsNotOpenIfSkipedMostRecent': False})

            call Teacher_Noon_Camera_Ret()

            Npc_OasisTeacher.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceLabel1': 50, 'ChoiceLabel2': 51, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0128', 'IsNotOpenIfSkipedMostRecent': False})
            Npc_OasisTeacher.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceLabel1': 50, 'ChoiceLabel2': 51, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0129', 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Npc_OasisTeacher_NoonLessonClear'})
            goto Event527
        } else {
            Npc_OasisTeacher.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceLabel1': 50, 'ChoiceLabel2': 51, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0036', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call Children_Camera()

            Npc_oasis017.EventTriggerLookAtObject({'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'ResetArriveTransformFixed': False, 'ActorName': 'ActorName', 'InstanceName': 'InstanceName'})
            Npc_oasis017.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceLabel1': 50, 'ChoiceLabel2': 51, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0043', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_oasis017.EventTriggerRequestLookSpeaker()
            Npc_oasis013.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceLabel1': 50, 'ChoiceLabel2': 51, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0044', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_oasis016[OasisTeacher_oasis016(Self)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceLabel1': 50, 'ChoiceLabel2': 51, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0045', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call Teacher_Noon_Camera_Ret()

            Npc_OasisTeacher.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceLabel1': 50, 'ChoiceLabel2': 51, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0108', 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_OasisTeacher_NoonLesson2Clear', 'Index': -1, 'Value': True})
            goto Event527
        }
    } else
    if !GameSystemActor.EventQueryRandomChoice2() {
        Npc_OasisTeacher.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceLabel1': 50, 'ChoiceLabel2': 51, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0036', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

        call Children_Camera()

        Npc_oasis017.EventTriggerLookAtObject({'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'ActorName': 'ActorName', 'InstanceName': 'InstanceName', 'ResetArriveTransformFixed': False})
        Npc_oasis017.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceLabel1': 50, 'ChoiceLabel2': 51, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0043', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_oasis017.EventTriggerRequestLookSpeaker()
        Npc_oasis013.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceLabel1': 50, 'ChoiceLabel2': 51, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0044', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_oasis016[OasisTeacher_oasis016(Self)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceLabel1': 50, 'ChoiceLabel2': 51, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0045', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Event325:

        call Teacher_Noon_Camera_Ret()

        Npc_OasisTeacher.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceLabel1': 50, 'ChoiceLabel2': 51, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0108', 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_OasisTeacher_NoonLesson2Clear', 'Index': -1, 'Value': True})
        goto Event527
    } else {
        Npc_OasisTeacher.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceLabel1': 50, 'ChoiceLabel2': 51, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0109', 'IsNotOpenIfSkipedMostRecent': False})

        call Children_Camera()

        Npc_oasis017.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceLabel1': 50, 'ChoiceLabel2': 51, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0038', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_oasis013.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceLabel1': 50, 'ChoiceLabel2': 51, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0039', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_oasis016[OasisTeacher_oasis016(Self)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceLabel1': 50, 'ChoiceLabel2': 51, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0040', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_oasis013.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceLabel1': 50, 'ChoiceLabel2': 51, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0041', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_oasis017.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceLabel1': 50, 'ChoiceLabel2': 51, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0110', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event325
    }
}

void oasis016() {

    call OasisTeacher_oasis016({'ActorName': 'Npc_oasis016', 'Self': ActorIdentifier(name="Npc_oasis016"), 'InstanceName': ''})

}

void oasis016_OutUG() {

    call OasisTeacher_oasis016({'Self': ActorIdentifier(name="Npc_oasis016", sub_name="OutUG"), 'ActorName': 'Npc_oasis016', 'InstanceName': 'OutUG'})

}

void Teacher_Noon_Camera_Ret() {

    call Teacher_Noon_Camera_Main({'MoveTime': 0})

}

void Teacher_Noon_Camera_Main() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 0, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 'MoveTime', 'CameraCollisionLookAtActor': 0, 'AtVectorSetType': 0, 'PosVector': [-3853.739990234375, 139.91000366210938, 2991.239990234375], 'AtVector': [-3857.60009765625, 139.39999389648438, 2987.39990234375], 'TargetFovy': 40.0, 'Actor1ActorName': '', 'PosVectorSetType': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void CheckFace_Series() {
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckUpper': False, 'CheckLower': False, 'CheckSeries': 'CheckSeries'}) {

        call FaceOK()

    }
}

void FaceOK() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_OasisTeacher_NightLesson1_1st'}) {
        Event139:
        Npc_oasis021.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0066', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

        fork {

            call TalkAnimation_BeforeReset({'Npc_Student': ActorIdentifier(name="Npc_oasis021")})

        } {
            Npc_OasisTeacher.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0060', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }


        call Reset()

        Npc_OasisTeacher.EventTriggerLookAtObject({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'ActorName': 'Npc_oasis021', 'ResetArriveTransformFixed': False})
        Npc_OasisTeacher.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0067', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_OasisTeacher.EventTriggerLookAtObject({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 2, 'ActorName': '', 'ResetArriveTransformFixed': False})
        Npc_OasisTeacher.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0068', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_OasisTeacher_NightLesson1', 'Value': True, 'Index': -1})
        EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
    } else {
        Npc_oasis021.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0058', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_oasis021.EventNPCTurnToTarget({'FaceControlType': 0, 'PosOffset': [0.0, 0.0, 5.0], 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 1, 'IsConfront': True, 'Target': 2, 'Direction': 0.0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_oasis021.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0061', 'ASName': 'Talk_Shy', 'IsWaitEnd': True, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_OasisTeacher.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_OasisTeacher:talk0092', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_oasis021.EventWait({'IsWaitEnd': True, 'Frames': 60})
        Npc_oasis021.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
        Npc_oasis021.EventPlayAS({'IsWaitEnd': False, 'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        Npc_oasis021.EventWait({'IsWaitEnd': True, 'Frames': 15})
        Npc_oasis021.EventNPCTurnToTarget({'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 1, 'IsConfront': True, 'Target': 2, 'Direction': 0.0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'FaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_oasis021.EventWait({'IsWaitEnd': True, 'Frames': 45})
        goto Event139
    }
}

void CheckFace_Actor() {
    if !Player.EventQueryIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'ArmorName'}) {

        call FaceOK()

    }
}

void ComeOutStudent() {
    goto Event301
}

void TalkAnimation_BeforeReset() {
    GameSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})
    Npc_OasisMilk_D[TalkAnimation_BeforeReset(Npc_Student)].EventTriggerChangeEmotion({'IsActFaceOnly': True, 'EmotionType': 0})
    Npc_OasisMilk_D[TalkAnimation_BeforeReset(Npc_Student)].EventPlayAS({'ASName': 'TalkWait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    Npc_OasisMilk_D[TalkAnimation_BeforeReset(Npc_Student)].EventTriggerLookAtObject({'InstanceName': '', 'ActorName': 'Npc_OasisTeacher', 'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    Player.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_OasisTeacher', 'InstanceName': '', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
}

void InitTalk_Quartet_InAir() {
    Npc_EventStarter[InitTalk_Quartet_InAir(Actor1)].EventTriggerBecomeSpeaker()

    fork {
        Npc_EventStarter[InitTalk_Quartet_InAir(Actor1)].EventTriggerSetRecentTalkFlag({'value': True, 'IsReflectWhenSleep': False})
        Npc_EventStarter[InitTalk_Quartet_InAir(Actor1)].EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': False})
        if !Npc_EventStarter[InitTalk_Quartet_InAir(Actor1)].EventQueryNeedEquipWeapon() {
            Npc_EventStarter[InitTalk_Quartet_InAir(Actor1)].EventUnequipWeapon({'IsWaitEnd': True})
        }
        if !Npc_EventStarter[InitTalk_Quartet_InAir(Actor1)].EventQueryHasControllerSet() {
            Npc_EventStarter[InitTalk_Quartet_InAir(Actor1)].EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'TurnType': 'Arg_Turn', 'GreetType': 'Arg_Greeting'})
        }
    } {
        Npc_EventStarter[InitTalk_Quartet_InAir(Actor2)].EventTriggerSetRecentTalkFlag({'value': True, 'IsReflectWhenSleep': False})
        Npc_EventStarter[InitTalk_Quartet_InAir(Actor2)].EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': False})
        if !Npc_EventStarter[InitTalk_Quartet_InAir(Actor2)].EventQueryNeedEquipWeapon() {
            Npc_EventStarter[InitTalk_Quartet_InAir(Actor2)].EventUnequipWeapon({'IsWaitEnd': True})
        }
        if !Npc_EventStarter[InitTalk_Quartet_InAir(Actor2)].EventQueryHasControllerSet() {
            Npc_EventStarter[InitTalk_Quartet_InAir(Actor2)].EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'TurnType': 'Arg_Turn', 'GreetType': 'Arg_Greeting'})
        }
    } {
        Npc_EventStarter[InitTalk_Quartet_InAir(Actor3)].EventTriggerSetRecentTalkFlag({'value': True, 'IsReflectWhenSleep': False})
        Npc_EventStarter[InitTalk_Quartet_InAir(Actor3)].EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': False})
        if !Npc_EventStarter[InitTalk_Quartet_InAir(Actor3)].EventQueryNeedEquipWeapon() {
            Npc_EventStarter[InitTalk_Quartet_InAir(Actor3)].EventUnequipWeapon({'IsWaitEnd': True})
        }
        if !Npc_EventStarter[InitTalk_Quartet_InAir(Actor3)].EventQueryHasControllerSet() {
            Npc_EventStarter[InitTalk_Quartet_InAir(Actor3)].EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'TurnType': 'Arg_Turn', 'GreetType': 'Arg_Greeting'})
        }
    } {
        Npc_EventStarter[InitTalk_Quartet_InAir(Actor4)].EventTriggerSetRecentTalkFlag({'value': True, 'IsReflectWhenSleep': False})
        Npc_EventStarter[InitTalk_Quartet_InAir(Actor4)].EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': False})
        if !Npc_EventStarter[InitTalk_Quartet_InAir(Actor4)].EventQueryNeedEquipWeapon() {
            Npc_EventStarter[InitTalk_Quartet_InAir(Actor4)].EventUnequipWeapon({'IsWaitEnd': True})
        }
        if !Npc_EventStarter[InitTalk_Quartet_InAir(Actor4)].EventQueryHasControllerSet() {
            Npc_EventStarter[InitTalk_Quartet_InAir(Actor4)].EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'TurnType': 'Arg_Turn', 'GreetType': 'Arg_Greeting'})
        }
    } {
        SoundSystemActor.EventSoundChangeListenerPreset({'ListenerPresetName': 'Talk', 'FadeTime': 0.0})
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': '会話中', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
        EventCamera.EventSendMultiEventTalkMessageToPlayerCamera({'Speaker1SetType': 1, 'Speaker2SetType': 1, 'Speaker3SetType': 1, 'Speaker4SetType': 1, 'IsWaitEnd': False, 'Spearker1ActorName': 'Spearker1ActorName', 'Spearker1InstanceName': 'Spearker1InstanceName', 'Spearker2ActorName': 'Spearker2ActorName', 'Spearker2InstanceName': 'Spearker2InstanceName', 'Spearker3ActorName': 'Spearker3ActorName', 'Spearker3InstanceName': 'Spearker3InstanceName', 'Spearker4ActorName': 'Spearker4ActorName', 'Spearker4InstanceName': 'Spearker4InstanceName'})
    }

}

void ComeOutTalkStudent() {
    goto Event301
}

void InitTalk_Quartet_NoCamera() {
    Npc_EventStarter[InitTalk_Quartet_NoCamera(Actor1)].EventTriggerBecomeSpeaker()

    fork {
        Npc_EventStarter[InitTalk_Quartet_NoCamera(Actor1)].EventTriggerSetRecentTalkFlag({'value': True, 'IsReflectWhenSleep': False})
        Npc_EventStarter[InitTalk_Quartet_NoCamera(Actor1)].EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': False})
        if !Npc_EventStarter[InitTalk_Quartet_NoCamera(Actor1)].EventQueryNeedEquipWeapon() {
            Npc_EventStarter[InitTalk_Quartet_NoCamera(Actor1)].EventUnequipWeapon({'IsWaitEnd': True})
        }
        if !Npc_EventStarter[InitTalk_Quartet_NoCamera(Actor1)].EventQueryHasControllerSet() {
            Npc_EventStarter[InitTalk_Quartet_NoCamera(Actor1)].EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'TurnType': 'Arg_Turn', 'GreetType': 'Arg_Greeting'})
        }
    } {
        Npc_EventStarter[InitTalk_Quartet_NoCamera(Actor2)].EventTriggerSetRecentTalkFlag({'value': True, 'IsReflectWhenSleep': False})
        Npc_EventStarter[InitTalk_Quartet_NoCamera(Actor2)].EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': False})
        if !Npc_EventStarter[InitTalk_Quartet_NoCamera(Actor2)].EventQueryNeedEquipWeapon() {
            Npc_EventStarter[InitTalk_Quartet_NoCamera(Actor2)].EventUnequipWeapon({'IsWaitEnd': True})
        }
        if !Npc_EventStarter[InitTalk_Quartet_NoCamera(Actor2)].EventQueryHasControllerSet() {
            Npc_EventStarter[InitTalk_Quartet_NoCamera(Actor2)].EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'TurnType': 'Arg_Turn', 'GreetType': 'Arg_Greeting'})
        }
    } {
        Npc_EventStarter[InitTalk_Quartet_NoCamera(Actor3)].EventTriggerSetRecentTalkFlag({'value': True, 'IsReflectWhenSleep': False})
        Npc_EventStarter[InitTalk_Quartet_NoCamera(Actor3)].EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': False})
        if !Npc_EventStarter[InitTalk_Quartet_NoCamera(Actor3)].EventQueryNeedEquipWeapon() {
            Npc_EventStarter[InitTalk_Quartet_NoCamera(Actor3)].EventUnequipWeapon({'IsWaitEnd': True})
        }
        if !Npc_EventStarter[InitTalk_Quartet_NoCamera(Actor3)].EventQueryHasControllerSet() {
            Npc_EventStarter[InitTalk_Quartet_NoCamera(Actor3)].EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'TurnType': 'Arg_Turn', 'GreetType': 'Arg_Greeting'})
        }
    } {
        Npc_EventStarter[InitTalk_Quartet_NoCamera(Actor4)].EventTriggerSetRecentTalkFlag({'value': True, 'IsReflectWhenSleep': False})
        Npc_EventStarter[InitTalk_Quartet_NoCamera(Actor4)].EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': False})
        if !Npc_EventStarter[InitTalk_Quartet_NoCamera(Actor4)].EventQueryNeedEquipWeapon() {
            Npc_EventStarter[InitTalk_Quartet_NoCamera(Actor4)].EventUnequipWeapon({'IsWaitEnd': True})
        }
        if !Npc_EventStarter[InitTalk_Quartet_NoCamera(Actor4)].EventQueryHasControllerSet() {
            Npc_EventStarter[InitTalk_Quartet_NoCamera(Actor4)].EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'TurnType': 'Arg_Turn', 'GreetType': 'Arg_Greeting'})
        }
    } {
        Player.EventPlayerUnequip({'IsWaitEnd': True})
    } {
        SoundSystemActor.EventSoundChangeListenerPreset({'ListenerPresetName': 'Talk', 'FadeTime': 0.0})
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': '会話中', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
    }

}

void LessonNoon_Success_ActorEnd() {
    Player.EventTriggerParticipateEvent()
    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Wait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    GameSystemActor.EventEventFadeIn({'Length': 1, 'Color': 0, 'IsWaitEnd': True, 'IsNoPlayAnime': False})
    EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
}

void LessonNoon_Success_PreActorEnd() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_OasisTeacher_NoonLesson_DisturbingActor', 'Index': -1}) {
        GameSystemActor.EventEventFadeOut({'Length': 1, 'Color': 0, 'IsWaitEnd': True, 'IsNoPlayAnime': False})
        EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'EnableCameraAlpha': False, 'ReviseMode': 2})
        EventSystemActor.EventTransition({'EventName': 'LessonNoon_Success_ActorEnd', 'FadeInTypeEventEnd': 2, 'IsWaitEnd': True, 'SpecialEventActionType': 1})
    } else {
        EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
    }
}
