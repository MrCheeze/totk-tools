-------- EventFlow: Npc_oasis039 --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerBalloonMessage', 'EventTalk']
queries: ['EventQueryAIScheduleCheckActorAction14', 'EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerExcludeNextTalkChoice', 'EventTriggerSetGameDataInt']
queries: ['EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryTimeDivision', 'EventQueryWeather']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_oasis039
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryTalkChoice2', 'EventQueryTalkChoice4', 'EventQueryTalkChoice3']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerCameraSavePoint', 'EventMoveCameraToSavePoint', 'EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: SpObj_ControlStick_A_02[Circuit_Uotori]
entrypoint: None()
actions: ['EventTriggerPushPauseMask']
queries: ['EventQueryConnectedByBondConstraint', 'EventQueryActorIsRotYTiltOverAngle', 'EventQueryIsExistSafePosNearControlStick']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerTurnAndLook']
queries: ['EventQueryPlayerEquipArmorSeries']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Npc_oasis039[Uotori]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventNPCTurnToTarget', 'EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_HatenoVillage032[Uotori]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventNPCTurnToTarget', 'EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventRequestQuit']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_oasis038[Uotori]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_oasis038
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Near() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Circuit_Ichikara_IsCompleted_Exp'}) {
        switch Npc_EventStarter.EventQueryAIScheduleCheckActorAction14() {
          case 1:
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Ichikara_CourseB_isFirstPlayed'}) {
                Npc_EventStarter.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/Npc_oasis039:Near_0001', 'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
            } else {
                Npc_EventStarter.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/Npc_oasis039:Near_0001', 'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
            }
          case [2, 3]:
            if EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) in [0, 1] {
                Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_oasis039:Near_0003', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
            }
        }
    }
}

