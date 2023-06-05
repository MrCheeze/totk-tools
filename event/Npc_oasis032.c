-------- EventFlow: Npc_oasis032 --------

Actor: Npc_oasis032
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBalloonMessage', 'EventNPCTurnToTarget']
queries: ['EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventCloseRupeeDisplay', 'EventOpenRupeeDisplay', 'EventTriggerIncreaseRupee', 'EventEventFadeOut', 'EventEventFadeIn', 'EventWait', 'EventCreateSunazarashiOnAnchor', 'EventClearActorsAroundAnchor']
queries: ['EventQueryTalkChoice4', 'EventQueryTalkChoice3', 'EventQueryHasRuppe', 'EventQueryExistActor']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventRequestQuit', 'EventTransition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: ['EventTriggerAddOrRemovePouchContent']
queries: ['EventQueryCanAddToPorch']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerSwitchEquipment', 'EventPlayerWarpToNearAnchor', 'EventPlayerRideSunazarashi', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventPlayerWait', 'EventPlayerOnMotionTypeStatic', 'EventPlayerOffMotionTypeStatic']
queries: ['EventQueryEquipmentHasShieldEquipped']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if !Npc_oasis032.EventQueryIsOnRecentTalkFlag() {
        Npc_oasis032.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_oasis032:talk0004', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_oasis032.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_oasis032:talk0000', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Near() {
    Npc_oasis032.EventTriggerBalloonMessage({'IsChallenge': False, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_oasis032:near0000', 'DisplayFrame': 45, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void SageOfGerudo_IsAfter_DungeonBossDead_Exp_Talk() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'JobSunazarashi_IsCompleted_Exp'}) {

        call GerudoGreeting.InitTalk_GerudoGreeting_TurnDontFace()

        Event57:
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'NpcOasis032_FirstTalk', 'Index': -1}) {
            if !Npc_oasis032.EventQueryIsOnRecentTalkFlag() {
                Event55:
                Npc_oasis032.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_oasis032:talk0008', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                GameSystemActor.EventOpenRupeeDisplay({'IsWaitEnd': True})
                Npc_oasis032.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 4, 'ChoiceLabel1': 10, 'ChoiceLabel2': 11, 'ChoiceLabel4': 12, 'ChoiceLabel3': 15, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_oasis032:talk0003', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Event6:
                switch GameSystemActor.EventQueryTalkChoice4() {
                  case 0:

                    call Rental()

                  case 1:
                    GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                    Npc_oasis032.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_oasis032:talk0005', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                    call Common.OpenActionGuideScreenForce({'ActionGuideType': 23})

                    Npc_oasis032.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_oasis032:talk0013', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    Event102:
                    GameSystemActor.EventOpenRupeeDisplay({'IsWaitEnd': True})
                    Npc_oasis032.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 4, 'ChoiceLabel1': 10, 'ChoiceLabel2': 11, 'ChoiceLabel4': 12, 'ChoiceLabel3': 15, 'MessageId': 'EventFlowMsg/Npc_oasis032:Talk_11', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event6
                  case 2:
                    GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                    Npc_oasis032.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_oasis032:talk0014', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                    call Common.OpenActionGuideScreenForce({'ActionGuideType': 18})

                    Npc_oasis032.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_oasis032:talk0015', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event102
                  case 3:
                    Event18:
                    Npc_oasis032.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_oasis032:Talk_12', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'JobSunazarashi_IsCompleted_Exp'}) {
                        Npc_oasis032.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_oasis032:Talk_13', 'IsNotOpenIfSkipedMostRecent': False})
                    }
                    GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                    EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
                }
            } else {
                Npc_oasis032.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_oasis032:talk0006', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Event101:
                GameSystemActor.EventOpenRupeeDisplay({'IsWaitEnd': True})
                Npc_oasis032.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 4, 'ChoiceLabel1': 10, 'ChoiceLabel2': 11, 'ChoiceLabel4': 12, 'ChoiceLabel3': 15, 'MessageId': 'EventFlowMsg/Npc_oasis032:talk0002', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event6
            }
        } else {
            Npc_oasis032.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_oasis032:talk0006', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_oasis032.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_oasis032:talk0001', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'NpcOasis032_FirstTalk', 'Value': True, 'Index': -1})
            goto Event101
        }
    } else
    if !Npc_oasis032.EventQueryIsOnRecentTalkFlag() {

        call GerudoGreeting.InitTalk_GerudoGreeting_TurnDontFace()

        goto Event55
    } else {

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 0})

        Npc_oasis032.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_oasis032:talk0007', 'ASName': 'Act_Wander_Cleaning', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_oasis032.EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        goto Event57
    }
}

