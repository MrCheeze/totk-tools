-------- EventFlow: Zora_MessageBottle --------

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventTriggerProgressChallengeStep', 'EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn', 'EventResetGimmick', 'EventEventCircleWipeFadeOutFirst', 'EventEventCircleWipeFadeOutSecond', 'EventWait', 'EventEventCircleWipeFadeIn', 'EventTraverseAroundAndWaitCreateActor', 'EventClearActorsAroundAnchor', 'EventRequestSoulSageLightOrb']
queries: ['EventQueryTalkChoice2', 'EventQueryTalkChoice3', 'EventQueryIsDistanceBetweenActorsClose']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerSetGameDataInt']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataInt']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBalloonMessage']
queries: ['EventQueryIsOnRecentTalkFlag', 'EventQueryAIScheduleCheckActorAction', 'EventQueryIsFollowToTargetActor']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerWarpToNearAnchor', 'EventPlayerHorseGetOff', 'EventTriggerParticipateEvent', 'EventTriggerPlayerLookAtObject', 'EventPlayerPlayASForFlowchart', 'EventTriggerPlayerRequestLookAtTheFront', 'EventPlayerUnequip', 'EventPlayerTalk', 'EventTriggerPlayerRequestLookAtTheFrontLock']
queries: ['EventQueryPlayerCheckRideHorse', 'EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventBasedOnLookAtCamera', 'EventSendMultiEventTalkMessageToPlayerCamera', 'EventTriggerCameraSavePoint', 'EventMoveToTargetPosCamera', 'EventMoveCameraToSavePoint', 'EventSendEventTalkMessageToPlayerCamera', 'EventBustShotCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Npc_Bottle_Mes001[J-5]
entrypoint: None()
actions: ['EventFollowToTargetActor', 'EventPlayAS', 'EventAIScheduleWarpToAnchor', 'EventCancelFollowToTargetActor', 'EventNPCTurnToTarget', 'EventTriggerBecomeSpeaker', 'EventTalk', 'EventTriggerBalloonMessage', 'EventTriggerLookAtObject', 'EventTriggerChangeEmotion', 'EventTriggerRequestLookAtTheFront', 'EventTriggerPushPauseMask', 'EventTriggerErasePauseMask', 'EventTriggerParticipateEvent', 'EventTriggerSetRecentTalkFlag', 'EventTriggerNPCChangePosture', 'EventWait']
queries: ['EventQueryHasControllerSet', 'EventQueryIsFollowToTargetActor', 'EventQueryOwningObjectPlayerInterference']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm', 'EventTriggerStartInGameBgm']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Zora026[J-5]
entrypoint: None()
actions: ['EventAIScheduleWarpToAnchor', 'EventTriggerParticipateEvent', 'EventTalk', 'EventNPCTurnToTarget', 'EventTriggerLookAtObject', 'EventTriggerChangeEmotion', 'EventPlayAS', 'EventTriggerSetHaveTalked']
queries: ['EventQueryHasControllerSet']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryCanAddToPorch']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTransition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Obj_RaftWood_A_02
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventTriggerPushPauseMask', 'EventTriggerErasePauseMask', 'EventTriggerCombinedActorDeleteAll']
queries: ['EventQueryCheckNoObjectDirY', 'EventQueryActorIsRotYTiltOverAngle', 'EventQueryWarpToSafeSpaceWithCombinedActor']
params: {'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 4, 'IsGrounding': False, 'IsBindNearestActor': False}

void Ready_Npc_Bottle_Mes001_Near() {
    Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 200, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Zora_MessageBottle:near1001', 'IsChallenge': True, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void Ready_Npc_Bottle_Mes001_Talk() {
    Event58:

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 3})

    Obj_RaftWood_A_02.EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})
    if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 5, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Zora_MessageBottle:talk1002_02', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 5, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Zora_MessageBottle:talk1002_01', 'IsNotOpenIfSkipedMostRecent': False})
    }
    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Zora_MessageBottle:talk1002', 'ChoiceLabel1': 17, 'ChoiceLabel2': 18, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Zora_MessageBottle_IsAfter_Ready_Exp'}) {
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'TalkingS', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 17, 'ChoiceLabel2': 18, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Zora_MessageBottle:talk1054', 'IsNotOpenIfSkipedMostRecent': False})
        Event279:
        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Zora_MessageBottle:talk1054_00', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Zora_MessageBottle:talk1054_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})

        call Camera_Start({'MessageId': 'EventFlowMsg/Zora_MessageBottle:talk1003'})

        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 5, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Zora_MessageBottle:talk1004', 'IsNotOpenIfSkipedMostRecent': False})
        Obj_RaftWood_A_02.EventTriggerParticipateEvent()

        call Camera_RaftAndChair({'MessageId': 'EventFlowMsg/Zora_MessageBottle:talk1055'})

        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Zora_MessageBottle:talk1005', 'ChoiceLabel1': 9, 'ChoiceLabel2': 10, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreChallengeProgressUI': False, 'StepName': 'Step1', 'ChallengeName': 'Zora_MessageBottle', 'IsIgnoreCompletedChallenge': False, 'IsWaitEnd': True})
        Obj_RaftWood_A_02.EventTriggerErasePauseMask()
    } else {
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'TalkingS', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 17, 'ChoiceLabel2': 18, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Zora_MessageBottle:talk1065', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event279
    }
}

