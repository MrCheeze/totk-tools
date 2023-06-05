-------- EventFlow: HorseInnChallenge001 --------

Actor: AsbObj_CaravanWagon_A_02[HorseInn001_BrokenCarriage]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventTriggerPushPauseMask', 'EventTriggerErasePauseMask', 'EventTriggerCombinedActorDeleteAll']
queries: ['EventQueryConnectedByBondConstraint', 'EventQueryWarpToSafeSpaceWithCombinedActor']
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 3, 'IsBindNearestActor': False}

Actor: Npc_HyruleWestHatago001[HorseInnChallenge]
entrypoint: None()
actions: ['EventTalk', 'EventNPCTurnToTarget', 'EventTriggerBalloonMessage', 'EventDisableRecentTalkFlag', 'EventAIScheduleWarpToAnchor', 'EventTriggerSetHaveTalked', 'EventTriggerBecomeSpeaker', 'EventTriggerChangeEmotion', 'EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule', 'EventPlayAS']
queries: ['EventQueryIsOnRecentTalkFlag', 'EventQueryOwningObjectPlayerInterference', 'EventQueryHaveTalked', 'EventQueryIsIndoor']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeIn', 'EventEventFadeOut', 'EventTriggerSetLastRiddenAnimalToHorseOfHorseInnChallenge001', 'EventTriggerRemoveCurrentOwnedHorse', 'EventTriggerRequestDeleteLastRiddenAnimal', 'EventWait', 'EventTriggerRequestChangeHorseTack', 'EventTriggerRequestAutoSave', 'EventResetGimmick', 'EventTraverseAroundAndWaitCreateActor', 'EventClearActorsAroundAnchor']
queries: ['EventQueryTalkChoice2', 'EventQueryTalkChoice3', 'EventQueryCheckIsWildHorseAssociated', 'EventQueryIsLastRiddenAnimalOwnedHorse', 'EventQueryIsHorseTackEquipped', 'EventQueryCheckIsOwnedHorseAssociated']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: []
queries: ['EventQueryHaveTalked']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventRequestQuit', 'EventWait', 'EventTransition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventSendEventTalkMessageToPlayerCamera', 'EventMoveToTargetPosCamera', 'EventTriggerCameraSavePoint', 'EventMoveCameraToSavePoint', 'EventChangeTemporarilyToPlayerCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventBustShotCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventPlayerWarpToTargetActor', 'EventPlayerHorseGetOff', 'EventPlayerTurnAndLook', 'EventPlayerClimbOff', 'EventPlayerUnequip', 'EventPlayerTalk', 'EventPlayerWarpToStarterLinkAnchor', 'EventPlayerWarpToNearAnchorWithRidableActor']
queries: ['EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: LastRiddenAnimal_ForEvent
entrypoint: None()
actions: ['EventHorseWarpToNearAnchor', 'EventWaitState', 'EventHorseDisconnectCouplerFrom', 'EventResetChemicalStateNeutral']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryTimeDivision', 'EventQueryWeather']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: DummyHorse
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventGoOffstageForUser']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False, 'EventMemberCreateMethod': 4}

Actor: AsbObj_CaravanWagon_A_02[HorseInn001_FinishedCarriage]
entrypoint: None()
actions: ['EventTriggerPushPauseMask', 'EventTriggerErasePauseMask', 'EventGoOffstageForUser']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 3, 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundRequestDucking', 'EventSoundChangeListenerPreset']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: AsbObj_WoodWheel_A_02[HorseInn001_C]
entrypoint: None()
actions: ['EventGoOffstageForUser']
queries: []
params: {'EventMemberCreateMethod': 3, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: AsbObj_WoodWheel_A_02[HorseInn001_D]
entrypoint: None()
actions: ['EventGoOffstageForUser']
queries: []
params: {'EventMemberCreateMethod': 3, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: AsbObj_WoodWheel_A_02[HorseInn001_A_KW]
entrypoint: None()
actions: ['EventGoOffstageForUser']
queries: []
params: {'EventMemberCreateMethod': 3, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: AsbObj_WoodWheel_A_02[HorseInn001_B_KW]
entrypoint: None()
actions: ['EventGoOffstageForUser']
queries: []
params: {'EventMemberCreateMethod': 3, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Harness_Coupler[HorseInn001_FinishedCarriage]
entrypoint: None()
actions: ['EventGoOffstageForUser']
queries: []
params: {'EventMemberCreateMethod': 3, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_AncientDoctor[InitTalk_HorseInnChallenge001_MoveWagon(Self)]
entrypoint: InitTalk_HorseInnChallenge001_MoveWagon(Self)
actions: ['EventTriggerSetHaveTalked', 'EventTriggerSetRecentTalkFlag', 'EventUnequipWeapon', 'EventNPCTurnToObjectGreeting']
queries: ['EventQueryNeedEquipWeapon', 'EventQueryHasControllerSet']
params: None

void Ready_Talk() {

    call WagonPause()


    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 3})

    if !Npc_EventStarter.EventQueryHaveTalked() {
        Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk1001', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 2, 'ChoiceLabel1': 12, 'ChoiceLabel2': 14, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Event75:
        if !GameSystemActor.EventQueryTalkChoice2() {
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HorseInnChallenge001_Talk01', 'Index': -1}) {
                Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk1101', 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk1002', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }

            call CarriageCamera()

            Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk1044', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call CarriageCameraReset()

            Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk1003', 'ChoiceLabel2': 15, 'ChoiceLabel3': 16, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 3, 'ChoiceLabel1': 13, 'ChangeMstxtForActor': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call Choices()

            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HorseInnChallenge001_ReadyTrue', 'Index': -1, 'Value': True})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HorseInnChallenge001_BanMagic', 'Value': True, 'Index': -1})
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'HorseInnChallenge001', 'IsIgnoreCompletedChallenge': False, 'StepName': 'Repair', 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
            Npc_HyruleWestHatago001[HorseInnChallenge].EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule()

            call WagonPauseReset()

        } else {
            Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk1024', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call WagonPauseReset()

        }
    } else
    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case [0, 1]:
        Event146:
        switch EventWorldManagerController.EventQueryTimeDivision() {
          case 0:
            Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk1068', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 12, 'ChoiceLabel2': 14, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event75
          case [1, 2, 3]:
            Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 12, 'ChoiceLabel2': 14, 'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk1085', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event75
          case [4, 5]:
            Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 12, 'ChoiceLabel2': 14, 'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk1087', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event75
          case [6, 7]:
            Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 12, 'ChoiceLabel2': 14, 'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk1086', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event75
        }
      case [2, 3, 4, 5, 6, 7, 8]:
        if !Npc_HyruleWestHatago001[HorseInnChallenge].EventQueryIsIndoor() {
            goto Event146
        } else {
            Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 12, 'ChoiceLabel2': 14, 'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk1089', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event75
        }
    }
}

