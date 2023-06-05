-------- EventFlow: Npc_Orchestra_M_00 --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBalloonMessage']
queries: ['EventQueryIsOnRecentTalkFlag', 'EventQueryOwningObjectPlayerInterference']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryWeather', 'EventQueryTimeDivision']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventResetGimmick', 'EventEventFadeOut', 'EventEventFadeIn', 'EventWait', 'EventClearActorsAroundAnchor', 'EventTraverseAroundAndWaitCreateActor']
queries: ['EventQueryRandomChoice2', 'EventQueryCheckNoObjectNearAnchor']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerTurnAndLook', 'EventPlayerWarpToStarterLinkAnchor', 'EventPlayerHorseGetOff']
queries: ['EventQueryPlayerEquipArmorSeries']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Npc_Orchestra_M_00[Stage_Miloyan]
entrypoint: None()
actions: ['EventNPCTurnToTarget', 'EventTriggerSetGameDataEnumByAffiliationStableHostel', 'EventTriggerChangeEmotion']
queries: ['EventQueryAvoidDuplicationRandomChoice3']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventSendEventTalkMessageToPlayerCamera', 'EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Npc_Orchestra_M_P[Stage_Beats]
entrypoint: None()
actions: ['EventPlayAS', 'EventWarpToHomeMatrix', 'EventTriggerChangeAIScheduleEquipState']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_Orchestra_W_00[Stage_Violan]
entrypoint: None()
actions: ['EventPlayAS', 'EventWarpToHomeMatrix', 'EventTriggerChangeAIScheduleEquipState']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_Orchestra_M_H[Stage_Euphol]
entrypoint: None()
actions: ['EventPlayAS', 'EventWarpToHomeMatrix', 'EventTriggerChangeAIScheduleEquipState']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_Orchestra_BT_F[Stage_Fei]
entrypoint: None()
actions: ['EventPlayAS', 'EventWarpToHomeMatrix', 'EventTriggerChangeAIScheduleEquipState']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: AsbObj_CaravanWagon_A_05
entrypoint: None()
actions: []
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 4, 'IsBindNearestActor': False}

void Near() {
    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case [0, 1, 6, 7, 8]:
        switch EventWorldManagerController.EventQueryTimeDivision() {
          case [0, 1]:
            Npc_EventStarter.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/Npc_Orchestra_M_00:Near0003', 'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
          case [2, 3]:
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_Orchestra_M_00:Near0006', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
          case [4, 5]:
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_Orchestra_M_00:Near0005', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
          case [6, 7]:
            Npc_EventStarter.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/Npc_Orchestra_M_00:Near0004', 'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
        }
      case [2, 3]:
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_Orchestra_M_00:Near0007', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
      case [4, 5]:
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_Orchestra_M_00:Near0008', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Talk() {

    call UmayadoCheck()


    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 2})

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'isFirstTalk_FairyAllClear', 'Index': -1}) {
        if !Player.EventQueryPlayerEquipArmorSeries({'CheckUpper': True, 'CheckSeries': 'Naked', 'CheckHead': False, 'CheckLower': True}) {
            Event15:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Orchestra_M_00:Talk0005', 'IsNotOpenIfSkipedMostRecent': False})
        } else
        if Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {

            call WeatherTalk()

        }
        switch Npc_Orchestra_M_00[Stage_Miloyan].EventQueryAvoidDuplicationRandomChoice3() {
          case 0:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Orchestra_M_00:Talk0002', 'IsNotOpenIfSkipedMostRecent': False})
            Event10:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Orchestra_M_00:Talk0007', 'IsNotOpenIfSkipedMostRecent': False})
            Npc_Orchestra_M_00[Stage_Miloyan].EventNPCTurnToTarget({'Target': 3, 'FaceControlType': 0, 'ActorName': 'Npc_Orchestra_BT_F', 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'InstanceName': 'Stage_Fei', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            if !GameSystemActor.EventQueryRandomChoice2() {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Orchestra_M_00:Talk0008', 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Orchestra_M_00:Talk0010', 'IsNotOpenIfSkipedMostRecent': False})
            }
          case 1:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Orchestra_M_00:Talk0003', 'IsNotOpenIfSkipedMostRecent': False})
            goto Event10
          case 2:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Orchestra_M_00:Talk0004', 'IsNotOpenIfSkipedMostRecent': False})
            goto Event10
        }
    } else
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckUpper': True, 'CheckSeries': 'Naked', 'CheckHead': False, 'CheckLower': True}) {
        goto Event15
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Orchestra_M_00:Talk2000', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'isFirstTalk_FairyAllClear', 'Index': -1, 'Value': True})
    }
}