void SageOfGerudo_IsAfter_DungeonBossDead_Exp_Near() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'JobSunazarashi_IsCompleted_Exp'}) {
        Npc_oasis032.EventTriggerBalloonMessage({'IsChallenge': False, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_oasis032:near0002', 'DisplayFrame': 90, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    } else {
        Npc_oasis032.EventTriggerBalloonMessage({'IsChallenge': False, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_oasis032:near0003', 'DisplayFrame': 90, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Cancel() {
    goto Event18
}

void Rental() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnimeDriven': False, 'ChoiceNumber': 3, 'ChoiceLabel2': 1, 'ChoiceLabel3': 3, 'ChangeMstxtForActor': True, 'MessageId': 'EventFlowMsg/Npc_oasis029:SunaTalk00', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    switch GameSystemActor.EventQueryTalkChoice3() {
      case 0:
        if !Player.EventQueryEquipmentHasShieldEquipped() {
            Event34:
            if !GameSystemActor.EventQueryHasRuppe({'Value': 20}) {
                GameSystemActor.EventTriggerIncreaseRupee({'Value': -20})
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnimeDriven': False, 'ChangeMstxtForActor': True, 'ChoiceLabel1': 10, 'ChoiceLabel2': 12, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_oasis032:SunaTalk04', 'IsNotOpenIfSkipedMostRecent': False})
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnimeDriven': False, 'ChangeMstxtForActor': True, 'ChoiceLabel1': 10, 'ChoiceLabel2': 12, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_oasis029:SunaTalk03', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                Event88:
                EventSystemActor.EventTransition({'EventName': 'SUB_SledDeleteIfAny', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2})
                GameSystemActor.EventClearActorsAroundAnchor({'IsWaitEnd': True, 'AnchorActorName': 'DestinationAnchor', 'AnchorInstanceName': 'Npc_oasis032_SunaWarp', 'Height': 3.0, 'Radius': 7.0, 'IsSweepOut': True, 'IsExcludePlacedAroundAnchor': False, 'IsDeleteActor': True})
                if !GameSystemActor.EventQueryExistActor({'IsCheckEquipmentStand': False, 'IsCheckEquippedNPC': False, 'IsCheckEquippedEnemy': False, 'ActorName': 'Npc_GerudoDesert002', 'IsCheckLife': False, 'IsCheckAttached': False, 'IsCheckGolemAttachment': False}) {
                    EventSystemActor.EventTransition({'FadeInTypeEventEnd': 2, 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'SUB_GerudoDesert002Delete'})
                }
                GameSystemActor.EventCreateSunazarashiOnAnchor({'AnchorActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'WithSled': False, 'AnchorInstanceName': 'Npc_oasis032_SunaWarp'})
                Player.EventTriggerPlayerRequestLookAtTheFrontLock()
                Player.EventPlayerWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'InstanceName': 'Npc_oasis032_PlayerWarp', 'UseDemoWait': True})
                Player.EventPlayerRideSunazarashi({'IsWaitEnd': True})
                Player.EventPlayerOnMotionTypeStatic()
                Event45:
                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'PosVector': [-3920.110107421875, 150.64999389648438, 2876.199951171875], 'AtVector': [-3920.81005859375, 150.64999389648438, 2875.489990234375], 'TargetFovy': 50.0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                GameSystemActor.EventWait({'Frames': 60, 'IsWaitEnd': True})
                GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
                Player.EventPlayerOffMotionTypeStatic()
                EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
            } else {
                Event32:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnimeDriven': False, 'ChangeMstxtForActor': True, 'ChoiceLabel1': 10, 'ChoiceLabel2': 12, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_oasis029:SunaTalk02', 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
            }
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnimeDriven': False, 'ChangeMstxtForActor': True, 'MessageId': 'EventFlowMsg/Npc_oasis029:SunaTalk01', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 12, 'ChoiceNumber': 3, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'IsNotOpenIfSkipedMostRecent': False})
            switch GameSystemActor.EventQueryTalkChoice3() {
              case 0:
                if !PouchSystemActor.EventQueryCanAddToPorch({'Actor': 'Weapon_Shield_001', 'Num': 1}) {
                    if !GameSystemActor.EventQueryHasRuppe({'Value': 50}) {
                        GameSystemActor.EventTriggerIncreaseRupee({'Value': -50})
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnimeDriven': False, 'ChangeMstxtForActor': True, 'ChoiceLabel1': 10, 'ChoiceLabel2': 12, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_oasis032:SunaTalk04', 'IsNotOpenIfSkipedMostRecent': False})
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnimeDriven': False, 'ChangeMstxtForActor': True, 'ChoiceLabel1': 10, 'ChoiceLabel2': 12, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_oasis029:SunaTalk03', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                        PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Num': 1, 'Actor': 'Weapon_Shield_001', 'IsEquipDIrect': True, 'AttachmentActor': '', 'EffectType': 0, 'EffectValue': -1, 'IsSetOnlyEquipIndex': False})
                        Player.EventPlayerSwitchEquipment({'IsWaitEnd': True, 'DisarmWeapon': False, 'DisarmShield': False, 'DisarmBow': False, 'DisarmHeadGear': False, 'DisarmUpperArmor': False, 'DisarmLowerArmor': False, 'EquipmentWeaponName': '', 'EquipmentBowName': '', 'EquipmentHeadGearName': '', 'EquipmentUpperArmorName': '', 'EquipmentLowerArmorName': '', 'EquipmentArrowName': '', 'EquipmentShieldName': 'Weapon_Shield_001'})
                        goto Event88
                    } else {
                        goto Event32
                    }
                } else {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnimeDriven': False, 'ChangeMstxtForActor': True, 'ChoiceLabel1': 10, 'ChoiceLabel2': 12, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_oasis029:SunaTalk07', 'IsNotOpenIfSkipedMostRecent': False})
                    GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                }
              case 1:
                goto Event34
              case 2:
                Event63:

                call Cancel()

            }
        }
      case 1:
        if !GameSystemActor.EventQueryHasRuppe({'Value': 50}) {
            GameSystemActor.EventTriggerIncreaseRupee({'Value': -50})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnimeDriven': False, 'ChangeMstxtForActor': True, 'ChoiceLabel1': 10, 'ChoiceLabel2': 12, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_oasis029:SunaTalk03', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
            GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
            EventSystemActor.EventTransition({'EventName': 'SUB_SledDeleteIfAny', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2})
            GameSystemActor.EventClearActorsAroundAnchor({'IsWaitEnd': True, 'AnchorActorName': 'DestinationAnchor', 'Height': 3.0, 'AnchorInstanceName': 'Npc_oasis032_SoriWarp', 'Radius': 7.0, 'IsSweepOut': True, 'IsExcludePlacedAroundAnchor': False, 'IsDeleteActor': True})
            if !GameSystemActor.EventQueryExistActor({'IsCheckEquipmentStand': False, 'IsCheckEquippedNPC': False, 'IsCheckEquippedEnemy': False, 'ActorName': 'Npc_GerudoDesert002', 'IsCheckLife': False, 'IsCheckAttached': False, 'IsCheckGolemAttachment': False}) {
                EventSystemActor.EventTransition({'FadeInTypeEventEnd': 2, 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'SUB_GerudoDesert002Delete'})
            }
            GameSystemActor.EventCreateSunazarashiOnAnchor({'AnchorActorName': 'DestinationAnchor', 'WithSled': True, 'IsWaitEnd': True, 'AnchorInstanceName': 'Npc_oasis032_SoriWarp'})
            Player.EventTriggerPlayerRequestLookAtTheFrontLock()
            Player.EventPlayerWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'InstanceName': 'Npc_oasis032_PlayerWarp', 'UseDemoWait': True})
            Player.EventPlayerWait({'IsWaitEnd': True})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
            goto Event45
        } else {
            goto Event32
        }
      case 2:
        goto Event63
    }
}