void Ready_Near() {
    Npc_HyruleWestHatago001[HorseInnChallenge].EventTriggerBalloonMessage({'IsChallenge': True, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/HorseInnChallenge001:Near1001', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void Check_TakeHorse() {
    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HorseInnChallenge001_HorseStable'}) {
        if !GameSystemActor.EventQueryIsLastRiddenAnimalOwnedHorse() {
            switch GameSystemActor.EventQueryCheckIsOwnedHorseAssociated({'CheckDistance': 18.0, 'IsRidden': False}) {
              case 0:
                Event182:

                call HorseCamera()

                if !GameSystemActor.EventQueryTalkChoice2() {
                    Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk1050', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'Talk', 'IsWaitEnd': False, 'ClothWarpMode': 0})
                    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkYes', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                    Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk1031', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HorseInnChallenge001_Repaired_Carriage', 'Index': -1}) {
                        if !GameSystemActor.EventQueryIsLastRiddenAnimalOwnedHorse()
                        && !GameSystemActor.EventQueryIsHorseTackEquipped({'HorseTack': 2, 'TackActorName': 'GameRomHorseSaddle_07'}) {
                            Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk1080', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            Event225:
                            Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk1081', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                            call CompleteCamera()

                        } else {
                            Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk1079', 'ChoiceNumber': 1, 'ChoiceLabel1': 10, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk1035', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                            call UmayadoRegisterCheck()

                            goto Event225
                        }
                    } else {

                        call HorseStable()

                    }
                } else
                if !GameSystemActor.EventQueryIsLastRiddenAnimalOwnedHorse() {
                    Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk1083', 'IsNotOpenIfSkipedMostRecent': False})
                } else {
                    Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk1066', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                }
                EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
              case [1, 2, 4, 5, 6, 7]:
                Event31:
                Npc_HyruleWestHatago001[HorseInnChallenge].EventNPCTurnToTarget({'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'OffsetBase': 0, 'InstanceName': '', 'ActorName': '', 'Direction': -100.0, 'Target': 2, 'FaceControlType': 1, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk1052', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Event125:
                EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
            }
        } else
        switch GameSystemActor.EventQueryCheckIsWildHorseAssociated({'CheckDistance': 18.0}) {
          case 0:
            goto Event182
          case [1, 2, 3, 8, 9, 10]:
            goto Event31
          case [4, 5]:
            Npc_HyruleWestHatago001[HorseInnChallenge].EventNPCTurnToTarget({'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'OffsetBase': 0, 'InstanceName': '', 'ActorName': '', 'Direction': -100.0, 'Target': 2, 'FaceControlType': 1, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk1063', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event125
          case 6:
            Npc_HyruleWestHatago001[HorseInnChallenge].EventNPCTurnToTarget({'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'OffsetBase': 0, 'InstanceName': '', 'ActorName': '', 'Direction': -100.0, 'Target': 2, 'FaceControlType': 1, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk1067', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event125
        }
    }
}

void Check_RepairCarriage() {
    GameSystemActor.EventTriggerRequestAutoSave()
    if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HorseInnChallenge001_Repaired_Carriage', 'Index': -1})
    && !AsbObj_CaravanWagon_A_02[HorseInn001_BrokenCarriage].EventQueryConnectedByBondConstraint({'AdjustPointIndexTarget': 0, 'IsCheckAdjustPoint': False, 'AdjustPointIndexSelf': 0, 'IsLimitActor': False, 'ActorName': ''}) {
        if !AsbObj_CaravanWagon_A_02[HorseInn001_BrokenCarriage].EventQueryConnectedByBondConstraint({'IsLimitActor': True, 'ActorName': 'AsbObj_WoodWheel_A_01', 'IsCheckAdjustPoint': False, 'AdjustPointIndexSelf': 0, 'AdjustPointIndexTarget': 0}) {
            if !AsbObj_CaravanWagon_A_02[HorseInn001_BrokenCarriage].EventQueryConnectedByBondConstraint({'IsLimitActor': True, 'ActorName': 'AsbObj_WoodWheel_A_01', 'AdjustPointIndexSelf': 1, 'IsCheckAdjustPoint': True, 'AdjustPointIndexTarget': -1})
            && !AsbObj_CaravanWagon_A_02[HorseInn001_BrokenCarriage].EventQueryConnectedByBondConstraint({'IsLimitActor': True, 'ActorName': 'AsbObj_WoodWheel_A_01', 'AdjustPointIndexSelf': 3, 'IsCheckAdjustPoint': True, 'AdjustPointIndexTarget': -1}) {

                call InitTalk.InitTalkOnEvent({'Self': ActorIdentifier(name="Npc_HyruleWestHatago001", sub_name="HorseInnChallenge"), 'Arg_Turn': 0})

                Event215:

                call CarriageCamera()

                Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk1042', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                call RepairCarriage_ActorChange()

                Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk1007', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'Talk', 'IsWaitEnd': False, 'ClothWarpMode': 0})
                Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkYes', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk1093', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HorseInnChallenge001_BanMagic', 'Index': -1, 'Value': False})
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HorseInnChallenge001_HorseStable'}) {
                    Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk1097', 'ChoiceNumber': 1, 'ChoiceLabel1': 10, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk1035', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                    call UmayadoRegisterCheck()

                    Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk1081', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                    call CompleteCamera()


                    call Check()

                } else
                if !GameSystemActor.EventQueryIsLastRiddenAnimalOwnedHorse() {
                    switch GameSystemActor.EventQueryCheckIsOwnedHorseAssociated({'CheckDistance': 15.0, 'IsRidden': False}) {
                      case 0:
                        Event52:
                        Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk1057', 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                        call Check_TakeHorse()


                        call Check()

                      case [1, 2, 3, 4, 5, 6, 7]:
                        Event93:
                        Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk1041', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 13, 'ChoiceLabel2': 15, 'ChoiceLabel3': 16, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk1048', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
                    }
                } else
                switch GameSystemActor.EventQueryCheckIsWildHorseAssociated({'CheckDistance': 15.0}) {
                  case 0:
                    goto Event52
                  case [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]:
                    goto Event93
                }
            } else {

                call InitTalk.InitTalkOnEvent({'Self': ActorIdentifier(name="Npc_HyruleWestHatago001", sub_name="HorseInnChallenge"), 'Arg_Turn': 0})

                Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk1061', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})

                call CarriageCamera()

                Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk1006', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                call CarriageCameraReset()

                Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk1082', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'Talk', 'IsWaitEnd': False, 'ClothWarpMode': 0})
                Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkYes', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk1091', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
            }
        } else {

            call InitTalk.InitTalkOnEvent({'Self': ActorIdentifier(name="Npc_HyruleWestHatago001", sub_name="HorseInnChallenge"), 'Arg_Turn': 0})

            Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk1061', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})

            call CarriageCamera()

            Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk1053', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call CarriageCameraReset()

            Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk1054', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'Talk', 'IsWaitEnd': False, 'ClothWarpMode': 0})
            Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkYes', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk1092', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
        }
    }
}

void Step_Talk() {

    call WagonPause()

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HorseInnChallenge001_Repaired_Carriage', 'Index': -1}) {
        Event148:

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 0})

        Event152:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HorseInnChallenge001_HorseStable'}) {
            Event25:

            call Check()


            call WagonPauseReset()

        } else
        if !GameSystemActor.EventQueryIsLastRiddenAnimalOwnedHorse() {
            switch GameSystemActor.EventQueryCheckIsOwnedHorseAssociated({'CheckDistance': 18.0, 'IsRidden': False}) {
              case 0:
                Event497:

                call Check_TakeHorse()

                EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
                goto Event25
              case [1, 2, 3, 4, 5, 6, 7]:
                goto Event25
            }
        } else
        switch GameSystemActor.EventQueryCheckIsWildHorseAssociated({'CheckDistance': 18.0}) {
          case 0:
            goto Event497
          case [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]:
            goto Event25
        }
    } else
    if !AsbObj_CaravanWagon_A_02[HorseInn001_BrokenCarriage].EventQueryConnectedByBondConstraint({'AdjustPointIndexTarget': 0, 'IsCheckAdjustPoint': False, 'AdjustPointIndexSelf': 0, 'IsLimitActor': False, 'ActorName': ''}) {
        EventSystemActor.EventTransition({'EventName': 'Check_RepairCarriage', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})
        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
        goto Event152
    } else {
        goto Event148
    }
}

void Repair2_Npc_HyruleWestHatago001_Talk() {

    call WagonPause()


    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HorseInnChallenge001_Repaired_Carriage', 'Index': -1}) {

        call Check_TakeHorse()

    } else {

        call Check_RepairCarriage()

    }

    call Check()


    call WagonPauseReset()

}

void CarriageCamera() {

    fork {
        AsbObj_CaravanWagon_A_02[HorseInn001_BrokenCarriage].EventTriggerParticipateEvent()
    } {
        EventCamera.EventTriggerCameraSavePoint()
    }

    Npc_HyruleWestHatago001[HorseInnChallenge].EventNPCTurnToTarget({'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'OffsetBase': 0, 'Direction': -100.0, 'Target': 3, 'ActorName': 'AsbObj_CaravanWagon_A_02', 'InstanceName': 'HorseInn001_BrokenCarriage', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'FaceControlType': 1})
    Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Target': 3, 'ActorName': 'AsbObj_CaravanWagon_A_02', 'InstanceName': 'HorseInn001_BrokenCarriage', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 30, 'Actor1ActorName': 'AsbObj_CaravanWagon_A_02', 'Actor1InstanceName': 'HorseInn001_BrokenCarriage', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': True, 'IsIgnoreAtVectorReferenceActorRot': True, 'AtVector': [0.0, 0.0, 0.0], 'PosVector': [-7.050000190734863, 2.759999990463257, -3.5]})
}

void Check() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HorseInnChallenge001_Repaired_Carriage', 'Index': -1}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HorseInnChallenge001_CatchHorse', 'Index': -1}) {

            call CompleteStep()

        } else {

            call WagonPause()

            Npc_HyruleWestHatago001[HorseInnChallenge].EventNPCTurnToTarget({'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'OffsetBase': 0, 'InstanceName': '', 'ActorName': '', 'Direction': -100.0, 'Target': 2, 'FaceControlType': 1, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk1016', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 15, 'ChoiceLabel2': 16, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call Choices()

            Event454:

            call WagonPauseReset()

        }
    } else {

        call WagonPause()

        Npc_HyruleWestHatago001[HorseInnChallenge].EventNPCTurnToTarget({'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'OffsetBase': 0, 'InstanceName': '', 'ActorName': '', 'Direction': -100.0, 'Target': 2, 'FaceControlType': 1, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        if Npc_HyruleWestHatago001[HorseInnChallenge].EventQueryIsOnRecentTalkFlag() {

            call Conditions()

        }
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HorseInnChallenge001_HorseStable'}) {
            Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 13, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk1099', 'ChoiceNumber': 2, 'ChoiceLabel2': 16, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call Choices()

            goto Event454
        } else {
            Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 3, 'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk1019', 'ChoiceLabel1': 13, 'ChoiceLabel2': 15, 'ChoiceLabel3': 16, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call Choices()

            goto Event454
        }
    }
}