void WeatherTalk() {
    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case [0, 1, 8]:
        if !GameSystemActor.EventQueryRandomChoice2() {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Orchestra_M_00:Talk2010', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Orchestra_M_00:Talk2008', 'IsNotOpenIfSkipedMostRecent': False})
        }
      case [2, 3]:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Orchestra_M_00:Talk0006', 'IsNotOpenIfSkipedMostRecent': False})
      case [4, 5]:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Orchestra_M_00:Talk0009', 'IsNotOpenIfSkipedMostRecent': False})
      case [6, 7]:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Orchestra_M_00:Talk2009', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Orchestra_InteractCarriage() {
    switch Npc_EventStarter.EventQueryOwningObjectPlayerInterference({'IsCheckBrokenInterferedOnly': False}) {
      case [1, 2, 3, 4, 6, 7]:

        call Fairy_Common.Fairy_InteractCarriage({'Miroyan': ActorIdentifier(name="Npc_Orchestra_M_00", sub_name="Stage_Miloyan"), 'CaravanWagon': ActorIdentifier(name="AsbObj_CaravanWagon_A_05")})

      case 8:

        call Fairy_Common.Fairy_BurnWagon({'WagonActor': 'AsbObj_CaravanWagon_A_05', 'WagonInstance': '', 'Miroyan': ActorIdentifier(name="Npc_Orchestra_M_00", sub_name="Stage_Miloyan"), 'CaravanWagon': ActorIdentifier(name="AsbObj_CaravanWagon_A_05"), 'Npc_Orchestra_W_00': ActorIdentifier(name="Npc_Orchestra_W_00", sub_name="Stage_Violan"), 'Npc_Orchestra_M_H': ActorIdentifier(name="Npc_Orchestra_M_H", sub_name="Stage_Euphol"), 'Npc_Orchestra_M_P': ActorIdentifier(name="Npc_Orchestra_M_P", sub_name="Stage_Beats"), 'Npc_Orchestra_BT_F': ActorIdentifier(name="Npc_Orchestra_BT_F", sub_name="Stage_Fei"), 'Miroyan_InstanceName': 'Stage_Miloyan', 'Miroyan_Actor': 'Npc_Orchestra_M_00'})

        Event121:

        call Orchestra_ResetWagon()


        call Fairy_Common.Fairy_AfterResetEvent({'WagonActorName': 'AsbObj_CaravanWagon_A_05', 'Miroyan_ActorName': 'Npc_Orchestra_M_00', 'Miroyan_InstanceName': 'Stage_Miloyan', 'WagonInstanceName': '', 'Npc_Orchestra_M_00_FairyTela': ActorIdentifier(name="Npc_Orchestra_M_00", sub_name="Stage_Miloyan"), 'AsbObj_CaravanWagon_A_05': ActorIdentifier(name="AsbObj_CaravanWagon_A_05")})

      case 9:

        call Fairy_Common.Fairy_BrakeWagon({'Miroyan': ActorIdentifier(name="Npc_Orchestra_M_00", sub_name="Stage_Miloyan"), 'Npc_Orchestra_W_00': ActorIdentifier(name="Npc_Orchestra_W_00", sub_name="Stage_Violan"), 'Npc_Orchestra_M_H': ActorIdentifier(name="Npc_Orchestra_M_H", sub_name="Stage_Euphol"), 'Npc_Orchestra_M_P': ActorIdentifier(name="Npc_Orchestra_M_P", sub_name="Stage_Beats"), 'Npc_Orchestra_BT_F': ActorIdentifier(name="Npc_Orchestra_BT_F", sub_name="Stage_Fei"), 'Miroyan_InstanceName': 'Stage_Miloyan', 'Miroyan_Actor': 'Npc_Orchestra_M_00', 'Wagon_Actor': 'AsbObj_CaravanWagon_A_05', 'Wagon_InstanceName': ''})

        goto Event121
    }
}