void Step1_Npc_Bottle_Mes001_Near() {
    Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 200, 'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/Zora_MessageBottle:near1003', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void Step1_Npc_Bottle_Mes001_Talk() {
    Obj_RaftWood_A_02.EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Zora_MessageBottle_TalkFlag', 'Index': -1}) {

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 3})

        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 11, 'ChoiceLabel2': 12, 'ChoiceNumber': 3, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Zora_MessageBottle:talk1070', 'ChoiceLabel3': 20, 'IsNotOpenIfSkipedMostRecent': False})
        Event62:
        switch GameSystemActor.EventQueryTalkChoice3() {
          case 0:
            Event182:
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Zora_MessageBottle_TalkFlag', 'Index': -1}) {
                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 5, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Zora_MessageBottle:talk1010', 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 5, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Zora_MessageBottle:talk1068', 'IsNotOpenIfSkipedMostRecent': False})
            }
            Obj_RaftWood_A_02.EventTriggerParticipateEvent()
            if !Obj_RaftWood_A_02.EventQueryActorIsRotYTiltOverAngle({'Angle': 30.0}) {

                call Camera_Chair({'MessageId': 'EventFlowMsg/Zora_MessageBottle:talk1073'})

                Event192:
                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Zora_MessageBottle:talk1032', 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsNotOpenIfSkipedMostRecent': False})
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Zora_MessageBottle_TalkFlag', 'Index': -1, 'Value': True})
                Event459:
                Obj_RaftWood_A_02.EventTriggerErasePauseMask()
            } else
            if !Obj_RaftWood_A_02.EventQueryCheckNoObjectDirY({'Length': 1.5, 'Radius': 0.4000000059604645, 'Offest': [0.628000020980835, 0.906000018119812, -2.697000026702881]}) {

                call Camera_Chair({'MessageId': 'EventFlowMsg/Zora_MessageBottle:talk1033'})

                goto Event192
            } else {

                call GetOn()

                goto Event459
            }
          case 1:
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 5, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Zora_MessageBottle:talk1011', 'IsNotOpenIfSkipedMostRecent': False})

            call Camera_Start({'MessageId': 'EventFlowMsg/Zora_MessageBottle:talk1012'})

            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 5, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Zora_MessageBottle:talk1013', 'IsNotOpenIfSkipedMostRecent': False})
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Zora_MessageBottle_TalkFlag', 'Index': -1}) {
                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 11, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Zora_MessageBottle:talk1023', 'ChoiceLabel2': 20, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 11, 'ChoiceLabel2': 13, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Zora_MessageBottle:talk1009', 'IsNotOpenIfSkipedMostRecent': False})
            }
            if !GameSystemActor.EventQueryTalkChoice2() {

                call TryToGetOn()

            } else {

                call GoodBye()

            }
          case 2:
            Event51:
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Zora_MessageBottle_TalkFlag', 'Index': -1}) {
                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 5, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Zora_MessageBottle:talk1069', 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 5, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Zora_MessageBottle:talk1014', 'IsNotOpenIfSkipedMostRecent': False})
            }
            Obj_RaftWood_A_02.EventTriggerErasePauseMask()
        }
    } else {

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 0})

        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 11, 'ChoiceLabel2': 12, 'ChoiceLabel3': 13, 'ChoiceNumber': 3, 'MessageId': 'EventFlowMsg/Zora_MessageBottle:talk1009', 'ChoiceCancelNo': 0, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Bottle_Mes001[J-5].EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'FaceControlType': 1, 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        goto Event62
    }
}

void Ready_Npc_Zora026_J-5_Near() {
    Event54:
    Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 200, 'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/Zora_MessageBottle:near1002', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void Ready_Npc_Zora026_J-5_Talk() {
    Event56:

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 5, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Zora_MessageBottle:talk1015', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 5, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Zora_MessageBottle:talk1008', 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Step1_Npc_Zora026_J-5_Near() {

    call Ready_Npc_Zora026_J-5_Near()

}

void Step1_Npc_Zora026_J-5_Talk() {

    call Ready_Npc_Zora026_J-5_Talk()

}

void Step2_Npc_Bottle_Mes001_J-5_Near() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Zora_MessageBottle_Boarding', 'Index': -1}) {
        ;
    } else {

        call Step1_Npc_Bottle_Mes001_Near()

    }
}

void Step2_Npc_Bottle_Mes001_J-5_Talk() {
    if !Npc_EventStarter.EventQueryIsFollowToTargetActor({'ActorName': 'Obj_RaftWood_A_02', 'InstanceName': ''}) {
        Obj_RaftWood_A_02.EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})

        call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Zora_MessageBottle_NoRaft'}) {
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 3, 'MessageId': 'EventFlowMsg/Zora_MessageBottle:talk1016', 'ChoiceLabel1': 14, 'ChoiceLabel2': 15, 'ChoiceLabel3': 16, 'ChoiceCancelNo': 0, 'IsNotOpenIfSkipedMostRecent': False})
            switch GameSystemActor.EventQueryTalkChoice3() {
              case 0:
                Event206:
                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 5, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Zora_MessageBottle:talk1018', 'IsNotOpenIfSkipedMostRecent': False})

                call Camera_Raft({'MessageId': 'EventFlowMsg/Zora_MessageBottle:talk1019'})

                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 5, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Zora_MessageBottle:talk1020', 'IsNotOpenIfSkipedMostRecent': False})
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Zora_MessageBottle_NoRaft'}) {
                    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Zora_MessageBottle:talk1022', 'ChoiceNumber': 2, 'ChoiceLabel1': 15, 'ChoiceLabel2': 16, 'ChoiceCancelNo': 0, 'IsNotOpenIfSkipedMostRecent': False})
                    if !GameSystemActor.EventQueryTalkChoice2() {
                        Event205:
                        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 5, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Zora_MessageBottle:talk1017', 'IsNotOpenIfSkipedMostRecent': False})
                        GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Zora_MessageBottle_ReturnTalk', 'Index': -1, 'Value': 3})
                        Event316:

                        call Zora_MessageBottle_ReadyReset()

                    } else {

                        call GoodBye2()

                    }
                } else {
                    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Zora_MessageBottle:talk1022', 'ChoiceNumber': 2, 'ChoiceLabel2': 16, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 21, 'IsNotOpenIfSkipedMostRecent': False})
                    if !GameSystemActor.EventQueryTalkChoice2() {
                        Event204:
                        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 5, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Zora_MessageBottle:talk1071', 'IsNotOpenIfSkipedMostRecent': False})
                        GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Zora_MessageBottle_ReturnTalk', 'Index': -1, 'Value': 4})
                        goto Event316
                    } else {

                        call GoodBye2()

                    }
                }
              case 1:
                goto Event205
              case 2:
                Event67:
                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 5, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Zora_MessageBottle:talk1021', 'IsNotOpenIfSkipedMostRecent': False})
                Obj_RaftWood_A_02.EventTriggerErasePauseMask()
            }
        } else {
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 3, 'MessageId': 'EventFlowMsg/Zora_MessageBottle:talk1016', 'ChoiceLabel1': 14, 'ChoiceLabel3': 16, 'ChoiceCancelNo': 0, 'ChoiceLabel2': 21, 'IsNotOpenIfSkipedMostRecent': False})
            switch GameSystemActor.EventQueryTalkChoice3() {
              case 0:
                goto Event206
              case 1:
                goto Event204
              case 2:
                goto Event67
            }
        }
    } else {

        call Step1_Npc_Bottle_Mes001_Talk()

    }
}