void Talk() {

    call Circuit_Ichikara.Circuit_Ichikara_InitTalk({'Talker_Actor': ActorIdentifier(name="Npc_oasis039"), 'Listener_Actor': ActorIdentifier(name="Npc_oasis038"), 'Taker_ActorName': 'Npc_oasis039', 'Listener_ActorName': 'Npc_oasis038'})

    switch Npc_EventStarter.EventQueryAIScheduleCheckActorAction14() {
      case [0, 1, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Circuit_Ichikara_oasis038_ClearTalk', 'Index': -1}) {
            if Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {

                call Hello_Npc_oasis()

            }
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Uotori_ResortPlan_IsAfter_Ready_Exp'}) {
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Ichikara_CourseB_isFirstPlayed'}) {
                    GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData1': 'Uotori_ResortPlan_Oasis039_QuestionisFirstTalk01', 'ChoiceExcludeGameData3': '', 'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False, 'ChoiceExcludeGameData2': 'Uotori_ResortPlan_Oasis039_QuestionisFirstTalk01', 'IsInvertGameData2': True})
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_oasis039:Talk_0008', 'ChoiceLabel1': 1, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 3, 'ChoiceLabel2': 3, 'ChoiceLabel3': 2, 'IsNotOpenIfSkipedMostRecent': False})
                    Event74:

                    call ResortPlanChoice_GotoChallengeStep()

                } else {
                    GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData1': 'Uotori_ResortPlan_Oasis039_QuestionisFirstTalk01', 'ChoiceExcludeGameData3': '', 'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False, 'ChoiceExcludeGameData2': 'Uotori_ResortPlan_Oasis039_QuestionisFirstTalk01', 'IsInvertGameData2': True})
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_oasis039:Talk_0002', 'ChoiceLabel1': 1, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 3, 'ChoiceLabel2': 3, 'ChoiceLabel3': 2, 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event74
                }
            } else
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Ichikara_CourseB_isFirstPlayed'}) {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_oasis039:Talk_0008', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_oasis039:Talk_0002', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
        } else {

            call Hello_Npc_oasis()

            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Circuit_Ichikara_oasis038_ClearTalk', 'Index': -1, 'Value': True})
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Uotori_ResortPlan_IsAfter_Ready_Exp'}) {
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Ichikara_CourseB_isFirstPlayed'}) {
                    GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData1': 'Uotori_ResortPlan_Oasis039_QuestionisFirstTalk01', 'ChoiceExcludeGameData3': '', 'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False, 'ChoiceExcludeGameData2': 'Uotori_ResortPlan_Oasis039_QuestionisFirstTalk01', 'IsInvertGameData2': True})
                    Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_oasis039:Talk_0006', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 1, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 3, 'ChoiceLabel2': 3, 'ChoiceLabel3': 2, 'IsNotOpenIfSkipedMostRecent': False})
                    Event59:

                    call ResortPlanChoice_GotoChallengeStep()

                } else {
                    GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData1': 'Uotori_ResortPlan_Oasis039_QuestionisFirstTalk01', 'ChoiceExcludeGameData3': '', 'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False, 'ChoiceExcludeGameData2': 'Uotori_ResortPlan_Oasis039_QuestionisFirstTalk01', 'IsInvertGameData2': True})
                    Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_oasis039:Talk_0001', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 1, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 3, 'ChoiceLabel2': 3, 'ChoiceLabel3': 2, 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event59
                }
            } else
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Ichikara_CourseB_isFirstPlayed'}) {
                Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_oasis039:Talk_0006', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_oasis039:Talk_0001', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
        }
      case [2, 3]:
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Circuit_Ichikara_oasis038_ClearTalk', 'Index': -1}) {
            if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Uotori_ResortPlan_IsAfter_Ready_Exp'}) {
                    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
                      case [0, 1]:
                        GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData1': 'Uotori_ResortPlan_Oasis039_QuestionisFirstTalk01', 'ChoiceExcludeGameData3': '', 'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False, 'ChoiceExcludeGameData2': 'Uotori_ResortPlan_Oasis039_QuestionisFirstTalk01', 'IsInvertGameData2': True})
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_oasis039:Talk_0005', 'ChoiceLabel1': 1, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 3, 'ChoiceLabel2': 3, 'ChoiceLabel3': 2, 'IsNotOpenIfSkipedMostRecent': False})
                        Event26:
                        switch GameSystemActor.EventQueryTalkChoice3() {
                          case [0, 1]:

                            call Uotori_ResortPlan.Contact_Npc_Oasis039_Talk()

                          case 2:
                            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_oasis039:Talk_0003', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        }
                      case [2, 3, 4, 5, 6, 7, 8]:
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_oasis039:Talk_0005', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData1': 'Uotori_ResortPlan_Oasis039_QuestionisFirstTalk01', 'ChoiceExcludeGameData3': '', 'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False, 'ChoiceExcludeGameData2': 'Uotori_ResortPlan_Oasis039_QuestionisFirstTalk01', 'IsInvertGameData2': True})
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_oasis039:Talk_0019', 'ChoiceLabel1': 1, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 3, 'ChoiceLabel2': 3, 'ChoiceLabel3': 2, 'IsNotOpenIfSkipedMostRecent': False})
                        goto Event26
                    }
                } else {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_oasis039:Talk_0005', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    if EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) in [2, 3, 4, 5, 6, 7, 8] {
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_oasis039:Talk_0019', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    }
                }
            } else {

                call Hello_Npc_oasis()

                Event56:
                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Uotori_ResortPlan_IsAfter_Ready_Exp'}) {
                    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
                      case [0, 1]:
                        GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData1': 'Uotori_ResortPlan_Oasis039_QuestionisFirstTalk01', 'ChoiceExcludeGameData3': '', 'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False, 'ChoiceExcludeGameData2': 'Uotori_ResortPlan_Oasis039_QuestionisFirstTalk01', 'IsInvertGameData2': True})
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_oasis039:Talk_0004', 'ChoiceLabel1': 1, 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 2, 'ChoiceLabel2': 3, 'ChoiceNumber': 3, 'IsNotOpenIfSkipedMostRecent': False})
                        Event54:

                        call ResortPlanChoice_GotoChallengeStep()

                      case [2, 3, 4, 5, 6, 7, 8]:
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_oasis039:Talk_0004', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData1': 'Uotori_ResortPlan_Oasis039_QuestionisFirstTalk01', 'ChoiceExcludeGameData3': '', 'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False, 'ChoiceExcludeGameData2': 'Uotori_ResortPlan_Oasis039_QuestionisFirstTalk01', 'IsInvertGameData2': True})
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_oasis039:Talk_0019', 'ChoiceLabel1': 1, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 3, 'ChoiceLabel2': 3, 'ChoiceLabel3': 2, 'IsNotOpenIfSkipedMostRecent': False})
                        goto Event54
                    }
                } else
                switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
                  case [0, 1]:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_oasis039:Talk_0004', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                  case [2, 3, 4, 5, 6, 7, 8]:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_oasis039:Talk_0004', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_oasis039:Talk_0019', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                }
            }
        } else {

            call Hello_Npc_oasis()


            call ClearTalk()

            goto Event56
        }
    }
}