void Orchestra_ResetWagon() {
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Player.EventPlayerHorseGetOff({'IsWaitEnd': True})

    call MemberReset()

    if !GameSystemActor.EventQueryCheckNoObjectNearAnchor({'Length': 8.0, 'Radius': 8.0, 'AnchorActorName': 'DesignateMatrixActor', 'AnchorInstanceName': 'HorseInn_OrchestraWagon'}) {
        GameSystemActor.EventClearActorsAroundAnchor({'Height': 8.0, 'IsWaitEnd': True, 'Radius': 8.0, 'AnchorActorName': 'DesignateMatrixActor', 'AnchorInstanceName': 'HorseInn_OrchestraWagon', 'IsSweepOut': True, 'IsExcludePlacedAroundAnchor': False, 'IsDeleteActor': True})
    }
    Player.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'InstanceName': 'Orchestra_Warp_Link', 'ActorName': 'DestinationAnchor', 'NotChangeRot': False, 'UseDemoWait': True})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Orchestra_CaravanWagon_ReCreate', 'Index': -1, 'Value': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'GameDataName': 'Orchestra_CaravanWagon_ReCreate', 'Index': -1})
    GameSystemActor.EventResetGimmick({'IsWaitEnd': True, 'IsResetCamera': True, 'Option': 0})
    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})

    call Uotori_RevivePlan.Sound_StartInGameBgm()

    Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'ActorName': 'Npc_Orchestra_M_00', 'InstanceName': 'Stage_Miloyan', 'Target': 3, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
    EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': True, 'Actor1ActorName': 'Player', 'PosVector': [3.4800000190734863, 2.0899999141693115, -1.5499999523162842], 'AtVector': [-0.009999999776482582, 0.9100000262260437, 1.2599999904632568], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1InstanceName': '', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
    Npc_Orchestra_M_00[Stage_Miloyan].EventTriggerChangeEmotion({'EmotionType': 3, 'IsActFaceOnly': False})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
}

void UmayadoCheck() {
    Npc_Orchestra_M_00[Stage_Miloyan].EventTriggerSetGameDataEnumByAffiliationStableHostel({'GameData': 'LastTalkedOrchestraMemberStableHostel'})
}

void MemberReset() {

    fork {
        Npc_Orchestra_M_P[Stage_Beats].EventWarpToHomeMatrix({'IsWaitEnd': True})
        Npc_Orchestra_M_P[Stage_Beats].EventTriggerChangeAIScheduleEquipState({'EquipState': 0})
        Npc_Orchestra_M_P[Stage_Beats].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Act_BGM_Play'})
    } {
        Npc_Orchestra_W_00[Stage_Violan].EventWarpToHomeMatrix({'IsWaitEnd': True})
        Npc_Orchestra_W_00[Stage_Violan].EventTriggerChangeAIScheduleEquipState({'EquipState': 0})
        Npc_Orchestra_W_00[Stage_Violan].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Act_BGM_Play'})
    } {
        Npc_Orchestra_BT_F[Stage_Fei].EventWarpToHomeMatrix({'IsWaitEnd': True})
        Npc_Orchestra_BT_F[Stage_Fei].EventTriggerChangeAIScheduleEquipState({'EquipState': 0})
        Npc_Orchestra_BT_F[Stage_Fei].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Act_BGM_Play', 'IsWaitEnd': False})
    } {
        Npc_Orchestra_M_H[Stage_Euphol].EventWarpToHomeMatrix({'IsWaitEnd': True})
        Npc_Orchestra_M_H[Stage_Euphol].EventTriggerChangeAIScheduleEquipState({'EquipState': 0})
        Npc_Orchestra_M_H[Stage_Euphol].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Act_BGM_Play', 'IsWaitEnd': False})
    }

}