void Reset_CaravanWagon() {

    call WagonPause()


    call Common.AirStartUP_Player()

    if Npc_HyruleWestHatago001[HorseInnChallenge].EventQueryHaveTalked() {
        Npc_HyruleWestHatago001[HorseInnChallenge].EventTriggerSetHaveTalked({'value': False, 'IsReflectWhenSleep': False})
    }
    if !Player.EventQueryCheckPlayerState({'State': 5}) {

        fork {

            call InitTalk_HorseInnChallenge001_MoveWagon({'Self': ActorIdentifier(name="Npc_HyruleWestHatago001", sub_name="HorseInnChallenge"), 'Arg_Turn': 3})

        } {
            EventCamera.EventChangeTemporarilyToPlayerCamera({'EnableControle': True, 'IsWaitEnd': False})
        }

    } else {

        fork {

            call InitTalk.InitTalkExceptCameraOnEvent({'Self': ActorIdentifier(name="Npc_HyruleWestHatago001", sub_name="HorseInnChallenge"), 'Arg_Turn': 3})

        } {
            EventCamera.EventChangeTemporarilyToPlayerCamera({'EnableControle': True, 'IsWaitEnd': False})
        }

    }
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HorseInnChallenge001_Move_Carriage'}) {

        call CameraPanKozumi({'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk1062'})

    } else {

        call CameraPanKozumi({'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk1058'})

    }
    EventCamera.EventBustShotCamera({'IsWaitEnd': True, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'TargetActorName': 'Npc_HyruleWestHatago001', 'TargetOffset': [0.0, 0.0, 0.0], 'TargetActorInstanceName': 'HorseInnChallenge', 'EnableCameraAlpha': True, 'CameraCollisionMode': 0, 'Longitude': 0.0, 'Latitude': 0.0, 'MoveTime': 0})
    Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk1059', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    call CheckRidePlayer()

    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsAtVectorReferenceActorPosOnce': True, 'IsPosVectorReferenceActorPosOnce': True, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'PosVectorSetType': 0, 'PosVector': [-1337.2900390625, 194.5500030517578, -722.6699829101562], 'AtVector': [-1334.8199462890625, 193.1300048828125, -719.47998046875], 'TargetFovy': 50.0, 'Actor1ActorName': '', 'AtVectorSetType': 0, 'EnableCameraAlpha': False})
    GameSystemActor.EventClearActorsAroundAnchor({'AnchorActorName': 'DestinationAnchor', 'AnchorInstanceName': 'CaravanWagonWarpCheck', 'Height': 8.0, 'IsWaitEnd': True, 'IsSweepOut': True, 'Radius': 8.0, 'IsDeleteActor': True, 'IsExcludePlacedAroundAnchor': True})
    if !AsbObj_CaravanWagon_A_02[HorseInn001_BrokenCarriage].EventQueryWarpToSafeSpaceWithCombinedActor({'IsEnableFailDelete': True, 'BaseRot': [180.0, 36.0, 180.0], 'BasePos': [-1331.5560302734375, 191.03900146484375, -718.4271850585938], 'EndHeightOffset': -1.0, 'IsEnableHitPlayer': True, 'StartHeightOffset': 8.0}) {

        call WagonPauseReset()

        Event460:
        Player.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'KozumiTalk', 'UseDemoWait': False, 'NotChangeRot': False})
        GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})

        call PositionReset()

        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk1060', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HorseInnChallenge001_Move_Carriage'}) {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'HorseInnChallenge001_Move_Carriage'})
        }
        EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
    } else {

        call WagonPauseReset()

        GameSystemActor.EventResetGimmick({'IsWaitEnd': True, 'Option': 0, 'IsResetCamera': False})
        goto Event460
    }
}