void ClearTalk() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Ichikara_CourseB_isFirstPlayed'}) {
        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_oasis039:Talk_0006', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_oasis039:Talk_0001', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Circuit_Ichikara_oasis038_ClearTalk', 'Index': -1, 'Value': True})
}

void Hello_Npc_oasis() {
    switch EventWorldManagerController.EventQueryTimeDivision() {
      case [0, 1]:
        Npc_oasis039.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0013', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
      case [2, 3]:
        Npc_oasis039.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0014', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
      case [4, 5, 6, 7]:
        Npc_oasis039.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0012', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Uotori_ResortPlan_IsCompleted_Exp_Talk() {
    SpObj_ControlStick_A_02[Circuit_Uotori].EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})

    call InitTalk.InitTalk_Pair({'Arg_Greeting': 4, 'Arg_Turn': 2, 'Spearker1ActorName': 'Npc_oasis039', 'Spearker1InstanceName': 'Uotori', 'Spearker2InstanceName': 'Uotori', 'Spearker2ActorName': 'Npc_oasis038', 'Actor1': ActorIdentifier(name="Npc_oasis039", sub_name="Uotori"), 'Actor2': ActorIdentifier(name="Npc_oasis038", sub_name="Uotori")})

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Uotori_ResortPlan_oasis038_ClearTalk', 'Index': -1}) {
        if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_oasis039:Talk_1007', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 10, 'ChoiceLabel2': 11, 'IsNotOpenIfSkipedMostRecent': False})
            Event134:

            call UotoriCircuitReception()

        } else {

            call Hello()

            switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
              case [0, 1]:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_oasis039:Talk_1005', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 10, 'ChoiceLabel2': 11, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event134
              case [2, 3, 4, 5, 6, 7, 8]:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_oasis039:Talk_1005', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsNotOpenIfSkipedMostRecent': False})
                Event92:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_oasis039:Talk_1006', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 10, 'ChoiceLabel2': 11, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event134
            }
        }
    } else
    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case [0, 1]:
        Npc_EventStarter.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_oasis039:Talk_1001', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 10, 'ChoiceLabel2': 11, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Uotori_ResortPlan_oasis038_ClearTalk', 'Index': -1, 'Value': True})
        goto Event134
      case [2, 3, 4, 5, 6, 7, 8]:
        Npc_EventStarter.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_oasis039:Talk_1001', 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 10, 'ChoiceLabel2': 11, 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Uotori_ResortPlan_oasis038_ClearTalk', 'Index': -1, 'Value': True})
        goto Event92
    }
}

void Hello() {
    switch EventWorldManagerController.EventQueryTimeDivision() {
      case [0, 1]:
        Npc_EventStarter.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_oasis039:Talk_1002', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
      case [2, 3]:
        Npc_EventStarter.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_oasis039:Talk_1003', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
      case [4, 5, 6, 7]:
        Npc_EventStarter.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_oasis039:Talk_1004', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void GerudoUotoriCircuitReception() {
    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Uotori_Playing'}) {
        Npc_oasis039[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 10, 'ChoiceLabel2': 11, 'ChoiceNumber': 2, 'MessageId': 'EventFlowMsg/Npc_oasis039:Talk_1022', 'IsNotOpenIfSkipedMostRecent': False})
        Event95:
        if !GameSystemActor.EventQueryTalkChoice2() {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Uotori_ResortPlan_ClearTalk'}) {

                call CourseCheck()

            } else {
                Npc_oasis039[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_oasis039:Talk_1026', 'IsNotOpenIfSkipedMostRecent': False})
            }
        } else {
            Npc_oasis039[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_oasis039:Talk_1018', 'IsNotOpenIfSkipedMostRecent': False})
        }
    }
}

void CourseStart() {
    Npc_oasis039[Uotori].EventTriggerParticipateEvent()
    Npc_HatenoVillage032[Uotori].EventTriggerParticipateEvent()
    Npc_oasis039[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_oasis039:Talk_1015', 'IsNotOpenIfSkipedMostRecent': False})
    Event183:

    fork {
        Player.EventPlayerTurnAndLook({'WorldPos': [2974.800048828125, 110.0, 3702.0], 'Target': 3, 'TurnFaceControlType': 1, 'InstanceName': 'Uotori', 'IsWaitEnd': True, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'ActorName': 'Npc_HatenoVillage032', 'OffsetBase': 0})
    } {
        Npc_oasis039[Uotori].EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'ActorName': 'Npc_HatenoVillage032', 'InstanceName': 'Uotori', 'Target': 3, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    }

    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'TargetFovy': 50.0, 'MoveTime': 30, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'AtVector': [2964.10009765625, 109.16999816894531, 3695.449951171875], 'PosVector': [2958.929931640625, 110.44000244140625, 3698.610107421875], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Npc_oasis039[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_oasis039:Talk_1016', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_HatenoVillage032[Uotori].EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'InstanceName': 'Uotori', 'ActorName': 'Npc_oasis039', 'Target': 3, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_oasis039:Talk_1027', 'IsNotOpenIfSkipedMostRecent': False})
}