void Step3_Npc_Bottle_Mes001_J-5_Talk() {
    Event247:

    call InitTalk.InitTalk_Pair({'Arg_Turn': 4, 'Arg_Greeting': 4, 'Actor1': ActorIdentifier(name="Npc_Bottle_Mes001", sub_name="J-5"), 'Spearker1ActorName': 'Npc_Bottle_Mes001', 'Actor2': ActorIdentifier(name="Npc_Zora026", sub_name="J-5"), 'Spearker2ActorName': 'Npc_Zora026', 'Spearker1InstanceName': 'J-5', 'Spearker2InstanceName': 'J-5'})

    if !PouchSystemActor.EventQueryCanAddToPorch({'Num': 2, 'Actor': 'Item_Ore_E'}) {
        Npc_Bottle_Mes001[J-5].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 5, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Zora_MessageBottle:talk1039', 'IsNotOpenIfSkipedMostRecent': False})

        call PrizeGet()

    } else {
        Npc_Bottle_Mes001[J-5].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 5, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Zora_MessageBottle:talk1037', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Zora026[J-5].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 5, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Zora_MessageBottle:talk1038', 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void NearActorsTalk() {
    goto Event247
}

void NearActorsNear() {
    Npc_Bottle_Mes001[J-5].EventTriggerBalloonMessage({'DisplayFrame': 200, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Zora_MessageBottle:near1004', 'IsChallenge': True, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void Step3_Npc_Zora026_J-5_Talk() {
    goto Event247
}

void GetOn() {
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'Zora_MessageBottle', 'StepName': 'Step2', 'IsIgnoreChallengeProgressUI': True, 'IsWaitEnd': True})
    if Player.EventQueryPlayerCheckRideHorse({'IsRidingAny': True, 'Type': 0, 'ActorFileName': ''}) {
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Wait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    }
    Player.EventTriggerPlayerRequestLookAtTheFrontLock()
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Npc_Bottle_Mes001[J-5].EventFollowToTargetActor({'IsWaitEnd': True, 'Posture': 2, 'XZDegOffset': 0.0, 'ActorName': 'Obj_RaftWood_A_02', 'InstanceName': '', 'PositionOffset': [0.628000020980835, 0.26600000262260437, -2.296999931335449]})
    Npc_Bottle_Mes001[J-5].EventPlayAS({'ASName': 'Act_SitChair_Wait', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Zora_MessageBottle_TalkFlag', 'Index': -1, 'Value': True})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Zora_MessageBottle_Boarding'})
}

void Zora_MessageBottle_Hand() {
    Obj_RaftWood_A_02.EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})

    call AirCheck()


    call CheckFaceUpCamera()

    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 5, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Zora_MessageBottle:talk1040', 'IsNotOpenIfSkipedMostRecent': False})
    Obj_RaftWood_A_02.EventTriggerErasePauseMask()

    call CheckFaceUpCamera_Return()

}

void Zora_MessageBottle_Tilt() {

    call Irregular({'Value': 2, 'MessageId': 'EventFlowMsg/Zora_MessageBottle:talk1041'})

}

void Zora_MessageBottle_Reset() {
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
    Npc_Bottle_Mes001[J-5].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
    Npc_Bottle_Mes001[J-5].EventCancelFollowToTargetActor({'IsWaitEnd': True, 'ASName': 'SitGetUp', 'ActorName': 'Obj_RaftWood_A_02', 'InstanceName': ''})
    Npc_Bottle_Mes001[J-5].EventWait({'IsWaitEnd': True, 'Frames': 1})
    Npc_Bottle_Mes001[J-5].EventTriggerNPCChangePosture({'Posture': 0, 'IsPlayCurrentAS': False})
    Npc_Bottle_Mes001[J-5].EventWait({'Frames': 1, 'IsWaitEnd': True})
    Npc_Bottle_Mes001[J-5].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'AnchorType': 0, 'ActionType': 0, 'InstanceName': 'Mes001', 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    Player.EventPlayerWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'InstanceName': 'MessageBottle_PlayerReset', 'UseDemoWait': True})
    GameSystemActor.EventClearActorsAroundAnchor({'IsWaitEnd': True, 'AnchorActorName': 'DestinationAnchor', 'Radius': 4.0, 'Height': 3.0, 'IsSweepOut': True, 'AnchorInstanceName': 'MessageBottle_RaftReset', 'IsExcludePlacedAroundAnchor': True, 'IsDeleteActor': True})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Zora_MessageBottle_IsDestroyed', 'Index': -1}) {
        Event173:
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Zora_MessageBottle_IsReset', 'Value': True})
        GameSystemActor.EventResetGimmick({'IsWaitEnd': True, 'IsResetCamera': True, 'Option': 0})
        Event367:
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        Event168:
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Zora_MessageBottle_IsAfter_Step1_Exp'}) {
            ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'StepName': 'Step1', 'ChallengeName': 'Zora_MessageBottle', 'IsIgnoreChallengeProgressUI': True})
        }
        Npc_Bottle_Mes001[J-5].EventTriggerBecomeSpeaker()

        call CameraReset()

        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Zora_MessageBottle_IsReset'})
        Npc_Bottle_Mes001[J-5].EventNPCTurnToTarget({'IsWaitEnd': True, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Target': 3, 'FaceControlType': 1, 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'ActorName': 'Player', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Player.EventPlayerUnequip({'IsWaitEnd': True})
        Player.EventPlayerTalk({'IsWaitEnd': True, 'HelloType': 0})
        Player.EventTriggerPlayerLookAtObject({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1, 'ActorName': 'Npc_Bottle_Mes001', 'InstanceName': 'J-5'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        GameSystemActor.EventRequestSoulSageLightOrb({'IsWaitEnd': True})
        GameSystemActor.EventEventCircleWipeFadeIn({'IsWaitEnd': True})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        switch GameDataActor.EventQueryIsGameDataInt({'Value': 1, 'Index': -1, 'GameDataName': 'Zora_MessageBottle_ReturnTalk'}) {
          case 0:
            Npc_Bottle_Mes001[J-5].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 5, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Zora_MessageBottle:talk1059', 'IsNotOpenIfSkipedMostRecent': False})
            Event234:
            GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Zora_MessageBottle_CameraPos', 'Index': -1, 'Value': 0})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Zora_MessageBottle_Boarding', 'Value': False})
          case 1:
            Npc_Bottle_Mes001[J-5].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 5, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Zora_MessageBottle:talk1058', 'IsNotOpenIfSkipedMostRecent': False})
            goto Event234
          case 2:
            switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'Zora_MessageBottle_ReturnTalk', 'Value': 3}) {
              case 0:
                Npc_Bottle_Mes001[J-5].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 5, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Zora_MessageBottle:talk1047', 'IsNotOpenIfSkipedMostRecent': False})
                goto Event234
              case 1:
                Npc_Bottle_Mes001[J-5].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 5, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Zora_MessageBottle:talk1034', 'IsNotOpenIfSkipedMostRecent': False})
                goto Event234
              case 2:
                switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'Zora_MessageBottle_ReturnTalk', 'Value': 5}) {
                  case 0:
                    Npc_Bottle_Mes001[J-5].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 5, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Zora_MessageBottle:talk1072', 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event234
                  case 1:
                    Npc_Bottle_Mes001[J-5].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 5, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Zora_MessageBottle:talk1076', 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event234
                  case 2:
                    Npc_Bottle_Mes001[J-5].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 5, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Zora_MessageBottle:talk1077', 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event234
                }
            }
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Zora_MessageBottle_IsBurned', 'Index': -1}) {
        Event461:
        Obj_RaftWood_A_02.EventTriggerErasePauseMask()
        Obj_RaftWood_A_02.EventTriggerCombinedActorDeleteAll()
        goto Event173
    } else
    if !Obj_RaftWood_A_02.EventQueryWarpToSafeSpaceWithCombinedActor({'EndHeightOffset': -1.0, 'IsEnableHitPlayer': True, 'BasePos': [4470.60888671875, 141.1851043701172, 806.1671142578125], 'BaseRot': [-179.27459716796875, -6.299961090087891, -179.3383026123047], 'StartHeightOffset': 0.800000011920929, 'IsEnableFailDelete': True}) {
        Obj_RaftWood_A_02.EventTriggerErasePauseMask()
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        Obj_RaftWood_A_02.EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})
        GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
        goto Event367
    } else {
        goto Event461
    }
}