void HorseCamera() {

    call InitTalk.InitTalkOnEvent({'Self': ActorIdentifier(name="Npc_HyruleWestHatago001", sub_name="HorseInnChallenge"), 'Arg_Turn': 4})

    Npc_HyruleWestHatago001[HorseInnChallenge].EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 0})
    if Player.EventQueryCheckPlayerState({'State': 4}) {
        Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
    }
    LastRiddenAnimal_ForEvent.EventResetChemicalStateNeutral({'IsWaitEnd': True})
    LastRiddenAnimal_ForEvent.EventHorseDisconnectCouplerFrom({'IsWaitEnd': True, 'IsWaitForComplete': True})
    GameSystemActor.EventClearActorsAroundAnchor({'AnchorActorName': 'DesignateMatrixActor', 'AnchorInstanceName': 'HorseCheck', 'Height': 4.0, 'IsWaitEnd': True, 'IsSweepOut': True, 'IsDeleteActor': True, 'IsExcludePlacedAroundAnchor': False, 'Radius': 6.0})
    LastRiddenAnimal_ForEvent.EventHorseWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'InstanceName': 'HorseInnChallenge001_HorseCamera'})
    LastRiddenAnimal_ForEvent.EventWaitState({'IsEatEnable': True, 'HasToCue': True, 'IsNoMorph': True, 'IsAngryEnable': False, 'IsLoveEnable': False, 'IsWaitEnd': False})
    Npc_HyruleWestHatago001[HorseInnChallenge].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': '', 'AnchorType': 8, 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    Player.EventPlayerWarpToTargetActor({'IsWaitEnd': True, 'OffsetBase': 0, 'YAngle': -110.0, 'PositionOffset': [1.5, 0.0, -1.7999999523162842], 'TargetActorKind': 1, 'ActorName': 'Npc_HyruleWestHatago001', 'InstanceName': 'HorseInnChallenge', 'UseDemoWait': True})
    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Talk', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    Npc_HyruleWestHatago001[HorseInnChallenge].EventNPCTurnToTarget({'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'OffsetBase': 0, 'InstanceName': '', 'ActorName': '', 'Direction': -100.0, 'Target': 2, 'FaceControlType': 1, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'Actor1ActorName': 'Npc_HyruleWestHatago001', 'Actor1InstanceName': 'HorseInnChallenge', 'PosVector': [-4.059999942779541, 1.9500000476837158, -0.75], 'AtVector': [0.03999999910593033, 1.2699999809265137, 1.2400000095367432], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False, 'MoveTime': 0})
    EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 4})
    EventCamera.EventTriggerCameraSavePoint()
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-1332.3800048828125, 192.58999633789062, -724.47998046875], 'AtVector': [-1336.449951171875, 192.32000732421875, -733.5599975585938], 'TargetFovy': 50.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 0})
    if !GameSystemActor.EventQueryIsLastRiddenAnimalOwnedHorse() {
        Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk1078', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk1030', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
    Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 2, 'ChoiceLabel1': 17, 'ChoiceLabel2': 18, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk1084', 'IsCloseDialog': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    EventCamera.EventMoveCameraToSavePoint({'MoveFrame': 6, 'IsWaitEnd': True, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
}