void UotoriCircuitReception() {
    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Uotori_Playing'}) {
        Npc_oasis038[Uotori].EventTriggerParticipateEvent()
        Npc_oasis039[Uotori].EventTriggerParticipateEvent()
        goto Event95
    }
}

void CourseCheck() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Uotori_ClearReward_CourseA'}) {
        Event100:
        Npc_oasis039[Uotori].EventTalk({'MessageId': 'EventFlowMsg/Npc_oasis039:Talk_1020', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Uotori_ClearReward_CourseB'}) {
        goto Event100
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Uotori_ClearReward_CourseC'}) {
        goto Event100
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Uotori_Reward_CourseA'}) {
        goto Event100
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Uotori_Reward_CourseB'}) {
        goto Event100
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Uotori_Reward_CourseC'}) {
        goto Event100
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Uotori_RaceCheck'}) {
        Npc_oasis039[Uotori].EventTalk({'MessageId': 'EventFlowMsg/Npc_oasis039:Talk_1019', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 2, 'ChoiceLabel1': 15, 'ChoiceLabel2': 16, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {
            Event101:
            if !SpObj_ControlStick_A_02[Circuit_Uotori].EventQueryConnectedByBondConstraint({'IsLimitActor': False, 'ActorName': '', 'IsCheckAdjustPoint': False, 'AdjustPointIndexSelf': 0, 'AdjustPointIndexTarget': 0}) {
                if !SpObj_ControlStick_A_02[Circuit_Uotori].EventQueryActorIsRotYTiltOverAngle({'Angle': 45.0}) {
                    Npc_oasis039[Uotori].EventTalk({'MessageId': 'EventFlowMsg/Npc_oasis039:Talk_1017', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
                } else
                if !SpObj_ControlStick_A_02[Circuit_Uotori].EventQueryIsExistSafePosNearControlStick({'IsOnlyCircuitItem': True}) {
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Uotori_isBoatInsideArea'}) {
                        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Uotori_RaceCheck'}) {

                            call RaceCheckCourseStart()

                            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Uotori_CourseA'}) {
                                Event38:
                                GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Circuit_Uotori_LastPlayedCourse', 'Index': -1, 'Value': 0})

                                call Circuit_Uotori_MiniGame.CourseChange({'MessageId_CourseSwitch': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0014', 'GameDataName_CourseID': 'Circuit_Uotori_CourseA', 'MessageId_CourseDesc': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0015', 'TimerLimit': 3600, 'GameDataNamePlayingCourseID': 'Circuit_Uotori_CourseA_Playing', 'GameDataNameNotPlayingCourseID_01': 'Circuit_Uotori_CourseB_Playing', 'GameDataNameNotPlayingCourseID_02': 'Circuit_Uotori_CourseC_Playing'})

                                Event48:
                                Npc_oasis039[Uotori].EventNPCTurnToTarget({'IsWaitEnd': True, 'InstanceName': '', 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                            } else
                            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Uotori_CourseB'}) {
                                Event43:
                                GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Circuit_Uotori_LastPlayedCourse', 'Value': 1, 'Index': -1})

                                call Circuit_Uotori_MiniGame.CourseChange({'TimerLimit': 3600, 'MessageId_CourseSwitch': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0080', 'MessageId_CourseDesc': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0081', 'GameDataName_CourseID': 'Circuit_Uotori_CourseB', 'GameDataNamePlayingCourseID': 'Circuit_Uotori_CourseB_Playing', 'GameDataNameNotPlayingCourseID_01': 'Circuit_Uotori_CourseC_Playing', 'GameDataNameNotPlayingCourseID_02': 'Circuit_Uotori_CourseA_Playing'})

                                goto Event48
                            } else
                            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Uotori_CourseC'}) {
                                Event44:
                                GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Circuit_Uotori_LastPlayedCourse', 'Value': 2, 'Index': -1})

                                call Circuit_Uotori_MiniGame.CourseChange({'MessageId_CourseSwitch': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0016', 'MessageId_CourseDesc': 'EventFlowMsg/Circuit_Uotori_MiniGame:Talk_0017', 'TimerLimit': 4500, 'GameDataName_CourseID': 'Circuit_Uotori_CourseC', 'GameDataNameNotPlayingCourseID_01': 'Circuit_Uotori_CourseA_Playing', 'GameDataNameNotPlayingCourseID_02': 'Circuit_Uotori_CourseB_Playing', 'GameDataNamePlayingCourseID': 'Circuit_Uotori_CourseC_Playing'})

                                goto Event48
                            }
                        } else {
                            Npc_oasis039[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 4, 'ChoiceLabel2': 13, 'ChoiceLabel3': 14, 'ChoiceLabel4': 11, 'MessageId': 'EventFlowMsg/Npc_oasis039:Talk_1021', 'ChoiceLabel1': 12, 'IsNotOpenIfSkipedMostRecent': False})
                            switch GameSystemActor.EventQueryTalkChoice4() {
                              case 0:

                                call CourseStart()

                                goto Event38
                              case 1:

                                call CourseStart()

                                goto Event43
                              case 2:

                                call CourseStart()

                                goto Event44
                              case 3:
                                Npc_oasis039[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_oasis039:Talk_1018', 'IsNotOpenIfSkipedMostRecent': False})
                            }
                        }
                    } else {
                        Npc_oasis039[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_oasis039:Talk_1012', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsNotOpenIfSkipedMostRecent': False})
                    }
                } else {
                    Npc_oasis039[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_oasis039:Talk_1031', 'IsNotOpenIfSkipedMostRecent': False})
                }
            } else {
                Npc_oasis039[Uotori].EventTalk({'MessageId': 'EventFlowMsg/Npc_oasis039:Talk_1009', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})

                fork {
                    Npc_oasis039[Uotori].EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 0, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'WorldPos': [2962.5, 111.0, 3703.0], 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                } {
                    Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Target': 0, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'WorldPos': [2962.5, 111.0, 3703.0], 'OffsetBase': 0})
                }

                EventCamera.EventTriggerCameraSavePoint()
                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'TargetFovy': 50.0, 'MoveTime': 30, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'PosVector': [2962.5, 111.0, 3703.0], 'AtVector': [2965.0, 109.0, 3708.0], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                Npc_oasis039[Uotori].EventTalk({'MessageId': 'EventFlowMsg/Npc_oasis039:Talk_1010', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
                EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'MoveFrame': 0, 'EnableCameraAlpha': False})

                fork {
                    Npc_oasis039[Uotori].EventNPCTurnToTarget({'IsWaitEnd': True, 'WorldPos': [2974.800048828125, 110.0, 3702.0], 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                } {
                    Player.EventPlayerTurnAndLook({'WorldPos': [2974.800048828125, 110.0, 3702.0], 'Target': 3, 'TurnFaceControlType': 1, 'InstanceName': 'Uotori', 'IsWaitEnd': True, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'ActorName': 'Npc_oasis039', 'OffsetBase': 0})
                }

                Npc_oasis039[Uotori].EventTalk({'MessageId': 'EventFlowMsg/Npc_oasis039:Talk_1011', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
            }
        } else {
            Npc_oasis039[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_oasis039:Talk_1028', 'IsNotOpenIfSkipedMostRecent': False})
        }
    } else
    goto Event101
}

void ResortPlanChoice_GotoChallengeStep() {
    goto Event26
}

void ClothCheck() {
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckSeries': 'Naked', 'CheckHead': False, 'CheckUpper': True, 'CheckLower': True}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Perfu_IsNoArmorTalk'}) {
            Npc_oasis039[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_ResortPlan:Talk_0104', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsNotOpenIfSkipedMostRecent': False})
            Event152:
            EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
        } else {
            Npc_oasis039[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_ResortPlan:Talk_0103', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Perfu_IsNoArmorTalk'})
            goto Event152
        }
    }
}

void RaceCheckCourseStart() {
    Npc_oasis039[Uotori].EventTriggerParticipateEvent()
    Npc_HatenoVillage032[Uotori].EventTriggerParticipateEvent()
    Npc_oasis039[Uotori].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_oasis039:Talk_1030', 'IsNotOpenIfSkipedMostRecent': False})
    goto Event183
}