void Zora_MessageBottle_Escape() {
    Obj_RaftWood_A_02.EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})

    call AirCheck()


    call CheckFaceUpCamera()

    Npc_Bottle_Mes001[J-5].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 5, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Zora_MessageBottle:talk1044', 'IsNotOpenIfSkipedMostRecent': False})
    GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Zora_MessageBottle_ReturnTalk', 'Value': 1, 'Index': -1})

    call Zora_MessageBottle_ReadyReset()

}

void Zora_MessageBottle_Area_Warning() {
    Obj_RaftWood_A_02.EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})

    call AirCheck()


    call CheckFaceUpCamera()

    Npc_Bottle_Mes001[J-5].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 5, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Zora_MessageBottle:talk1043', 'IsNotOpenIfSkipedMostRecent': False})
    Obj_RaftWood_A_02.EventTriggerErasePauseMask()

    call CheckFaceUpCamera_Return()

}

void Zora_MessageBottle_Warning() {
    switch Npc_Bottle_Mes001[J-5].EventQueryOwningObjectPlayerInterference({'IsCheckBrokenInterferedOnly': False}) {
      case [0, 1, 2, 3, 4, 5, 7]:

        call AirCheck()


        call CheckFaceUpCamera()

        Npc_Bottle_Mes001[J-5].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 5, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Zora_MessageBottle:talk1045', 'IsNotOpenIfSkipedMostRecent': False})

        call CheckFaceUpCamera_Return()

      case 6:

        call AirCheck()


        call CheckFaceUpCamera()

        Npc_Bottle_Mes001[J-5].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 5, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Zora_MessageBottle:talk1078', 'IsNotOpenIfSkipedMostRecent': False})

        call CheckFaceUpCamera_Return()

      case 8:
        EventSystemActor.EventTransition({'FadeInTypeEventEnd': 2, 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Zora_MessageBottle_Burned'})
      case 9:
        EventSystemActor.EventTransition({'FadeInTypeEventEnd': 2, 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Zora_MessageBottle_Destroyed'})
    }
}

void Zora_MessageBottle_ReadyReset() {

    call StopBgm()

    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    if !Player.EventQueryPlayerCheckRideHorse({'IsRidingAny': True, 'Type': 0, 'ActorFileName': ''}) {
        Player.EventTriggerParticipateEvent()
        Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
        Event137:
        GameSystemActor.EventWait({'Frames': 5, 'IsWaitEnd': True})

        call Zora_MessageBottle_Reset()

    } else {
        goto Event137
    }
}

void Zora_MessageBottle_Drown() {

    call Irregular({'MessageId': 'EventFlowMsg/Zora_MessageBottle:talk1046', 'Value': 2})

}

void Zora_MessageBottle_Clear() {
    Obj_RaftWood_A_02.EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})

    call AirCheck()


    call CheckFaceUpCamera()


    call StopBgm_Manual()

    Npc_Bottle_Mes001[J-5].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 5, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Zora_MessageBottle:talk1035', 'IsNotOpenIfSkipedMostRecent': False})

    call MessageBottle_InitTalkOnEvent()

    Npc_Zora026[J-5].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 5, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Zora_MessageBottle:talk1056', 'ASName': 'Act_MessageBottle_Clear_Talk', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Bottle_Mes001[J-5].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 5, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Zora_MessageBottle:talk1024', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Zora026[J-5].EventNPCTurnToTarget({'FaceControlType': 0, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'Target': 0, 'WorldPos': [4412.0, 144.0, 607.0], 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_Zora026[J-5].EventTriggerLookAtObject({'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 0, 'WorldPos': [4412.0, 144.0, 607.0], 'ResetArriveTransformFixed': False})
    Npc_Bottle_Mes001[J-5].EventNPCTurnToTarget({'FaceControlType': 0, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'Target': 0, 'WorldPos': [4412.0, 144.0, 607.0], 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Player.EventTriggerPlayerLookAtObject({'TurnFaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 0, 'WorldPos': [4412.0, 144.0, 607.0], 'ActorName': '', 'InstanceName': ''})
    EventCamera.EventTriggerCameraSavePoint()

    call StartBgm_WithFade()

    EventCamera.EventMoveToTargetPosCamera({'IsPosVectorReferenceActorPosOnce': True, 'MoveTime': 30, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'IsWaitEnd': True, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsAtVectorReferenceActorPosOnce': True, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [4424.47998046875, 140.3300018310547, 620.260009765625], 'AtVector': [4418.66015625, 143.00999450683594, 615.0999755859375], 'TargetFovy': 40.0, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Npc_Zora026[J-5].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 5, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Zora_MessageBottle:talk1025', 'IsNotOpenIfSkipedMostRecent': False})
    EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
    EventCamera.EventSendMultiEventTalkMessageToPlayerCamera({'Speaker1SetType': 1, 'Spearker1ActorName': 'Npc_Bottle_Mes001', 'Spearker1InstanceName': 'J-5', 'Speaker2SetType': 1, 'Spearker2ActorName': 'Npc_Zora026', 'Spearker2InstanceName': 'J-5', 'IsWaitEnd': False, 'Speaker3SetType': 0, 'Spearker3ActorName': '', 'Spearker3InstanceName': '', 'Speaker4SetType': 0, 'Spearker4ActorName': '', 'Spearker4InstanceName': ''})

    fork {
        Npc_Bottle_Mes001[J-5].EventNPCTurnToTarget({'FaceControlType': 0, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'Target': 3, 'ActorName': 'Npc_Zora026', 'InstanceName': 'J-5', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_Bottle_Mes001[J-5].EventTriggerLookAtObject({'Target': 3, 'ActorName': 'Npc_Zora026', 'InstanceName': 'J-5', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    } {
        Npc_Zora026[J-5].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
        Npc_Zora026[J-5].EventNPCTurnToTarget({'FaceControlType': 0, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'Target': 3, 'ActorName': 'Npc_Bottle_Mes001', 'InstanceName': 'J-5', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_Zora026[J-5].EventTriggerLookAtObject({'ActorName': 'Npc_Bottle_Mes001', 'InstanceName': 'J-5', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'ResetArriveTransformFixed': False})
    }

    Player.EventTriggerPlayerRequestLookAtTheFront()
    Npc_Zora026[J-5].EventTalk({'MessageId': 'EventFlowMsg/Zora_MessageBottle:talk1025_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': 'Act_MessageBottle_Clear_Talk', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Bottle_Mes001[J-5].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 5, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Zora_MessageBottle:talk1026', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Zora026[J-5].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 5, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Zora_MessageBottle:talk1027', 'ASName': 'Act_MessageBottle_Clear_Talk', 'IsNotOpenIfSkipedMostRecent': False})

    fork {
        Npc_Bottle_Mes001[J-5].EventNPCTurnToTarget({'Target': 2, 'FaceControlType': 0, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_Bottle_Mes001[J-5].EventTriggerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 2, 'ActorName': '', 'InstanceName': '', 'ResetArriveTransformFixed': False})
    } {
        Npc_Zora026[J-5].EventNPCTurnToTarget({'Target': 2, 'FaceControlType': 0, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_Zora026[J-5].EventTriggerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 2, 'ActorName': '', 'InstanceName': '', 'ResetArriveTransformFixed': False})
    }

    Npc_Bottle_Mes001[J-5].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 5, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Zora_MessageBottle:talk1028', 'IsNotOpenIfSkipedMostRecent': False})
    if !PouchSystemActor.EventQueryCanAddToPorch({'Num': 2, 'Actor': 'Item_Ore_E'}) {
        Event225:

        call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Item_Ore_E'})

        Npc_Bottle_Mes001[J-5].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 5, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Zora_MessageBottle:talk1029', 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Zora_MessageBottle_GetReward_01', 'Index': -1, 'Value': True})
        Npc_Zora026[J-5].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 5, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Zora_MessageBottle:talk1090', 'IsNotOpenIfSkipedMostRecent': False})

        call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Item_Ore_E'})

        Npc_Zora026[J-5].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 5, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Zora_MessageBottle:talk1095', 'IsNotOpenIfSkipedMostRecent': False})

        fork {
            Npc_Bottle_Mes001[J-5].EventNPCTurnToTarget({'FaceControlType': 0, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'Target': 3, 'ActorName': 'Npc_Zora026', 'InstanceName': 'J-5', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            Npc_Bottle_Mes001[J-5].EventTriggerLookAtObject({'Target': 3, 'ActorName': 'Npc_Zora026', 'InstanceName': 'J-5', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        } {
            Npc_Zora026[J-5].EventNPCTurnToTarget({'FaceControlType': 0, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'Target': 3, 'ActorName': 'Npc_Bottle_Mes001', 'InstanceName': 'J-5', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            Npc_Zora026[J-5].EventTriggerLookAtObject({'ActorName': 'Npc_Bottle_Mes001', 'InstanceName': 'J-5', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'ResetArriveTransformFixed': False})
            Npc_Zora026[J-5].EventPlayAS({'IsAnimeDriven': False, 'ASName': 'Act_MessageBottle_Clear_Talk', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
        }

        Npc_Bottle_Mes001[J-5].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 5, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Zora_MessageBottle:talk1052', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Zora026[J-5].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 5, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Zora_MessageBottle:talk1030', 'ASName': 'Act_MessageBottle_Clear_Talk', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Bottle_Mes001[J-5].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 5, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Zora_MessageBottle:talk1057', 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Bottle_Mes001_ClearTalk'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'Zora_MessageBottle', 'IsIgnoreCompletedChallenge': False, 'StepName': 'Complete'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    } else {
        Npc_Bottle_Mes001[J-5].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 5, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Zora_MessageBottle:talk1036', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Zora026[J-5].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 5, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Zora_MessageBottle:talk1038', 'IsNotOpenIfSkipedMostRecent': False})
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'Zora_MessageBottle', 'StepName': 'GetPrize', 'IsWaitEnd': True, 'IsIgnoreChallengeProgressUI': False})
    }
}

void MessageBottle_InitTalkOnEvent() {
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    fork {
        if !Player.EventQueryPlayerCheckRideHorse({'IsRidingAny': True, 'Type': 0, 'ActorFileName': ''}) {
            Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
        }
        Player.EventPlayerWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'InstanceName': 'MessageBottle_PlayerGoal', 'UseDemoWait': True})
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'Talk', 'ClothWarpMode': 0})
    } {
        Npc_Bottle_Mes001[J-5].EventCancelFollowToTargetActor({'IsWaitEnd': True, 'ASName': 'SitGetUp', 'ActorName': 'Obj_RaftWood_A_02', 'InstanceName': ''})
        Npc_Bottle_Mes001[J-5].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': 'Mes001', 'ActionType': 1, 'AnchorType': 2, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
        if !Npc_Bottle_Mes001[J-5].EventQueryHasControllerSet() {
            Npc_Bottle_Mes001[J-5].EventNPCTurnToTarget({'FaceControlType': 0, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'Target': 3, 'ActorName': 'Npc_Zora026', 'InstanceName': 'J-5', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            Npc_Bottle_Mes001[J-5].EventTriggerLookAtObject({'Target': 3, 'ActorName': 'Npc_Zora026', 'InstanceName': 'J-5', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        }
    } {
        Npc_Zora026[J-5].EventTriggerParticipateEvent()
        Npc_Zora026[J-5].EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': False})
        Npc_Zora026[J-5].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'ActionType': 1, 'AnchorType': 2, 'InstanceName': 'Zora026', 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
        if !Npc_Zora026[J-5].EventQueryHasControllerSet() {
            Npc_Zora026[J-5].EventTriggerLookAtObject({'ActorName': 'Npc_Bottle_Mes001', 'InstanceName': 'J-5', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'ResetArriveTransformFixed': False})
            Npc_Zora026[J-5].EventPlayAS({'IsAnimeDriven': False, 'ASName': 'Act_MessageBottle_Clear_Talk', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': 0.0})
        }
    }

    EventCamera.EventMoveToTargetPosCamera({'PosVectorSetType': 3, 'AtVectorSetType': 3, 'MoveTotargetPosType': 1, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'Actor1ActorName': 'Player', 'AtVector': [0.0, 1.0, 1.0], 'TargetFovy': 40.0, 'PosVector': [-3.5, 1.5, -1.0], 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventCamera.EventSendMultiEventTalkMessageToPlayerCamera({'Speaker1SetType': 1, 'Spearker1ActorName': 'Npc_Bottle_Mes001', 'Spearker1InstanceName': 'J-5', 'Speaker2SetType': 1, 'Spearker2ActorName': 'Npc_Zora026', 'Spearker2InstanceName': 'J-5', 'IsWaitEnd': False, 'Speaker3SetType': 0, 'Spearker3ActorName': '', 'Spearker3InstanceName': '', 'Speaker4SetType': 0, 'Spearker4ActorName': '', 'Spearker4InstanceName': ''})
    Player.EventTriggerPlayerRequestLookAtTheFront()
    Obj_RaftWood_A_02.EventTriggerCombinedActorDeleteAll()
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
}

void Zora_MessageBottle_Fall() {

    call Irregular({'Value': 2, 'MessageId': 'EventFlowMsg/Zora_MessageBottle:talk1042'})

}

void Wipe() {

    fork {
        Npc_Bottle_Mes001[J-5].EventTriggerChangeEmotion({'IsActFaceOnly': False, 'EmotionType': 4})
    } {
        Npc_Bottle_Mes001[J-5].EventTriggerRequestLookAtTheFront()
        Npc_Bottle_Mes001[J-5].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Notice'})
    } {
        EventCamera.EventBasedOnLookAtCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTime': 30, 'LookAtVectorXZ': 1, 'LookAtVectorY': 1, 'TargetActorName': 'Npc_Bottle_Mes001', 'TargetActorInstanceName': 'J-5', 'ToleranceDistance': 0.0, 'ToleranceXZAngle': 0.0, 'ToleranceYUpwardAngle': 0.0, 'ToleranceYDownwardAngle': 0.0, 'IdealDistance': 1.5, 'CameraCollisionMode': 0, 'TargetOffset': [-0.02500000037252903, 1.4500000476837158, 0.0], 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        GameSystemActor.EventEventCircleWipeFadeOutFirst({'IsWaitEnd': True})
    }

}

void Camera_Start() {
    Npc_Bottle_Mes001[J-5].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
    EventCamera.EventTriggerCameraSavePoint()
    Npc_Bottle_Mes001[J-5].EventNPCTurnToTarget({'IsConfront': True, 'OffsetBase': 1, 'FaceControlType': 0, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': 'Cave_Lanayru_0036_Point1', 'ActorName': 'DestinationAnchor', 'Target': 5, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Player.EventTriggerPlayerLookAtObject({'Target': 5, 'ActorName': 'DestinationAnchor', 'InstanceName': 'Cave_Lanayru_0036_Point1', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
    EventCamera.EventMoveToTargetPosCamera({'IsPosVectorReferenceActorPosOnce': True, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsAtVectorReferenceActorPosOnce': True, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 30, 'PosVector': [4480.18017578125, 143.5, 802.0599975585938], 'AtVector': [4479.02001953125, 143.4600067138672, 798.22998046875], 'TargetFovy': 50.0, 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 5, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'MessageId', 'IsNotOpenIfSkipedMostRecent': False})
    EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
    Npc_Bottle_Mes001[J-5].EventNPCTurnToTarget({'IsConfront': True, 'OffsetBase': 1, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 2, 'ActorName': '', 'InstanceName': '', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'FaceControlType': 1, 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Player.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Bottle_Mes001', 'InstanceName': 'J-5', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
}

void Zora_MessageBottle_Steal() {

    call AirCheck()

    Obj_RaftWood_A_02.EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})

    call CheckFaceUpCamera()

    Npc_Bottle_Mes001[J-5].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 5, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Zora_MessageBottle:talk1048', 'IsNotOpenIfSkipedMostRecent': False})
    GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Zora_MessageBottle_ReturnTalk', 'Value': 0, 'Index': -1})

    call Zora_MessageBottle_ReadyReset()

}

void Camera_Raft() {
    Npc_Bottle_Mes001[J-5].EventTriggerRequestLookAtTheFront()
    Npc_Bottle_Mes001[J-5].EventCancelFollowToTargetActor({'IsWaitEnd': True, 'ASName': 'SitGetUp', 'ActorName': 'Obj_RaftWood_A_02', 'InstanceName': ''})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})

    call Camera()

    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 5, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'MessageId', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Bottle_Mes001[J-5].EventFollowToTargetActor({'IsWaitEnd': True, 'Posture': 2, 'XZDegOffset': 0.0, 'ActorName': 'Obj_RaftWood_A_02', 'InstanceName': '', 'PositionOffset': [0.628000020980835, 0.26600000262260437, -2.296999931335449]})
    Npc_Bottle_Mes001[J-5].EventPlayAS({'ASName': 'Act_SitChair_Wait', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': 0.0})
    EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
    Npc_Bottle_Mes001[J-5].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    Player.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Bottle_Mes001', 'InstanceName': 'J-5', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1})
}

void Camera() {
    Npc_Bottle_Mes001[J-5].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
    EventCamera.EventTriggerCameraSavePoint()
    switch GameDataActor.EventQueryIsGameDataInt({'Value': 1, 'GameDataName': 'Zora_MessageBottle_CameraPos', 'Index': -1}) {
      case 0:
        Npc_Bottle_Mes001[J-5].EventNPCTurnToTarget({'IsConfront': True, 'OffsetBase': 1, 'FaceControlType': 0, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': 'Cave_Lanayru_0036_Point1', 'ActorName': 'DestinationAnchor', 'Target': 5, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Player.EventTriggerPlayerLookAtObject({'Target': 5, 'ActorName': 'DestinationAnchor', 'InstanceName': 'Cave_Lanayru_0036_Point1', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
        EventCamera.EventMoveToTargetPosCamera({'IsPosVectorReferenceActorPosOnce': True, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsAtVectorReferenceActorPosOnce': True, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 30, 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'PosVector': [4476.02978515625, 142.22000122070312, 770.4199829101562], 'AtVector': [4473.77001953125, 141.7899932861328, 765.2899780273438], 'TargetFovy': 50.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
      case 1:
        Npc_Bottle_Mes001[J-5].EventNPCTurnToTarget({'IsConfront': True, 'OffsetBase': 1, 'FaceControlType': 0, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': 'Cave_Lanayru_0036_Point2', 'ActorName': 'DestinationAnchor', 'Target': 5, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Player.EventTriggerPlayerLookAtObject({'Target': 5, 'ActorName': 'DestinationAnchor', 'InstanceName': 'Cave_Lanayru_0036_Point2', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
        EventCamera.EventMoveToTargetPosCamera({'IsPosVectorReferenceActorPosOnce': True, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsAtVectorReferenceActorPosOnce': True, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 30, 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'PosVector': [4451.4599609375, 140.86000061035156, 721.7999877929688], 'AtVector': [4449.990234375, 140.52000427246094, 717.8599853515625], 'TargetFovy': 50.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
      case 2:
        if !GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'Zora_MessageBottle_CameraPos', 'Index': -1, 'Value': 3}) {
            Npc_Bottle_Mes001[J-5].EventNPCTurnToTarget({'IsConfront': True, 'OffsetBase': 1, 'FaceControlType': 0, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'DestinationAnchor', 'InstanceName': 'MessageBottle_PlayerGoal', 'Target': 5, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            Player.EventTriggerPlayerLookAtObject({'Target': 5, 'ActorName': 'DestinationAnchor', 'InstanceName': 'MessageBottle_PlayerGoal', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
            EventCamera.EventMoveToTargetPosCamera({'IsPosVectorReferenceActorPosOnce': True, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsAtVectorReferenceActorPosOnce': True, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 30, 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'PosVector': [4430.27978515625, 142.4600067138672, 680.719970703125], 'AtVector': [4429.22021484375, 142.19000244140625, 676.530029296875], 'TargetFovy': 50.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        } else {
            Npc_Bottle_Mes001[J-5].EventNPCTurnToTarget({'IsConfront': True, 'OffsetBase': 1, 'FaceControlType': 0, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'DestinationAnchor', 'InstanceName': 'MessageBottle_PlayerGoal', 'Target': 5, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            Player.EventTriggerPlayerLookAtObject({'Target': 5, 'ActorName': 'DestinationAnchor', 'InstanceName': 'MessageBottle_PlayerGoal', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
            EventCamera.EventMoveToTargetPosCamera({'IsPosVectorReferenceActorPosOnce': True, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsAtVectorReferenceActorPosOnce': True, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 30, 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'PosVector': [4419.740234375, 142.4600067138672, 643.739990234375], 'AtVector': [4418.68994140625, 142.19000244140625, 639.5499877929688], 'TargetFovy': 50.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        }
    }
}

void Step0_Npc_Bottle_Mes001_J-5_Near() {
    Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 200, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Zora_MessageBottle:near1001', 'IsChallenge': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void Step0_Npc_Bottle_Mes001_J-5_Talk() {
    goto Event58
}

void Step0_Npc_Zora026_J-5_Near() {
    goto Event54
}

void Step0_Npc_Zora026_J-5_Talk() {
    goto Event56
}

void CameraReset() {
    EventCamera.EventMoveToTargetPosCamera({'PosVectorSetType': 3, 'AtVectorSetType': 3, 'MoveTotargetPosType': 1, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'Actor1ActorName': 'Player', 'AtVector': [0.0, 1.0, 1.0], 'TargetFovy': 40.0, 'PosVector': [-3.5, 1.5, -1.0], 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
}

void TryToGetOn() {
    goto Event182
}

void GoodBye() {
    goto Event51
}

void PrizeGet() {
    goto Event225
}

void Camera_Chair() {
    EventCamera.EventTriggerCameraSavePoint()
    Npc_Bottle_Mes001[J-5].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
    Npc_Bottle_Mes001[J-5].EventNPCTurnToTarget({'IsConfront': True, 'OffsetBase': 1, 'IsWaitEnd': True, 'Direction': 0.0, 'Target': 3, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'FaceControlType': 1, 'ActorName': 'Obj_RaftWood_A_02', 'InstanceName': '', 'PosOffset': [0.628000020980835, 0.25600001215934753, -2.796999931335449], 'WorldPos': [0.0, 0.0, 0.0], 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Player.EventTriggerPlayerLookAtObject({'Target': 3, 'TurnFaceControlType': 1, 'Direction': 0.0, 'ActorName': 'Obj_RaftWood_A_02', 'InstanceName': '', 'PosOffset': [0.628000020980835, 0.25600001215934753, -2.796999931335449], 'WorldPos': [0.0, 0.0, 0.0]})
    EventCamera.EventMoveToTargetPosCamera({'PosVectorSetType': 3, 'IsPosVectorReferenceActorPosOnce': True, 'MoveTime': 30, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'IsWaitEnd': True, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'TargetFovy': 50.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsAtVectorReferenceActorPosOnce': True, 'PosVector': [0.0, 4.0, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_Bottle_Mes001', 'Actor1InstanceName': 'J-5', 'AtVectorSetType': 4, 'Actor2ActorName': 'Obj_RaftWood_A_02', 'Actor2InstanceName': '', 'AtVector': [0.628000020980835, 0.25600001215934753, -2.796999931335449], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 9, 'ChoiceLabel2': 10, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'MessageId': 'MessageId', 'IsNotOpenIfSkipedMostRecent': False})
    EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
    Npc_Bottle_Mes001[J-5].EventNPCTurnToTarget({'IsConfront': True, 'OffsetBase': 1, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 2, 'ActorName': '', 'InstanceName': '', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'FaceControlType': 1, 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Player.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Bottle_Mes001', 'InstanceName': 'J-5', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
}

void GoodBye2() {
    goto Event67
}

void Step1_Npc_Zora026_WaveHands__Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 5, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Zora_MessageBottle:talk1079', 'IsNotOpenIfSkipedMostRecent': False})
}

void Step1_Npc_Zora026_WaveHands__Near() {
    Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 200, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/Zora_MessageBottle:near1006', 'IsIgnoreDisplayKeepDepth': True, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void Zora_MessageBottle_Burned() {
    Npc_Bottle_Mes001[J-5].EventTriggerParticipateEvent()
    Obj_RaftWood_A_02.EventTriggerParticipateEvent()
    if !Npc_Bottle_Mes001[J-5].EventQueryIsFollowToTargetActor({'ActorName': 'Obj_RaftWood_A_02', 'InstanceName': ''}) {

        call Irregular({'MessageId': 'EventFlowMsg/Zora_MessageBottle:talk1074', 'Value': 5})

    } else {
        Obj_RaftWood_A_02.EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})

        call AirCheck_NoTurn()

        Npc_Bottle_Mes001[J-5].EventNPCTurnToTarget({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'ActorName': 'Obj_RaftWood_A_02', 'InstanceName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})

        call CheckFaceUpCamera()

        Npc_Bottle_Mes001[J-5].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 5, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Zora_MessageBottle:talk1074', 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Zora_MessageBottle_ReturnTalk', 'Index': -1, 'Value': 5})

        call Zora_MessageBottle_ReadyReset()

    }
}

void Irregular() {
    Obj_RaftWood_A_02.EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})

    call AirCheck()


    call Wipe()

    Npc_Bottle_Mes001[J-5].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 5, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'MessageId', 'ASName': 'Notice', 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventEventCircleWipeFadeOutSecond({'IsWaitEnd': True})
    GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Zora_MessageBottle_ReturnTalk', 'Index': -1, 'Value': 'Value'})

    call Zora_MessageBottle_ReadyReset()

}

void Zora_MessageBottle_Destroyed() {
    Npc_Bottle_Mes001[J-5].EventTriggerParticipateEvent()
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Zora_MessageBottle_Boarding', 'Index': -1}) {

        call Common.AirStartUP_Player()

        Npc_Bottle_Mes001[J-5].EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})

        fork {
            Npc_Bottle_Mes001[J-5].EventCancelFollowToTargetActor({'InstanceName': '', 'IsWaitEnd': False, 'ASName': 'SitGetUp', 'ActorName': 'Obj_RaftWood_A_02'})
            Npc_Bottle_Mes001[J-5].EventWait({'Frames': 1, 'IsWaitEnd': True})
            Npc_Bottle_Mes001[J-5].EventTriggerNPCChangePosture({'Posture': 0, 'IsPlayCurrentAS': False})
            Npc_Bottle_Mes001[J-5].EventWait({'Frames': 1, 'IsWaitEnd': True})
            Npc_Bottle_Mes001[J-5].EventPlayAS({'ASName': 'Crouch', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        } {
            GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        }

        Npc_Bottle_Mes001[J-5].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 5, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Zora_MessageBottle:talk1075', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
        Event360:
        GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Zora_MessageBottle_ReturnTalk', 'Index': -1, 'Value': 6})

        call StopBgm()

        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        Npc_Bottle_Mes001[J-5].EventTriggerErasePauseMask()
        if !Player.EventQueryPlayerCheckRideHorse({'IsRidingAny': True, 'Type': 0, 'ActorFileName': ''}) {
            Player.EventTriggerParticipateEvent()
            Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
            Event407:
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
            Npc_Bottle_Mes001[J-5].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
            Npc_Bottle_Mes001[J-5].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'AnchorType': 0, 'ActionType': 0, 'InstanceName': 'Mes001', 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
            Player.EventPlayerWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'InstanceName': 'MessageBottle_PlayerReset', 'UseDemoWait': True})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Zora_MessageBottle_IsReset', 'Value': True})
            GameSystemActor.EventClearActorsAroundAnchor({'IsWaitEnd': True, 'AnchorActorName': 'DestinationAnchor', 'Radius': 4.0, 'Height': 3.0, 'IsSweepOut': True, 'AnchorInstanceName': 'MessageBottle_RaftReset', 'IsExcludePlacedAroundAnchor': False, 'IsDeleteActor': True})
            GameSystemActor.EventResetGimmick({'IsWaitEnd': True, 'IsResetCamera': True, 'Option': 0})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})

            call ResetParam()

        } else {
            goto Event407
        }
    } else {

        call AirCheck_NoTurn()

        Npc_Bottle_Mes001[J-5].EventNPCTurnToTarget({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'Target': 2, 'ActorName': '', 'InstanceName': '', 'EnableAutomaticallyPlayWaitASAfterTurn': True})

        call CheckFaceUpCamera()

        Npc_Bottle_Mes001[J-5].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 5, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Zora_MessageBottle:talk1075', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event360
    }
}

void Camera_RaftAndChair() {
    EventCamera.EventTriggerCameraSavePoint()
    Npc_Bottle_Mes001[J-5].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
    Npc_Bottle_Mes001[J-5].EventNPCTurnToTarget({'IsConfront': True, 'OffsetBase': 1, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 3, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'FaceControlType': 1, 'ActorName': 'Obj_RaftWood_A_02', 'PosOffset': [0.0, 0.0, 0.0], 'InstanceName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Player.EventTriggerPlayerLookAtObject({'Target': 3, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'ActorName': 'Obj_RaftWood_A_02', 'InstanceName': ''})
    EventCamera.EventMoveToTargetPosCamera({'PosVectorSetType': 3, 'IsPosVectorReferenceActorPosOnce': True, 'MoveTime': 30, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'IsWaitEnd': True, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'TargetFovy': 50.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsAtVectorReferenceActorPosOnce': True, 'PosVector': [0.0, 4.0, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_Bottle_Mes001', 'Actor1InstanceName': 'J-5', 'AtVectorSetType': 4, 'Actor2ActorName': 'Obj_RaftWood_A_02', 'Actor2InstanceName': '', 'AtVector': [0.0, 0.0, 0.0], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 9, 'ChoiceLabel2': 10, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'MessageId': 'MessageId', 'IsNotOpenIfSkipedMostRecent': False})
    EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
    Npc_Bottle_Mes001[J-5].EventNPCTurnToTarget({'IsConfront': True, 'OffsetBase': 1, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 2, 'ActorName': '', 'InstanceName': '', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'FaceControlType': 1, 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Player.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Bottle_Mes001', 'InstanceName': 'J-5', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
}

void ResetParam() {
    goto Event168
}

void AirCheck() {

    call Common.AirStartUP_Player()

    Npc_Bottle_Mes001[J-5].EventTriggerSetRecentTalkFlag({'value': True, 'IsReflectWhenSleep': False})
    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player', 'CheckDistance': 10.0, 'InstanceNameA': '', 'IsTargetPlayingAllEvent': False, 'ActorNameB': 'Npc_Bottle_Mes001', 'InstanceNameB': 'J-5'}) {
        if !Player.EventQueryCheckPlayerState({'State': 5}) {
            Event89:
            if !Npc_Bottle_Mes001[J-5].EventQueryIsFollowToTargetActor({'ActorName': 'Obj_RaftWood_A_02', 'InstanceName': ''}) {
                Npc_Bottle_Mes001[J-5].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
            } else {
                Npc_Bottle_Mes001[J-5].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
                Npc_Bottle_Mes001[J-5].EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            }
        } else {

            call InitTalk.InitTalkOnEvent({'Arg_Turn': 1, 'Self': ActorIdentifier(name="Npc_Bottle_Mes001", sub_name="J-5")})

        }
    } else {
        EventCamera.EventTriggerCameraSavePoint()
        goto Event89
    }
}

void StopBgm() {
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False})
}

void StopBgm_Manual() {
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'WithPlayableEvent': False, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'CommandLife': 2})
}

void StartBgm_WithFade() {
    SoundSystemActor.EventTriggerStartInGameBgm({'WithPlayableEvent': False, 'IsFadeIn': True, 'IsControlSpotBgm': True})
}

void CheckFaceUpCamera() {
    if GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player', 'CheckDistance': 10.0, 'InstanceNameA': '', 'IsTargetPlayingAllEvent': False, 'ActorNameB': 'Npc_Bottle_Mes001', 'InstanceNameB': 'J-5'}) {
        EventCamera.EventBustShotCamera({'IsWaitEnd': True, 'TargetActorName': 'Npc_Bottle_Mes001', 'TargetActorInstanceName': 'J-5', 'CameraCollisionMode': 0, 'MoveTime': 0, 'Latitude': 0.0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False, 'TargetOffset': [0.0, -0.20000000298023224, 1.0], 'Longitude': 0.0})
    }
}

void CheckFaceUpCamera_Return() {
    if GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player', 'CheckDistance': 10.0, 'InstanceNameA': '', 'IsTargetPlayingAllEvent': False, 'ActorNameB': 'Npc_Bottle_Mes001', 'InstanceNameB': 'J-5'}) {
        EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
    }
}

void AirCheck_NoTurn() {

    call Common.AirStartUP_Player()

    Npc_Bottle_Mes001[J-5].EventTriggerSetRecentTalkFlag({'value': True, 'IsReflectWhenSleep': False})
    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player', 'CheckDistance': 10.0, 'InstanceNameA': '', 'IsTargetPlayingAllEvent': False, 'ActorNameB': 'Npc_Bottle_Mes001', 'InstanceNameB': 'J-5'}) {
        if Player.EventQueryCheckPlayerState({'State': 5}) {

            call InitTalk.InitTalkOnEvent({'Arg_Turn': 1, 'Self': ActorIdentifier(name="Npc_Bottle_Mes001", sub_name="J-5")})

        }
    } else {
        EventCamera.EventTriggerCameraSavePoint()
    }
}