void CompleteCamera() {
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HorseInnChallenge001_HorseStable'}) {
        Event217:
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        GameSystemActor.EventResetGimmick({'IsWaitEnd': True, 'Option': 0, 'IsResetCamera': False})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HorseInnChallenge001_CatchHorse', 'Index': -1, 'Value': True})
        GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        DummyHorse.EventTriggerParticipateEvent()
        Npc_HyruleWestHatago001[HorseInnChallenge].EventAIScheduleWarpToAnchor({'AnchorType': 8, 'IsWaitEnd': True, 'InstanceName': '', 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
        Player.EventPlayerWarpToTargetActor({'IsWaitEnd': True, 'OffsetBase': 0, 'PositionOffset': [1.5, 0.0, -1.7999999523162842], 'YAngle': 20.0, 'ActorName': 'Npc_HyruleWestHatago001', 'InstanceName': 'HorseInnChallenge', 'TargetActorKind': 1, 'UseDemoWait': True})
        Npc_HyruleWestHatago001[HorseInnChallenge].EventNPCTurnToTarget({'IsWaitEnd': True, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'OffsetBase': 0, 'Target': 4, 'FaceControlType': 2, 'ActorName': '', 'Direction': 10.0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_HyruleWestHatago001[HorseInnChallenge].EventTriggerBecomeSpeaker()
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsAtVectorReferenceActorPosOnce': True, 'IsPosVectorReferenceActorPosOnce': True, 'Actor1ActorName': 'Player', 'PosVector': [1.4900000095367432, 2.240000009536743, -3.2100000381469727], 'AtVector': [-0.949999988079071, 1.2999999523162842, 0.6000000238418579], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 4})
    } else
    if !GameSystemActor.EventQueryIsLastRiddenAnimalOwnedHorse() {
        GameSystemActor.EventTriggerRequestChangeHorseTack({'HorseTack': 2, 'ActorName': 'GameRomHorseSaddle_00'})
        GameSystemActor.EventTriggerSetLastRiddenAnimalToHorseOfHorseInnChallenge001()
        GameSystemActor.EventTriggerRequestDeleteLastRiddenAnimal()
        GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        GameSystemActor.EventTriggerRemoveCurrentOwnedHorse({'IsDelete': False})
        goto Event217
    } else {
        GameSystemActor.EventTriggerSetLastRiddenAnimalToHorseOfHorseInnChallenge001()
        GameSystemActor.EventTriggerRequestDeleteLastRiddenAnimal()
        goto Event217
    }
}

void Conditions() {
    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case [0, 1]:
        Event176:
        switch EventWorldManagerController.EventQueryTimeDivision() {
          case [0, 1]:
            Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk1074', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
          case [2, 3]:
            Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk1075', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
          case [4, 5]:
            Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk1088', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
          case [6, 7]:
            Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk1076', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
      case [2, 3, 4, 5, 6, 7, 8]:
        if !Npc_HyruleWestHatago001[HorseInnChallenge].EventQueryIsIndoor() {
            goto Event176
        } else {
            Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk1077', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
    }
}

void Choices() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HorseInnChallenge001_HorseStable'}) {
        if !GameSystemActor.EventQueryTalkChoice2() {
            EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
            Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk1045', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'IsNotOpenIfSkipedMostRecent': False})
            Event323:

            call Choice_Bye()

        } else {
            goto Event323
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HorseInnChallenge001_Repaired_Carriage', 'Index': -1}) {
        if !GameSystemActor.EventQueryTalkChoice2() {
            EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
            Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk1046', 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call Common.OpenActionGuideScreen({'ActionGuideType': 18})

            Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk1056', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'IsNotOpenIfSkipedMostRecent': False})
            Event325:

            call Choice_Bye()

        } else {
            goto Event325
        }
    } else
    switch GameSystemActor.EventQueryTalkChoice3() {
      case 0:
        Event202:
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HorseInnChallenge001_Choice01', 'Index': -1, 'Value': True})
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HorseInnChallenge001_Choice02', 'Index': -1}) {
            Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk1045', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'IsNotOpenIfSkipedMostRecent': False})
            Event248:

            call Choice_Bye()

        } else {
            Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk1045', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 15, 'ChoiceLabel2': 16, 'ChoiceLabel3': 0, 'IsNotOpenIfSkipedMostRecent': False})
            if !GameSystemActor.EventQueryTalkChoice2() {
                Event203:
                EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HorseInnChallenge001_Choice02', 'Index': -1, 'Value': True})
                Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 13, 'ChoiceLabel2': 15, 'ChoiceLabel3': 16, 'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk1046', 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                call Common.OpenActionGuideScreen({'ActionGuideType': 18})

                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HorseInnChallenge001_Choice01'}) {
                    Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk1056', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'IsNotOpenIfSkipedMostRecent': False})
                    Event249:

                    call Choice_Bye()

                } else {
                    Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk1056', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 13, 'ChoiceLabel2': 16, 'ChoiceLabel3': 0, 'IsNotOpenIfSkipedMostRecent': False})
                    if !GameSystemActor.EventQueryTalkChoice2() {
                        goto Event202
                    } else {
                        goto Event249
                    }
                }
            } else {
                goto Event248
            }
        }
      case 1:
        goto Event203
      case 2:
        Event173:
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HorseInnChallenge001_Repaired_Carriage'}) {
            Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk1048', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk1072', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Event199:
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HorseInnChallenge001_Choice01', 'Index': -1, 'Value': False})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HorseInnChallenge001_Choice02', 'Index': -1, 'Value': False})
        } else
        if !Npc_HyruleWestHatago001[HorseInnChallenge].EventQueryIsOnRecentTalkFlag() {
            Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk1090', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk1047', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
        goto Event199
    }
}

