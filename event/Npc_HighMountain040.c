-------- EventFlow: Npc_HighMountain040 --------

Actor: Npc_HighMountain040
entrypoint: None()
actions: ['EventTalk', 'EventNPCTurnToTarget', 'EventTriggerChangeEmotion', 'EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule', 'EventTriggerAIScheduleSetIsRequestSetPostTalkTimer']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Road_010
entrypoint: None()
actions: ['EventTalk', 'EventNPCTurnToTarget', 'EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule', 'EventTriggerAIScheduleSetIsRequestSetPostTalkTimer', 'EventTriggerAIScheduleSetForceInvalidLookIKWhenPostTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventCloseMessageDialog']
queries: ['EventQueryTalkChoice3']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryCanAddToPorch']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Npc_HighMountain040_Talk() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Lodge_Chemical001_Pouch_Full'}) {
        Event44:

        call InitTalk.InitTalk_Pair({'Arg_Turn': 4, 'Arg_Greeting': 4, 'Actor1': ActorIdentifier(name="Npc_HighMountain040"), 'Actor2': ActorIdentifier(name="Npc_Road_010"), 'Spearker1ActorName': 'Npc_HighMountain040', 'Spearker1InstanceName': '', 'Spearker2ActorName': 'Npc_Road_010', 'Spearker2InstanceName': ''})

        if !PouchSystemActor.EventQueryCanAddToPorch({'Num': 1, 'Actor': 'Item_Cook_C_17_ResistCold_Lv1'}) {
            Npc_Road_010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Lodge_Chemical001:Talk_44', 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Lodge_Chemical001_Pouch_Full', 'Value': False})
            Event18:

            call GetPouchContent.GetCookResult2({'MaterialActorName1': 'Animal_Insect_Q', 'MaterialActorName2': 'Item_Enemy_77'})

            Npc_HighMountain040.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Npc_HighMountain040:Talk_07', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_Road_010.EventNPCTurnToTarget({'Target': 3, 'ActorName': 'Npc_HighMountain040', 'IsWaitEnd': True, 'FaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            Npc_Road_010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Npc_HighMountain040:Talk_08', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Npc_HighMountain040_Position', 'Value': False})
            Event49:
            Npc_Road_010.EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule()
            Npc_Road_010.EventTriggerAIScheduleSetIsRequestSetPostTalkTimer()
            Npc_Road_010.EventTriggerAIScheduleSetForceInvalidLookIKWhenPostTalk()
            Npc_HighMountain040.EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule()
            Npc_HighMountain040.EventTriggerAIScheduleSetIsRequestSetPostTalkTimer()
        } else {
            Event31:
            Npc_Road_010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Lodge_Chemical001:Talk_43', 'IsNotOpenIfSkipedMostRecent': False})
            Event10:
            Npc_Road_010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain040:Talk_00', 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceNumber': 3, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Event19:
            switch GameSystemActor.EventQueryTalkChoice3() {
              case 0:
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Yamu_Explaind1', 'Index': -1}) {
                    Npc_Road_010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain040:Talk_12', 'IsNotOpenIfSkipedMostRecent': False})
                }
                Npc_Road_010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Npc_HighMountain040:Talk_01', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                call Common.OpenActionGuideScreenForce({'ActionGuideType': 17})

                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Yamu_Explaind1', 'Value': True})
                Event2:
                Npc_Road_010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 3, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'MessageId': 'EventFlowMsg/Npc_HighMountain040:Talk_11', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event19
              case 1:
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Yamu_Explaind2', 'Index': -1}) {
                    Npc_HighMountain040.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain040:Talk_13', 'IsNotOpenIfSkipedMostRecent': False})
                } else {
                    Npc_HighMountain040.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain040:Talk_02', 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                }
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Yamu_Explaind2', 'Value': True})
                goto Event2
              case 2:
                Npc_Road_010.EventNPCTurnToTarget({'Target': 3, 'ActorName': 'Npc_HighMountain040', 'IsWaitEnd': True, 'FaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                Npc_Road_010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Npc_HighMountain040:Talk_03', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Npc_HighMountain040.EventNPCTurnToTarget({'Target': 3, 'IsWaitEnd': True, 'FaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'ActorName': 'Npc_Road_010', 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                Npc_HighMountain040.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Npc_HighMountain040:Talk_04', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Yamu_Explaind1', 'Value': False})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Yamu_Explaind2', 'Value': False})
                goto Event49
            }
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Lodge_Chemical001_Pouch_Full02'}) {
        Event45:

        call InitTalk.InitTalk_Pair({'Arg_Turn': 4, 'Arg_Greeting': 4, 'Spearker1InstanceName': '', 'Spearker2InstanceName': '', 'Actor1': ActorIdentifier(name="Npc_Road_010"), 'Actor2': ActorIdentifier(name="Npc_HighMountain040"), 'Spearker1ActorName': 'Npc_Road_010', 'Spearker2ActorName': 'Npc_HighMountain040'})

        if !PouchSystemActor.EventQueryCanAddToPorch({'Num': 1, 'Actor': 'Item_Cook_C_17_ResistCold_Lv1'}) {
            Npc_Road_010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Lodge_Chemical001:Talk_44', 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Lodge_Chemical001_Pouch_Full02'})
            Event11:
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Lodge_Chemical001_Repeat', 'Value': True, 'Index': -1})
            goto Event18
        } else {
            Npc_Road_010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Lodge_Chemical001:Talk_43', 'IsNotOpenIfSkipedMostRecent': False})
            goto Event10
        }
    } else {
        Event26:

        call InitTalk.InitTalk_Pair({'Arg_Turn': 4, 'Arg_Greeting': 4, 'Spearker1InstanceName': '', 'Spearker2InstanceName': '', 'Actor1': ActorIdentifier(name="Npc_Road_010"), 'Actor2': ActorIdentifier(name="Npc_HighMountain040"), 'Spearker1ActorName': 'Npc_Road_010', 'Spearker2ActorName': 'Npc_HighMountain040'})

        Npc_HighMountain040.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
        Npc_HighMountain040.EventNPCTurnToTarget({'IsWaitEnd': True, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'Target': 2, 'ActorName': '', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'FaceControlType': 1, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        goto Event10
    }
}

void Npc_HighMountain040_Lodge_Chemical001_Disappeared_Talk() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Lodge_Chemical001_Pouch_Full'}) {
        goto Event44
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Lodge_Chemical001_Pouch_Full02'}) {
        goto Event45
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Lodge_Chemical001_Repeat'}) {
        goto Event26
    } else {

        call InitTalk.InitTalk_Pair({'Arg_Turn': 4, 'Arg_Greeting': 4, 'Spearker1InstanceName': '', 'Spearker2InstanceName': '', 'Actor1': ActorIdentifier(name="Npc_Road_010"), 'Actor2': ActorIdentifier(name="Npc_HighMountain040"), 'Spearker1ActorName': 'Npc_Road_010', 'Spearker2ActorName': 'Npc_HighMountain040'})

        Npc_Road_010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Npc_HighMountain040:Talk_06', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        if !PouchSystemActor.EventQueryCanAddToPorch({'Num': 1, 'Actor': 'Item_Cook_C_17_ResistCold_Lv1'}) {
            GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
            goto Event11
        } else {
            Npc_Road_010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Lodge_Chemical001:Talk_42', 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Lodge_Chemical001_Pouch_Full02'})
            goto Event49
        }
    }
}

void GetPresent_NotGet() {
    goto Event31
}