void HorseStable() {
    Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk1094', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    GameSystemActor.EventTriggerSetLastRiddenAnimalToHorseOfHorseInnChallenge001()
    if !GameSystemActor.EventQueryIsLastRiddenAnimalOwnedHorse() {
        GameSystemActor.EventTriggerRemoveCurrentOwnedHorse({'IsDelete': False})
    }
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    GameSystemActor.EventTriggerRequestDeleteLastRiddenAnimal()
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'HorseInnChallenge001_HorseStable'})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk1095', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk1096', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk1072', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
}

void Choice_Bye() {
    goto Event173
}

void RepairCarriage_Complete() {

    call WagonPause()

    GameSystemActor.EventTriggerRequestAutoSave()

    fork {

        call InitTalk.InitTalkExceptCameraOnEvent({'Self': ActorIdentifier(name="Npc_HyruleWestHatago001", sub_name="HorseInnChallenge"), 'Arg_Turn': 0})

    } {
        EventCamera.EventChangeTemporarilyToPlayerCamera({'EnableControle': True, 'IsWaitEnd': False})
    }

    goto Event215
}

void MoveWagon_BeforeReady() {

    call WagonPause()


    call Common.AirStartUP_Player()

    if !Player.EventQueryCheckPlayerState({'State': 6}) {
        if !Player.EventQueryCheckPlayerState({'State': 5}) {

            fork {

                call InitTalk_HorseInnChallenge001_MoveWagon({'Self': ActorIdentifier(name="Npc_HyruleWestHatago001", sub_name="HorseInnChallenge"), 'Arg_Turn': 3})

            } {
                EventCamera.EventChangeTemporarilyToPlayerCamera({'EnableControle': True, 'IsWaitEnd': False})
            }

        } else {
            Event369:

            fork {

                call InitTalk.InitTalkExceptCameraOnEvent({'Self': ActorIdentifier(name="Npc_HyruleWestHatago001", sub_name="HorseInnChallenge"), 'Arg_Turn': 3})

            } {
                EventCamera.EventChangeTemporarilyToPlayerCamera({'EnableControle': True, 'IsWaitEnd': False})
            }

        }
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'HorseInnChallenge001_IsCompleted_Exp'}) {
            DummyHorse.EventTriggerParticipateEvent()
        }
        if Npc_HyruleWestHatago001[HorseInnChallenge].EventQueryHaveTalked() {
            Npc_HyruleWestHatago001[HorseInnChallenge].EventTriggerSetHaveTalked({'value': False, 'IsReflectWhenSleep': False})
        }
        switch Npc_HyruleWestHatago001[HorseInnChallenge].EventQueryOwningObjectPlayerInterference({'IsCheckBrokenInterferedOnly': False}) {
          case [1, 2, 3, 4, 6]:
            EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0})
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'HorseInnChallenge001_IsCompleted_Exp'}) {
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HorseInnChallenge001_Clear_FirstCaution'}) {

                    call CameraPanKozumi({'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk3003'})


                    call HiddenWagon()

                    Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk3008', 'IsNotOpenIfSkipedMostRecent': False})
                    Event275:

                    call WagonPauseReset()

                } else {

                    call CameraPanKozumi({'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk3002'})


                    call HiddenWagon()

                    Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk3007', 'IsNotOpenIfSkipedMostRecent': False})
                    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'HorseInnChallenge001_Clear_FirstCaution'})
                    goto Event275
                }
            } else
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HorseInnChallenge001_FirstCaution', 'Index': -1}) {

                call CameraPanKozumi({'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk3004'})

                EventCamera.EventBustShotCamera({'IsWaitEnd': True, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'TargetActorName': 'Npc_HyruleWestHatago001', 'TargetOffset': [0.0, 0.0, 0.0], 'TargetActorInstanceName': 'HorseInnChallenge', 'EnableCameraAlpha': True, 'CameraCollisionMode': 0, 'Longitude': 0.0, 'Latitude': 0.0, 'MoveTime': 0})
                Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk3006', 'IsNotOpenIfSkipedMostRecent': False})
                goto Event275
            } else {

                call CameraPanKozumi({'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk3000'})

                EventCamera.EventBustShotCamera({'IsWaitEnd': True, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'TargetActorName': 'Npc_HyruleWestHatago001', 'TargetOffset': [0.0, 0.0, 0.0], 'TargetActorInstanceName': 'HorseInnChallenge', 'EnableCameraAlpha': True, 'CameraCollisionMode': 0, 'Longitude': 0.0, 'Latitude': 0.0, 'MoveTime': 0})
                Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk3005', 'IsNotOpenIfSkipedMostRecent': False})
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HorseInnChallenge001_FirstCaution', 'Value': True, 'Index': -1})
                goto Event275
            }
          case 8:
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'HorseInnChallenge001_IsCompleted_Exp'}) {

                call Npc_HyruleWestHatago001.Burned_CaravanWagon()

            } else {

                call Burned_CaravanWagon_HorseInnChallenge001()

            }
          case 9:
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'HorseInnChallenge001_IsCompleted_Exp'}) {

                call Npc_HyruleWestHatago001.Broken_CaravanWagon()

            } else {

                call Broken_CaravanWagon_HorseInnChallenge001()

            }
        }
    } else {
        Player.EventPlayerClimbOff({'IsWaitEnd': True})
        goto Event369
    }
}

void CompleteStep() {
    DummyHorse.EventTriggerParticipateEvent()
    Npc_HyruleWestHatago001[HorseInnChallenge].EventTriggerBecomeSpeaker()
    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsAtVectorReferenceActorPosOnce': True, 'IsPosVectorReferenceActorPosOnce': True, 'Actor1ActorName': 'Player', 'PosVector': [1.4900000095367432, 2.240000009536743, -3.2100000381469727], 'AtVector': [-0.949999988079071, 1.2999999523162842, 0.6000000238418579], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk1033', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_HyruleWestHatago001[HorseInnChallenge].EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk1040', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

    call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'PutRupee_Silver'})

    Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk1043', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'Talk', 'IsWaitEnd': False, 'ClothWarpMode': 0})
    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkingS', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk1055', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_HyruleWestHatago001[HorseInnChallenge].EventDisableRecentTalkFlag({'IsWaitEnd': True})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HorseInnChallenge001_BanMagic', 'Value': False, 'Index': -1})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'HorseInnChallenge001', 'IsIgnoreCompletedChallenge': False, 'StepName': 'Complete', 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
    Npc_HyruleWestHatago001[HorseInnChallenge].EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule()
}

void Burned_CaravanWagon_HorseInnChallenge001() {
    Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk1058', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    call WagonPauseReset()


    call CheckRidePlayer()

    GameSystemActor.EventClearActorsAroundAnchor({'AnchorActorName': 'DestinationAnchor', 'AnchorInstanceName': 'CaravanWagonWarpCheck', 'Height': 8.0, 'IsWaitEnd': True, 'Radius': 8.0, 'IsSweepOut': True, 'IsExcludePlacedAroundAnchor': False, 'IsDeleteActor': True})
    Player.EventPlayerWarpToNearAnchorWithRidableActor({'IsWaitEnd': True, 'UseDemoWait': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'KozumiTalk'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Kozumi_CaravanWagon_ReCreate', 'Index': -1, 'Value': True})
    Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago001:BurnedCaravanWagon_02', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Kozumi_CaravanWagon_ReCreate', 'Value': False, 'Index': -1})
    GameSystemActor.EventResetGimmick({'IsWaitEnd': True, 'IsResetCamera': False, 'Option': 0})
    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})

    call PositionReset()

    Player.EventPlayerUnequip({'IsWaitEnd': True})
    Player.EventPlayerTalk({'HelloType': 0, 'IsWaitEnd': True})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk1060', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_HyruleWestHatago001[HorseInnChallenge].EventDisableRecentTalkFlag({'IsWaitEnd': True})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HorseInnChallenge001_BanAttack', 'Value': False, 'Index': -1})
}

void Broken_CaravanWagon_HorseInnChallenge001() {
    Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk1058', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    call CheckRidePlayer()

    GameSystemActor.EventClearActorsAroundAnchor({'AnchorActorName': 'DestinationAnchor', 'AnchorInstanceName': 'CaravanWagonWarpCheck', 'Height': 8.0, 'IsWaitEnd': True, 'Radius': 8.0, 'IsSweepOut': True, 'IsExcludePlacedAroundAnchor': False, 'IsDeleteActor': True})
    Player.EventPlayerWarpToNearAnchorWithRidableActor({'IsWaitEnd': True, 'UseDemoWait': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'KozumiTalk'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Kozumi_CaravanWagon_ReCreate', 'Index': -1, 'Value': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Kozumi_CaravanWagon_ReCreate', 'Value': False, 'Index': -1})
    GameSystemActor.EventResetGimmick({'IsWaitEnd': True, 'IsResetCamera': False, 'Option': 0})
    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})

    call PositionReset()

    Player.EventPlayerUnequip({'IsWaitEnd': True})
    Player.EventPlayerTalk({'HelloType': 0, 'IsWaitEnd': True})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk1060', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_HyruleWestHatago001[HorseInnChallenge].EventDisableRecentTalkFlag({'IsWaitEnd': True})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HorseInnChallenge001_BanAttack', 'Value': False, 'Index': -1})
}

void PositionReset() {
    Npc_HyruleWestHatago001[HorseInnChallenge].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': '', 'AnchorType': 8, 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    Player.EventPlayerWarpToTargetActor({'IsWaitEnd': True, 'OffsetBase': 0, 'TargetActorKind': 1, 'ActorName': 'Npc_HyruleWestHatago001', 'InstanceName': 'HorseInnChallenge', 'YAngle': 0.0, 'PositionOffset': [-4.889999866485596, 0.0, -1.350000023841858], 'UseDemoWait': True})

    fork {
        Npc_HyruleWestHatago001[HorseInnChallenge].EventNPCTurnToTarget({'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'OffsetBase': 0, 'InstanceName': '', 'ActorName': '', 'Target': 2, 'FaceControlType': 1, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'Direction': 0.0, 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_HyruleWestHatago001[HorseInnChallenge].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
    } {
        Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Target': 3, 'ActorName': 'Npc_HyruleWestHatago001', 'InstanceName': 'HorseInnChallenge', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Talk', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ClothWarpMode': 0})
    }

    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Npc_HyruleWestHatago001', 'Actor1InstanceName': 'HorseInnChallenge', 'PosVector': [-4.929999828338623, 1.9700000286102295, 4.059999942779541], 'AtVector': [-0.20000000298023224, 1.2799999713897705, 2.5899999141693115], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True})
}

void RepairCarriage_ActorChange() {
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    call WagonPauseReset()

    AsbObj_CaravanWagon_A_02[HorseInn001_BrokenCarriage].EventTriggerCombinedActorDeleteAll()
    GameSystemActor.EventResetGimmick({'IsWaitEnd': True, 'Option': 0, 'IsResetCamera': False})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HorseInnChallenge001_Repaired_Carriage', 'Index': -1, 'Value': True})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'HorseInnChallenge001_CreateActor'})
    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'HorseInnChallenge001_RepairCarriageFinish', 'FadeInTypeEventEnd': 2})
    Npc_HyruleWestHatago001[HorseInnChallenge].EventTriggerBecomeSpeaker()
    EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 4})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
}

void CameraPanKozumi() {
    EventCamera.EventTriggerCameraSavePoint()
    if !Player.EventQueryCheckPlayerState({'State': 5}) {
        Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'MessageId', 'IsNotOpenIfSkipedMostRecent': False})
    } else {

        fork {
            Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'MessageId', 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
        } {
            Player.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Npc_HyruleWestHatago001', 'InstanceName': 'HorseInnChallenge', 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
        }

    }
}

void RepairCarriageFinish() {
    AsbObj_CaravanWagon_A_02[HorseInn001_BrokenCarriage].EventTriggerParticipateEvent()
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'HorseInnChallenge001_CreateActor', 'Value': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

    call PositionReset()

}

void UmayadoRegisterCheck() {
    if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HorseInn_RegisteredAssociation', 'Index': -1}) {
        Npc_HyruleWestHatago001[HorseInnChallenge].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/HorseInnChallenge001:Talk1100', 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void CheckRidePlayer() {
    if Player.EventQueryCheckPlayerState({'State': 4}) {
        Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
    }
}

void InitTalk_HorseInnChallenge001_MoveWagon() {

    fork {
        Npc_AncientDoctor[InitTalk_HorseInnChallenge001_MoveWagon(Self)].EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': False})
        Npc_AncientDoctor[InitTalk_HorseInnChallenge001_MoveWagon(Self)].EventTriggerSetRecentTalkFlag({'value': True, 'IsReflectWhenSleep': False})
        if !Npc_AncientDoctor[InitTalk_HorseInnChallenge001_MoveWagon(Self)].EventQueryNeedEquipWeapon() {
            Npc_AncientDoctor[InitTalk_HorseInnChallenge001_MoveWagon(Self)].EventUnequipWeapon({'IsWaitEnd': True})
        }
        if !Npc_AncientDoctor[InitTalk_HorseInnChallenge001_MoveWagon(Self)].EventQueryHasControllerSet() {
            Npc_AncientDoctor[InitTalk_HorseInnChallenge001_MoveWagon(Self)].EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'GreetType': 3, 'TurnType': 'Arg_Turn'})
        }
    } {
        SoundSystemActor.EventSoundChangeListenerPreset({'ListenerPresetName': 'Talk', 'FadeTime': 0.0})
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': '会話中', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
    }

}

void WagonPause() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'HorseInnChallenge001_IsCompleted_Exp'}) {
        AsbObj_CaravanWagon_A_02[HorseInn001_FinishedCarriage].EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})
    } else {
        AsbObj_CaravanWagon_A_02[HorseInn001_BrokenCarriage].EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})
    }
}

void WagonPauseReset() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'HorseInnChallenge001_IsCompleted_Exp'}) {
        AsbObj_CaravanWagon_A_02[HorseInn001_FinishedCarriage].EventTriggerErasePauseMask()
    } else {
        AsbObj_CaravanWagon_A_02[HorseInn001_BrokenCarriage].EventTriggerErasePauseMask()
    }
}

void HiddenWagon() {

    fork {
        AsbObj_CaravanWagon_A_02[HorseInn001_FinishedCarriage].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        AsbObj_WoodWheel_A_02[HorseInn001_A_KW].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        AsbObj_WoodWheel_A_02[HorseInn001_B_KW].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        AsbObj_WoodWheel_A_02[HorseInn001_C].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        AsbObj_WoodWheel_A_02[HorseInn001_D].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        DummyHorse.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Harness_Coupler[HorseInn001_FinishedCarriage].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        EventCamera.EventBustShotCamera({'IsWaitEnd': True, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'TargetActorName': 'Npc_HyruleWestHatago001', 'TargetOffset': [0.0, 0.0, 0.0], 'TargetActorInstanceName': 'HorseInnChallenge', 'EnableCameraAlpha': True, 'CameraCollisionMode': 0, 'Longitude': 0.0, 'Latitude': 0.0, 'MoveTime': 0})
    }

}

void CarriageCameraReset() {
    EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'ReviseMode': 0, 'CollisionInterpolateSkip': True, 'MoveFrame': 0, 'EnableCameraAlpha': False})
    Npc_HyruleWestHatago001[HorseInnChallenge].EventNPCTurnToTarget({'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'OffsetBase': 0, 'InstanceName': '', 'ActorName': '', 'Direction': -100.0, 'Target': 2, 'FaceControlType': 1, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Target': 3, 'ActorName': 'Npc_HyruleWestHatago001', 'InstanceName': 'HorseInnChallenge', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
}
