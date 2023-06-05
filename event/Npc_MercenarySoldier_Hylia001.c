-------- EventFlow: Npc_MercenarySoldier_Hylia001 --------

Actor: Npc_MercenarySoldier_Hylia001[BaseCamp_Field]
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBalloonMessage', 'EventNPCTurnToTarget']
queries: ['EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'IsBindNearestActor': False}

Actor: NPC_oasis004_fr02[BaseCamp_Field]
entrypoint: None()
actions: ['EventNPCTurnToTarget']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'IsBindNearestActor': False}

Actor: Npc_MercenarySoldier_Hylia002B_BaseCamp[BaseCamp_Field]
entrypoint: None()
actions: ['EventNPCTurnToTarget']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerBalloonMessage']
queries: ['EventQueryHaveTalked', 'EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: Npc_MercenarySoldier_Hylia001
entrypoint: None()
actions: ['EventTalk']
queries: ['EventQueryAvoidDuplicationRandomChoice3', 'EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWriteDefeatHonorTargetRestNum', 'EventWait', 'EventEventFadeOut', 'EventEventFadeIn', 'EventCloseMinusMenu', 'EventShowMap', 'EventCloseMessageDialog']
queries: ['EventQueryTalkChoice2', 'EventQueryTalkChoice3', 'EventQueryTalkChoice4']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerExcludeNextTalkChoice', 'EventTriggerSetGameDataBool', 'EventTriggerAddOrSubGameDataInt']
queries: ['EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataBool', 'EventQueryIsGameDataInt']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventPlayerTurnAndLook', 'EventTriggerPlayerRequestLookAtTheFrontLock']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventTriggerProgressChallengeStep', 'EventTriggerSelectChallenge']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait', 'EventRequestQuit']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryIsPouchContent']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerCameraSavePoint', 'EventMoveCameraToSavePoint', 'EventMoveToTargetPosCamera', 'EventSendEventTalkMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryTimeDivision', 'EventQueryWeather']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_MercenarySoldier_Hylia003B_BaseCamp[BaseCamp_Field]
entrypoint: None()
actions: ['EventNPCTurnToTarget']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 3})


    call NPC_oasis004_fr02.Initialization()

    Npc_MercenarySoldier_Hylia001[BaseCamp_Field].EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_MercenarySoldier_Hylia001_QuartetTalk01'}) {
        Event869:

        call Talk_Soldier({'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0035', 'Target': 3})

    } else {
        Event23:
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_MercenarySoldier_Hylia001_QuartetTalk01', 'Index': -1, 'Value': True})
        Npc_MercenarySoldier_Hylia001[BaseCamp_Field].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel3': 4, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0001', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {
            Npc_MercenarySoldier_Hylia001[BaseCamp_Field].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel3': 4, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0011', 'ChoiceNumber': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_MercenarySoldier_Hylia001[BaseCamp_Field].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 4, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0012', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
    }
}

void Near() {
    Npc_MercenarySoldier_Hylia001[BaseCamp_Field].EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Near0001', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void HyruleCastleIncident_IsAfter_UnderSurveyOfFourVillages_Exp_Talk() {

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})

    if !Npc_EventStarter.EventQueryHaveTalked() {
        if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 2, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 4, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0003', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Event16:
            if !GameSystemActor.EventQueryTalkChoice2() {

                call Ensei()


                call Goodby()

                Event690:
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_MercenarySoldier_Hylia001_TalkBeforeHugeEnemy', 'Value': True, 'Index': -1})

                call OnTheDesk()

            } else {

                call Goodby()

                goto Event690
            }
        } else {

            call Greeting()

            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'BaseCamp_Gerudo_First_PosChange'}) {
                Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 2, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 4, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0129', 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 2, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 4, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0005', 'IsNotOpenIfSkipedMostRecent': False})
            }
            goto Event16
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'BaseCamp_Gerudo_First_PosChange'}) {
        Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 1, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0128', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 1, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0132', 'IsNotOpenIfSkipedMostRecent': False})
    }
    if !GameSystemActor.EventQueryTalkChoice2() {
        Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0007', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0002', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event690
    } else {

        call Goodby()

    }
}

void GOToTheCastleOfHyrule_IsAfter_MeetPurah_Exp_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 3})


    call NPC_oasis004_fr02.Initialization()

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_MercenarySoldier_Hylia001_QuartetTalk01'}) {
        Npc_MercenarySoldier_Hylia001[BaseCamp_Field].EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Event469:
        if !Npc_MercenarySoldier_Hylia001[BaseCamp_Field].EventQueryIsOnRecentTalkFlag() {
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'HyruleCastleIncident_IsAfter_ReturnBCAfterDefeatMonster_Exp'}) {

                call Talk_Soldier({'Target': 3, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0016'})


                call CampaignStart()

            } else
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'HyruleCastleIncident_IsAfter_CastleSurvey_Exp'}) {

                call Talk_Soldier({'Target': 3, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0016'})

            } else {

                fork {
                    Npc_MercenarySoldier_Hylia001[BaseCamp_Field].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0016', 'ChoiceNumber': 3, 'ChoiceLabel1': 6, 'ChoiceLabel2': 5, 'ChoiceLabel3': 7, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                } {
                    GameSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})
                    Npc_MercenarySoldier_Hylia003B_BaseCamp[BaseCamp_Field].EventNPCTurnToTarget({'FaceControlType': 1, 'IsConfront': False, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'Target': 3, 'ActorName': 'Npc_MercenarySoldier_Hylia001', 'InstanceName': 'BaseCamp_Field', 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                } {
                    Npc_MercenarySoldier_Hylia002B_BaseCamp[BaseCamp_Field].EventNPCTurnToTarget({'FaceControlType': 1, 'IsConfront': False, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'ActorName': 'Npc_MercenarySoldier_Hylia001', 'InstanceName': 'BaseCamp_Field', 'Target': 3, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                } {
                    NPC_oasis004_fr02[BaseCamp_Field].EventNPCTurnToTarget({'FaceControlType': 1, 'IsConfront': False, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'ActorName': 'Npc_MercenarySoldier_Hylia001', 'InstanceName': 'BaseCamp_Field', 'Target': 3, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                }

                Event33:
                switch GameSystemActor.EventQueryTalkChoice3() {
                  case 0:
                    Npc_MercenarySoldier_Hylia001[BaseCamp_Field].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceLabel3': 7, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0017', 'ChoiceNumber': 2, 'ChoiceLabel1': 5, 'ChoiceLabel2': 7, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    if !GameSystemActor.EventQueryTalkChoice2() {
                        Npc_MercenarySoldier_Hylia001[BaseCamp_Field].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceLabel3': 7, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 6, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0004', 'ChoiceLabel2': 7, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        Event466:
                        Npc_MercenarySoldier_Hylia001[BaseCamp_Field].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel3': 4, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0018', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    } else {
                        Event36:
                        Npc_MercenarySoldier_Hylia001[BaseCamp_Field].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel3': 4, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0018', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    }
                  case 1:
                    Npc_MercenarySoldier_Hylia001[BaseCamp_Field].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceLabel3': 7, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 6, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0004', 'ChoiceNumber': 2, 'ChoiceLabel2': 7, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    if !GameSystemActor.EventQueryTalkChoice2() {
                        Npc_MercenarySoldier_Hylia001[BaseCamp_Field].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceLabel3': 7, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0017', 'ChoiceLabel1': 5, 'ChoiceLabel2': 7, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        goto Event466
                    } else {
                        goto Event36
                    }
                  case 2:
                    goto Event36
                }
            }
        } else {

            call Talk_Soldier({'Target': 3, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0019'})

            Event649:
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'HyruleCastleIncident_IsAfter_ReturnBCAfterDefeatMonster_Exp'}) {
                Npc_MercenarySoldier_Hylia001[BaseCamp_Field].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0016', 'ChoiceLabel1': 6, 'ChoiceLabel2': 5, 'ChoiceLabel3': 7, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})

                call CampaignStart()

            } else
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'HyruleCastleIncident_IsAfter_CastleSurvey_Exp'}) {
                Npc_MercenarySoldier_Hylia001[BaseCamp_Field].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0016', 'ChoiceLabel1': 6, 'ChoiceLabel2': 5, 'ChoiceLabel3': 7, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_MercenarySoldier_Hylia001[BaseCamp_Field].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0016', 'ChoiceNumber': 3, 'ChoiceLabel1': 6, 'ChoiceLabel2': 5, 'ChoiceLabel3': 7, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event33
            }
        }
    } else {
        Npc_MercenarySoldier_Hylia001[BaseCamp_Field].EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Event345:

        call Talk_Soldier({'Target': 3, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0034'})

        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_MercenarySoldier_Hylia001_QuartetTalk01', 'Index': -1, 'Value': True})
        goto Event649
    }
}

void DefetHugeEnemy_1to3_Near() {
    if !Npc_EventStarter.EventQueryHaveTalked() {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DefeatHugeEnemy_1_IsAfter_Ready_Exp'})
        && !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DefeatHugeEnemy_3_IsAfter_Ready_Exp'})
        && !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DefeatHugeEnemy_2_IsAfter_Ready_Exp'}) {
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DefeatHugeEnemy_1_IsCompleted_Exp'}) {
                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DefeatHugeEnemy_3_IsCompleted_Exp'}) {
                    if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DefeatHugeEnemy_2_IsCompleted_Exp'}) {
                        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'DefetHugeEnemy_Defeat_2', 'Index': -1}) {
                            Npc_EventStarter.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Near0003', 'IsChallenge': True, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
                        } else {
                            Npc_EventStarter.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Near0004', 'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
                        }
                    }
                } else
                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DefeatHugeEnemy_2_IsCompleted_Exp'}) {
                    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'DefetHugeEnemy_Defeat_3', 'Index': -1}) {
                        Npc_EventStarter.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Near0003', 'IsChallenge': True, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
                    } else {
                        Npc_EventStarter.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Near0004', 'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
                    }
                } else
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'DefetHugeEnemy_Defeat_3', 'Index': -1}) {
                    Npc_EventStarter.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Near0003', 'IsChallenge': True, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
                } else
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'DefetHugeEnemy_Defeat_2', 'Index': -1}) {
                    Npc_EventStarter.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Near0003', 'IsChallenge': True, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
                } else {
                    Npc_EventStarter.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Near0004', 'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
                }
            } else
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DefeatHugeEnemy_3_IsCompleted_Exp'}) {
                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DefeatHugeEnemy_2_IsCompleted_Exp'}) {
                    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'DefetHugeEnemy_Defeat_1', 'Index': -1}) {
                        Npc_EventStarter.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Near0003', 'IsChallenge': True, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
                    } else {
                        Npc_EventStarter.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Near0004', 'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
                    }
                } else
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'DefetHugeEnemy_Defeat_1', 'Index': -1}) {
                    Npc_EventStarter.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Near0003', 'IsChallenge': True, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
                } else
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'DefetHugeEnemy_Defeat_2', 'Index': -1}) {
                    Npc_EventStarter.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Near0003', 'IsChallenge': True, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
                } else {
                    Npc_EventStarter.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Near0004', 'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
                }
            } else
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DefeatHugeEnemy_2_IsCompleted_Exp'}) {
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'DefetHugeEnemy_Defeat_1', 'Index': -1}) {
                    Npc_EventStarter.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Near0003', 'IsChallenge': True, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
                } else
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'DefetHugeEnemy_Defeat_3', 'Index': -1}) {
                    Npc_EventStarter.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Near0003', 'IsChallenge': True, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
                } else {
                    Npc_EventStarter.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Near0004', 'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
                }
            } else
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'DefetHugeEnemy_Defeat_1', 'Index': -1}) {
                Npc_EventStarter.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Near0003', 'IsChallenge': True, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
            } else
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'DefetHugeEnemy_Defeat_3', 'Index': -1}) {
                Npc_EventStarter.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Near0003', 'IsChallenge': True, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
            } else
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'DefetHugeEnemy_Defeat_2', 'Index': -1}) {
                Npc_EventStarter.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Near0003', 'IsChallenge': True, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
            } else {
                Npc_EventStarter.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Near0004', 'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
            }
        } else {
            Npc_EventStarter.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Near0002', 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': True, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
        }
    } else {
        Npc_EventStarter.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Near0004', 'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void DefetHugeEnemy_1to3_Talk() {

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})

    if !Npc_EventStarter.EventQueryHaveTalked() {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_MercenarySoldier_Hylia001_TalkBeforeHugeEnemy', 'Index': -1}) {

            call Greeting()

            Npc_MercenarySoldier_Hylia001.EventTalk({'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0005_00', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_MercenarySoldier_Hylia001_TalkBeforeHugeEnemy', 'Value': False, 'Index': -1})

            call OnTheDesk()

        } else
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'NotClear_DefetHugeEnemy1'}) {
            Event319:
            if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0003', 'ChoiceNumber': 4, 'ChoiceLabel1': 12, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Event75:
                switch GameSystemActor.EventQueryTalkChoice4() {
                  case 0:
                    Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'TalkingL', 'ClothWarpMode': 0})
                    GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData1': 'Cleared_Or_NotDefeatHugeEnemy1', 'ChoiceExcludeGameData2': 'Cleared_Or_NotDefeatHugeEnemy3', 'ChoiceExcludeGameData3': 'Cleared_Or_NotDefeatHugeEnemy2', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False})
                    Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 4, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0028', 'ChoiceLabel1': 8, 'ChoiceLabel2': 9, 'ChoiceLabel3': 10, 'ChoiceLabel4': 13, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    Event165:

                    call Report()

                    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Cleared_Or_NotDefeatHugeEnemy1'})
                    && !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Cleared_Or_NotDefeatHugeEnemy2'})
                    && !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Cleared_Or_NotDefeatHugeEnemy3'}) {
                        Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 4, 'ChoiceNumber': 3, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 4, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0013', 'IsNotOpenIfSkipedMostRecent': False})

                        call Choice_Topic()

                    } else {
                        GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData1': 'Cleared_Or_NotDefeatHugeEnemy1', 'ChoiceExcludeGameData2': 'Cleared_Or_NotDefeatHugeEnemy3', 'ChoiceExcludeGameData3': 'Cleared_Or_NotDefeatHugeEnemy2', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False})
                        Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0033', 'ChoiceNumber': 4, 'ChoiceLabel1': 8, 'ChoiceLabel2': 9, 'ChoiceLabel3': 10, 'ChoiceLabel4': 13, 'ChoiceCancelNo': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        goto Event165
                    }
                  case 1:

                    call Ensei()

                    Event78:
                    Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0013', 'ChoiceNumber': 4, 'ChoiceLabel1': 12, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event75
                  case 2:

                    call Question_HugeEnemy1to3()

                    goto Event78
                  case 3:

                    call Goodby()

                    Event636:

                    call OnTheDesk()

                }
            } else {

                call Greeting()

                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'BaseCamp_Gerudo_First_PosChange'}) {
                    Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 4, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceLabel2': 2, 'ChoiceLabel1': 12, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0005_03', 'IsNotOpenIfSkipedMostRecent': False})
                } else {
                    Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 4, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceLabel2': 2, 'ChoiceLabel1': 12, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0005_01', 'IsNotOpenIfSkipedMostRecent': False})
                }
                goto Event75
            }
        } else
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'NotClear_DefetHugeEnemy2'}) {
            goto Event319
        } else
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'NotClear_DefetHugeEnemy3'}) {
            goto Event319
        } else
        if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0003', 'ChoiceLabel4': 4, 'ChoiceNumber': 3, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 4, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Event139:

            call Choice_Topic()

        } else {

            call Greeting()

            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'BaseCamp_Gerudo_First_PosChange'}) {
                Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 4, 'ChoiceNumber': 3, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0005_03', 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 4, 'ChoiceNumber': 3, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0005_01', 'IsNotOpenIfSkipedMostRecent': False})
            }
            goto Event139
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'BaseCamp_Gerudo_First_PosChange'}) {
        Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 1, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0128', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 1, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0132', 'IsNotOpenIfSkipedMostRecent': False})
    }
    if !GameSystemActor.EventQueryTalkChoice2() {
        Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0007', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_MercenarySoldier_Hylia001.EventTalk({'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0119', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_MercenarySoldier_Hylia001_TalkBeforeHugeEnemy', 'Value': False, 'Index': -1})
        goto Event636
    } else {

        call Goodby()

        goto Event636
    }
}

void DefetHugeEnemy_4to6_Talk() {

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'DefeatHugeEnemy_1to3_AfterTalk'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'NotClear_DefetHugeEnemy4'}) {
            Event323:
            if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0003', 'ChoiceNumber': 4, 'ChoiceLabel1': 12, 'ChoiceLabel2': 2, 'ChoiceLabel4': 4, 'ChoiceLabel3': 15, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Event248:
                switch GameSystemActor.EventQueryTalkChoice4() {
                  case 0:
                    Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'TalkingL', 'ClothWarpMode': 0})
                    GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData1': 'Cleared_Or_NotDefeatHugeEnemy4', 'ChoiceExcludeGameData2': 'Cleared_Or_NotDefeatHugeEnemy5', 'ChoiceExcludeGameData3': 'Cleared_Or_NotDefeatHugeEnemy6', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False})
                    Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 4, 'ChoiceLabel4': 13, 'ChoiceLabel1': 16, 'ChoiceLabel2': 17, 'ChoiceLabel3': 18, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0047', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    Event262:

                    call Report2()

                    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Cleared_Or_NotDefeatHugeEnemy4'})
                    && !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Cleared_Or_NotDefeatHugeEnemy5'})
                    && !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Cleared_Or_NotDefeatHugeEnemy6'}) {
                        Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 4, 'ChoiceNumber': 3, 'ChoiceLabel1': 2, 'ChoiceLabel3': 4, 'ChoiceLabel2': 15, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0013', 'IsNotOpenIfSkipedMostRecent': False})

                        call Choice_Topic2()

                    } else {
                        GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData1': 'Cleared_Or_NotDefeatHugeEnemy4', 'ChoiceExcludeGameData2': 'Cleared_Or_NotDefeatHugeEnemy5', 'ChoiceExcludeGameData3': 'Cleared_Or_NotDefeatHugeEnemy6', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False})
                        Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 4, 'ChoiceLabel4': 13, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0052', 'ChoiceLabel1': 16, 'ChoiceLabel2': 17, 'ChoiceLabel3': 18, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        goto Event262
                    }
                  case 1:

                    call Ensei()

                    Event251:
                    Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0013', 'ChoiceNumber': 4, 'ChoiceLabel1': 12, 'ChoiceLabel2': 2, 'ChoiceLabel4': 4, 'ChoiceLabel3': 15, 'NotPlayLipSyncAnim': False, 'ChoiceCancelNo': 0, 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event248
                  case 2:
                    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MapData.IsOpenUnderGround', 'Index': -1}) {

                        call Question_HugeEnemy4to6()

                        goto Event251
                    } else
                    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DefeatHugeEnemy_4_IsCompleted_Exp'})
                    && !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DefeatHugeEnemy_5_IsCompleted_Exp'}) {
                        Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0104', 'IsNotOpenIfSkipedMostRecent': False})
                    } else {

                        call Question_HugeEnemy4to6_2()

                    }
                    goto Event251
                  case 3:

                    call Goodby()


                    call OnTheDesk()

                }
            } else {

                call Greeting()

                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'BaseCamp_Gerudo_First_PosChange'}) {
                    Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 4, 'ChoiceLabel4': 4, 'ChoiceLabel1': 12, 'ChoiceLabel2': 2, 'ChoiceLabel3': 15, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0005_04', 'IsNotOpenIfSkipedMostRecent': False})
                } else {
                    Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 4, 'ChoiceLabel4': 4, 'ChoiceLabel1': 12, 'ChoiceLabel2': 2, 'ChoiceLabel3': 15, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0005_02', 'IsNotOpenIfSkipedMostRecent': False})
                }
                goto Event248
            }
        } else
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'NotClear_DefetHugeEnemy5'}) {
            goto Event323
        } else
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'NotClear_DefetHugeEnemy6'}) {
            goto Event323
        } else
        if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0003', 'ChoiceLabel4': 4, 'ChoiceNumber': 3, 'ChoiceLabel1': 2, 'ChoiceLabel3': 4, 'ChoiceLabel2': 15, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Event305:

            call Choice_Topic2()

        } else {

            call Greeting()

            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'BaseCamp_Gerudo_First_PosChange'}) {
                Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 2, 'ChoiceLabel3': 4, 'ChoiceNumber': 3, 'ChoiceLabel2': 15, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0005_04', 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 2, 'ChoiceLabel3': 4, 'ChoiceNumber': 3, 'ChoiceLabel2': 15, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0005_02', 'IsNotOpenIfSkipedMostRecent': False})
            }
            goto Event305
        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'DefeatHugeEnemy_1to3_AfterTalk', 'Index': -1, 'Value': True})
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MapData.IsOpenUnderGround', 'Index': -1}) {
            Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0055', 'ChoiceCancelNo': 0, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 4, 'ChoiceLabel1': 16, 'ChoiceLabel2': 17, 'ChoiceLabel3': 18, 'ChoiceLabel4': 11, 'IsNotOpenIfSkipedMostRecent': False})

            call Question_HugeEnemy4to6_FirstTalk()

            Event626:
            Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0013', 'ChoiceNumber': 3, 'ChoiceLabel1': 2, 'ChoiceLabel3': 4, 'ChoiceCancelNo': 0, 'ChoiceLabel2': 15, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call Choice_Topic2()

        } else {
            Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 11, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 16, 'ChoiceLabel2': 17, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 3, 'ChoiceLabel3': 11, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0055', 'IsNotOpenIfSkipedMostRecent': False})

            call Question_HugeEnemy4to6_FirstTalk2()

            goto Event626
        }
    }
}

void DefetHugeEnemy_4to6_Near() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DefeatHugeEnemy_4_IsAfter_Ready_Exp'})
    && !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DefeatHugeEnemy_5_IsAfter_Ready_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DefeatHugeEnemy_6_IsAfter_Ready_Exp'}) {
            Event144:
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DefeatHugeEnemy_4_IsCompleted_Exp'}) {
                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DefeatHugeEnemy_5_IsCompleted_Exp'}) {
                    if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DefeatHugeEnemy_6_IsCompleted_Exp'}) {
                        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'DefetHugeEnemy_Defeat_6'}) {
                            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': True, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'MessageID': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Near0006', 'NotOverriddenByInterestBalloon': False})
                        } else {
                            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'MessageID': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Near0007', 'NotOverriddenByInterestBalloon': False})
                        }
                    }
                } else
                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DefeatHugeEnemy_6_IsCompleted_Exp'}) {
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'DefetHugeEnemy_Defeat_5'}) {
                        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': True, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'MessageID': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Near0006', 'NotOverriddenByInterestBalloon': False})
                    } else {
                        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'MessageID': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Near0007', 'NotOverriddenByInterestBalloon': False})
                    }
                } else
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'DefetHugeEnemy_Defeat_6'}) {
                    Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': True, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'MessageID': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Near0006', 'NotOverriddenByInterestBalloon': False})
                } else
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'DefetHugeEnemy_Defeat_5'}) {
                    Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': True, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'MessageID': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Near0006', 'NotOverriddenByInterestBalloon': False})
                } else {
                    Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'MessageID': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Near0007', 'NotOverriddenByInterestBalloon': False})
                }
            } else
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DefeatHugeEnemy_5_IsCompleted_Exp'}) {
                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DefeatHugeEnemy_6_IsCompleted_Exp'}) {
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'DefetHugeEnemy_Defeat_4'}) {
                        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': True, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'MessageID': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Near0006', 'NotOverriddenByInterestBalloon': False})
                    } else {
                        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'MessageID': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Near0007', 'NotOverriddenByInterestBalloon': False})
                    }
                } else
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'DefetHugeEnemy_Defeat_4'}) {
                    Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': True, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'MessageID': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Near0006', 'NotOverriddenByInterestBalloon': False})
                } else
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'DefetHugeEnemy_Defeat_6'}) {
                    Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': True, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'MessageID': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Near0006', 'NotOverriddenByInterestBalloon': False})
                } else {
                    Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'MessageID': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Near0007', 'NotOverriddenByInterestBalloon': False})
                }
            } else
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DefeatHugeEnemy_6_IsCompleted_Exp'}) {
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'DefetHugeEnemy_Defeat_4'}) {
                    Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': True, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'MessageID': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Near0006', 'NotOverriddenByInterestBalloon': False})
                } else
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'DefetHugeEnemy_Defeat_5'}) {
                    Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': True, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'MessageID': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Near0006', 'NotOverriddenByInterestBalloon': False})
                } else {
                    Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'MessageID': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Near0007', 'NotOverriddenByInterestBalloon': False})
                }
            } else
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'DefetHugeEnemy_Defeat_4'}) {
                Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': True, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'MessageID': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Near0006', 'NotOverriddenByInterestBalloon': False})
            } else
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'DefetHugeEnemy_Defeat_5'}) {
                Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': True, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'MessageID': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Near0006', 'NotOverriddenByInterestBalloon': False})
            } else
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'DefetHugeEnemy_Defeat_6'}) {
                Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': True, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'MessageID': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Near0006', 'NotOverriddenByInterestBalloon': False})
            } else {
                Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'MessageID': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Near0007', 'NotOverriddenByInterestBalloon': False})
            }
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MapData.IsOpenUnderGround', 'Index': -1}) {
            Event140:
            Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': True, 'IsDisplayInTerror': False, 'MessageID': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Near0005', 'NotOverriddenByInterestBalloon': False})
        } else
        goto Event144
    } else {
        goto Event140
    }
}

void After_DefeatHugeEnemyChallenge_Talk() {

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_MercenarySoldier_Hylia001_NotReceive', 'Index': -1}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_MercenarySoldier_Hylia001_Gift', 'Index': -1}) {
            Event698:

            call After_AllChallengeComplete()

        } else {
            Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0099', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            if !PouchSystemActor.EventQueryIsPouchContent({'ActorName': 'Item_Ore_A'}) {

                call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Item_Ore_A'})

                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_MercenarySoldier_Hylia001_Gift'})
                Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0054', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Event646:

                call OnTheDesk()

            } else {
                Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0098', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event646
            }
        }
    } else {
        goto Event698
    }
}

void Question_HugeEnemy1to3() {
    GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData1': 'DefeatHugeEnemy_1_IsCompleted_Exp', 'ChoiceExcludeGameData3': 'DefeatHugeEnemy_2_IsCompleted_Exp', 'ChoiceExcludeGameData2': 'DefeatHugeEnemy_3_IsCompleted_Exp', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False})
    Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0014', 'ChoiceLabel1': 8, 'ChoiceLabel2': 9, 'ChoiceLabel3': 10, 'ChoiceLabel4': 11, 'ChoiceNumber': 4, 'ChoiceCancelNo': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    switch GameSystemActor.EventQueryTalkChoice4() {
      case 0:
        Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0015', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DefeatHugeEnemy_1_IsAfter_Ready_Exp'}) {

            call Check_HugeEnemy1_AlreadyDefeated()

        }
        Event556:
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DefeatHugeEnemy_12'}) {
            Event561:
            Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0013', 'ChoiceNumber': 3, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 4, 'ChoiceCancelNo': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call Choice_Topic()

        } else
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DefeatHugeEnemy_13'}) {
            goto Event561
        } else
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DefeatHugeEnemy_23'}) {
            goto Event561
        } else {
            Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0021', 'ChoiceLabel1': 8, 'ChoiceLabel2': 9, 'ChoiceLabel3': 10, 'ChoiceLabel4': 11, 'ChoiceCancelNo': 0, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})

            call Question_HugeEnemy1to3()

            goto Event561
        }
      case 1:
        Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0020', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DefeatHugeEnemy_3_IsAfter_Ready_Exp'}) {

            call Check_HugeEnemy3_AlreadyDefeated()

        }
        goto Event556
      case 2:
        Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0023', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DefeatHugeEnemy_2_IsAfter_Ready_Exp'}) {

            call Check_HugeEnemy2_AlreadyDefeated()

        }
        goto Event556
    }
}

void Check_HugeEnemy1_AlreadyDefeated() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'DefetHugeEnemy_Defeat_1', 'Index': -1}) {
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkingL', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0024', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'NumOfHugeEnemy1to3', 'Index': -1, 'Value': -1})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})

        call Gift()

        ChallengeSystemActor.EventTriggerProgressChallengeStep({'ChallengeName': 'DefeatHugeEnemy_1', 'StepName': 'Defeat', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False})
        EventSystemActor.EventWait({'Frames': 150, 'IsWaitEnd': True})
        ChallengeSystemActor.EventTriggerProgressChallengeStep({'ChallengeName': 'DefeatHugeEnemy_1', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Complete'})
        EventSystemActor.EventWait({'Frames': 150, 'IsWaitEnd': True})

        call Check_HugeEnemy1to3_ALLDefeated()

    } else {
        ChallengeSystemActor.EventTriggerProgressChallengeStep({'ChallengeName': 'DefeatHugeEnemy_1', 'StepName': 'Defeat', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False})
        EventSystemActor.EventWait({'Frames': 150, 'IsWaitEnd': True})
    }
}

void Check_HugeEnemy2_AlreadyDefeated() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'DefetHugeEnemy_Defeat_2', 'Index': -1}) {
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkingL', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0024', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'NumOfHugeEnemy1to3', 'Index': -1, 'Value': -1})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})

        call Gift()

        ChallengeSystemActor.EventTriggerProgressChallengeStep({'StepName': 'Defeat', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'DefeatHugeEnemy_2'})
        EventSystemActor.EventWait({'Frames': 150, 'IsWaitEnd': True})
        ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Complete', 'ChallengeName': 'DefeatHugeEnemy_2'})
        EventSystemActor.EventWait({'Frames': 150, 'IsWaitEnd': True})

        call Check_HugeEnemy1to3_ALLDefeated()

    } else {
        ChallengeSystemActor.EventTriggerProgressChallengeStep({'StepName': 'Defeat', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'DefeatHugeEnemy_2'})
        EventSystemActor.EventWait({'Frames': 150, 'IsWaitEnd': True})
    }
}

void Check_HugeEnemy3_AlreadyDefeated() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'DefetHugeEnemy_Defeat_3', 'Index': -1}) {
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkingL', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0024', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'NumOfHugeEnemy1to3', 'Index': -1, 'Value': -1})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})

        call Gift()

        ChallengeSystemActor.EventTriggerProgressChallengeStep({'StepName': 'Defeat', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'DefeatHugeEnemy_3'})
        EventSystemActor.EventWait({'Frames': 150, 'IsWaitEnd': True})
        ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Complete', 'ChallengeName': 'DefeatHugeEnemy_3'})
        EventSystemActor.EventWait({'Frames': 150, 'IsWaitEnd': True})

        call Check_HugeEnemy1to3_ALLDefeated()

    } else {
        ChallengeSystemActor.EventTriggerProgressChallengeStep({'StepName': 'Defeat', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'DefeatHugeEnemy_3'})
        EventSystemActor.EventWait({'Frames': 150, 'IsWaitEnd': True})
    }
}

void Gift() {

    call GetPouchContent.GetPouchContentByActorName({'ActorName': 'PutRupee_Silver', 'IsSuccess': True})

    if GameDataActor.EventQueryIsGameDataInt({'Value': 0, 'Index': -1, 'GameDataName': 'NumOfHugeEnemy1to3'}) == 2 {
        Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0025', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Check_HugeEnemy1to3_ALLDefeated() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'DefetHugeEnemy_Defeat_1', 'Index': -1})
    && !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DefeatHugeEnemy_1_IsAfter_Report_Exp'})
    && !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'DefetHugeEnemy_Defeat_3', 'Index': -1})
    && !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DefeatHugeEnemy_3_IsAfter_Report_Exp'})
    && !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'DefetHugeEnemy_Defeat_2', 'Index': -1})
    && !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DefeatHugeEnemy_2_IsAfter_Report_Exp'}) {
        Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0026', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

        call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'PutRupee_Gold'})

        Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0027', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

        call OnTheDesk()

        EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
    }
}

void Choice_Topic() {
    Event2:
    switch GameSystemActor.EventQueryTalkChoice3() {
      case 0:

        call Ensei()

        Event6:
        Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0013', 'ChoiceNumber': 3, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 4, 'ChoiceCancelNo': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event2
      case 1:

        call Question_HugeEnemy1to3()

        goto Event6
      case 2:

        call Goodby()


        call OnTheDesk()

        EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
    }
}

void Report() {
    switch GameSystemActor.EventQueryTalkChoice4() {
      case 0:
        Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0029', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0120', 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0121', 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'NumOfHugeEnemy1to3', 'Index': -1, 'Value': -1})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})

        call Gift()

        ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Complete', 'ChallengeName': 'DefeatHugeEnemy_1'})
        EventSystemActor.EventWait({'Frames': 150, 'IsWaitEnd': True})

        call Check_HugeEnemy1to3_ALLDefeated()

      case 1:
        Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0030', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0122', 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0123', 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'NumOfHugeEnemy1to3', 'Index': -1, 'Value': -1})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})

        call Gift()

        ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Complete', 'ChallengeName': 'DefeatHugeEnemy_3'})
        EventSystemActor.EventWait({'Frames': 150, 'IsWaitEnd': True})

        call Check_HugeEnemy1to3_ALLDefeated()

      case 2:
        Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0031', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0124', 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0125', 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'NumOfHugeEnemy1to3', 'Index': -1, 'Value': -1})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})

        call Gift()

        ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Complete', 'ChallengeName': 'DefeatHugeEnemy_2'})
        EventSystemActor.EventWait({'Frames': 150, 'IsWaitEnd': True})

        call Check_HugeEnemy1to3_ALLDefeated()

      case 3:
        Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0032', 'ChoiceNumber': 3, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 4, 'ChoiceCancelNo': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

        call Choice_Topic()

    }
}

void Check_HugeEnemy6_AlreadyDefeated() {
    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkingL', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0044', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'NumOfHugeEnemy4to6', 'Value': -1, 'Index': -1})
    GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})

    call Gift2()

    ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'DefeatHugeEnemy_6', 'IsIgnoreChallengeProgressUI': True, 'StepName': 'Ready'})
    GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    ChallengeSystemActor.EventTriggerProgressChallengeStep({'StepName': 'Defeat', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'DefeatHugeEnemy_6'})
    EventSystemActor.EventWait({'Frames': 150, 'IsWaitEnd': True})
    ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Complete', 'ChallengeName': 'DefeatHugeEnemy_6'})
    EventSystemActor.EventWait({'Frames': 150, 'IsWaitEnd': True})

    call Check_HugeEnemy4to6_ALLDefeated()

}

void Check_HugeEnemy4_AlreadyDefeated() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'DefetHugeEnemy_Defeat_4'}) {
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkingL', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0044', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'NumOfHugeEnemy4to6', 'Value': -1, 'Index': -1})
        GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})

        call Gift2()

        ChallengeSystemActor.EventTriggerProgressChallengeStep({'StepName': 'Defeat', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'DefeatHugeEnemy_4'})
        EventSystemActor.EventWait({'Frames': 150, 'IsWaitEnd': True})
        ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Complete', 'ChallengeName': 'DefeatHugeEnemy_4'})
        EventSystemActor.EventWait({'Frames': 150, 'IsWaitEnd': True})

        call Check_HugeEnemy4to6_ALLDefeated()

    } else {
        ChallengeSystemActor.EventTriggerProgressChallengeStep({'StepName': 'Defeat', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'DefeatHugeEnemy_4'})
        EventSystemActor.EventWait({'Frames': 150, 'IsWaitEnd': True})
    }
}

void Check_HugeEnemy5_AlreadyDefeated() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'DefetHugeEnemy_Defeat_5'}) {
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkingL', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0044', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'NumOfHugeEnemy4to6', 'Value': -1, 'Index': -1})
        GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})

        call Gift2()

        ChallengeSystemActor.EventTriggerProgressChallengeStep({'StepName': 'Defeat', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'DefeatHugeEnemy_5'})
        EventSystemActor.EventWait({'Frames': 150, 'IsWaitEnd': True})
        ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Complete', 'ChallengeName': 'DefeatHugeEnemy_5'})
        EventSystemActor.EventWait({'Frames': 150, 'IsWaitEnd': True})

        call Check_HugeEnemy4to6_ALLDefeated()

    } else {
        ChallengeSystemActor.EventTriggerProgressChallengeStep({'StepName': 'Defeat', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'DefeatHugeEnemy_5'})
        EventSystemActor.EventWait({'Frames': 150, 'IsWaitEnd': True})
    }
}

void Gift2() {

    call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'PutRupee_Silver'})

    if GameDataActor.EventQueryIsGameDataInt({'Value': 0, 'GameDataName': 'NumOfHugeEnemy4to6', 'Index': -1}) == 2 {
        Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0045', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Check_HugeEnemy4to6_ALLDefeated() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'DefetHugeEnemy_Defeat_4'})
    && !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DefeatHugeEnemy_4_IsAfter_Report_Exp'})
    && !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'DefetHugeEnemy_Defeat_5'})
    && !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DefeatHugeEnemy_5_IsAfter_Report_Exp'})
    && !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'DefetHugeEnemy_Defeat_6'})
    && !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DefeatHugeEnemy_6_IsAfter_Report_Exp'}) {
        Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0053', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        if !PouchSystemActor.EventQueryIsPouchContent({'ActorName': 'Item_Ore_A'}) {

            call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Item_Ore_A'})

            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_MercenarySoldier_Hylia001_Gift'})
            Event657:
            Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0107', 'IsNotOpenIfSkipedMostRecent': False})
            Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0054', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call OnTheDesk()

            EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
        } else {
            Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0098', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_MercenarySoldier_Hylia001_NotReceive'})
            goto Event657
        }
    }
}

void Choice_Topic2() {
    Event257:
    switch GameSystemActor.EventQueryTalkChoice3() {
      case 0:

        call Ensei()

        Event260:
        Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0013', 'ChoiceNumber': 3, 'ChoiceLabel1': 2, 'ChoiceLabel3': 4, 'ChoiceCancelNo': 0, 'ChoiceLabel2': 15, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event257
      case 1:
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MapData.IsOpenUnderGround', 'Index': -1}) {

            call Question_HugeEnemy4to6()

        } else {

            call Question_HugeEnemy4to6_2()

        }
        goto Event260
      case 2:

        call Goodby()


        call OnTheDesk()

        EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
    }
}

void Report2() {
    switch GameSystemActor.EventQueryTalkChoice4() {
      case 0:
        Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0048', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'NumOfHugeEnemy4to6', 'Value': -1, 'Index': -1})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})

        call Gift2()

        ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Complete', 'ChallengeName': 'DefeatHugeEnemy_4'})
        EventSystemActor.EventWait({'Frames': 150, 'IsWaitEnd': True})

        call Check_HugeEnemy4to6_ALLDefeated()

      case 1:
        Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0030', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0049', 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0126', 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'NumOfHugeEnemy4to6', 'Value': -1, 'Index': -1})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})

        call Gift2()

        ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Complete', 'ChallengeName': 'DefeatHugeEnemy_5'})
        EventSystemActor.EventWait({'Frames': 150, 'IsWaitEnd': True})

        call Check_HugeEnemy4to6_ALLDefeated()

      case 2:
        Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0031', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0050', 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0127', 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'NumOfHugeEnemy4to6', 'Value': -1, 'Index': -1})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})

        call Gift2()

        ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Complete', 'ChallengeName': 'DefeatHugeEnemy_6'})
        EventSystemActor.EventWait({'Frames': 150, 'IsWaitEnd': True})

        call Check_HugeEnemy4to6_ALLDefeated()

      case 3:
        Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 4, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0051', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 3, 'ChoiceLabel1': 2, 'ChoiceLabel2': 15, 'IsNotOpenIfSkipedMostRecent': False})

        call Choice_Topic2()

    }
}

void Question_HugeEnemy4to6() {
    GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData1': 'DefeatHugeEnemy_4_IsCompleted_Exp', 'ChoiceExcludeGameData2': 'DefeatHugeEnemy_5_IsCompleted_Exp', 'ChoiceExcludeGameData3': 'DefeatHugeEnemy_6_IsCompleted_Exp', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False})
    Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 11, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0039', 'ChoiceNumber': 4, 'ChoiceLabel1': 16, 'ChoiceLabel2': 17, 'ChoiceLabel3': 18, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Event209:
    switch GameSystemActor.EventQueryTalkChoice4() {
      case 0:
        Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0041', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DefeatHugeEnemy_4_IsAfter_Ready_Exp'}) {

            call Check_HugeEnemy4_AlreadyDefeated()

        }
        Event551:
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DefeatHugeEnemy_45'}) {
            Event554:
            Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 4, 'ChoiceCancelNo': 0, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 3, 'ChoiceLabel1': 2, 'ChoiceLabel2': 15, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0013', 'IsNotOpenIfSkipedMostRecent': False})

            call Choice_Topic2()

        } else
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DefeatHugeEnemy_46'}) {
            goto Event554
        } else
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DefeatHugeEnemy_56'}) {
            goto Event554
        } else {
            Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 11, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 16, 'ChoiceLabel2': 17, 'ChoiceLabel3': 18, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0040', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MapData.IsOpenUnderGround', 'Index': -1}) {

                call Question_HugeEnemy4to6()

            } else {

                call Question_HugeEnemy4to6_2()

            }
            Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 4, 'ChoiceCancelNo': 0, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 3, 'ChoiceLabel1': 2, 'ChoiceLabel2': 15, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0013', 'IsNotOpenIfSkipedMostRecent': False})

            call Choice_Topic2()

        }
      case 1:
        Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0042', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DefeatHugeEnemy_5_IsAfter_Ready_Exp'}) {

            call Check_HugeEnemy5_AlreadyDefeated()

        }
        goto Event551
      case 2:
        Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0043', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'TalkPadShowOn', 'ClothWarpMode': 0})
        EventCamera.EventTriggerCameraSavePoint()
        ChallengeSystemActor.EventTriggerSelectChallenge({'ChallengeName': 'DefeatHugeEnemy_6', 'IsRestoreWhenEventEnd': True})
        GameSystemActor.EventShowMap({'ZoomLevel': 3, 'InShowIcon': True, 'IsShowPlayerNavi': True, 'CenterPos': [0.0, -370.0, 0.0], 'IsShowChallenge': True, 'IsWaitEnd': True})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})

        fork {
            Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0103', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
        } {
            ChallengeSystemActor.EventTriggerProgressChallengeStep({'StepName': 'EventLightSpot', 'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'DefeatHugeEnemy_6', 'IsIgnoreChallengeProgressUI': True})
        }

        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ASCommand': 'Talk', 'ClothWarpMode': 0})

        fork {
            GameSystemActor.EventCloseMinusMenu({'IsWaitEnd': True})
            EventCamera.EventMoveCameraToSavePoint({'MoveFrame': 0, 'CollisionInterpolateSkip': True, 'IsWaitEnd': True, 'ReviseMode': 0, 'EnableCameraAlpha': False})
            EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
            Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0102', 'IsNotOpenIfSkipedMostRecent': False})
        } {
            Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ASCommand': 'TalkSheikPadShowOff', 'ForceFadeFrame': 0.0, 'IsWaitEnd': True, 'ClothWarpMode': 0})
        }

        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ASCommand': 'Talk', 'ClothWarpMode': 0})
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'DefeatHugeEnemy_6_First', 'Index': -1}) {
            ChallengeSystemActor.EventTriggerProgressChallengeStep({'StepName': 'Defeat', 'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'DefeatHugeEnemy_6', 'IsIgnoreChallengeProgressUI': True})
            goto Event551
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'DefetHugeEnemy_Defeat_6'}) {

            call Check_HugeEnemy6_AlreadyDefeated()

            goto Event551
        } else {
            ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'DefeatHugeEnemy_6', 'IsIgnoreChallengeProgressUI': True, 'StepName': 'Ready'})
            GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
            ChallengeSystemActor.EventTriggerProgressChallengeStep({'StepName': 'Defeat', 'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'DefeatHugeEnemy_6', 'IsIgnoreChallengeProgressUI': False})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'DefeatHugeEnemy_6_First', 'Index': -1, 'Value': True})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 150})
            goto Event551
        }
    }
}

void All_Defeat() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'All_HugeEnemy_1to3'})
    && !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'All_HugeEnemy_4to6'}) {
        Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0089', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

        call OnTheDesk()

        EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
    }
}

void Ensei() {
    Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0036', 'ChoiceLabel1': 14, 'ChoiceLabel2': 19, 'ChoiceLabel3': 20, 'ChoiceNumber': 4, 'ChoiceLabel4': 11, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Event471:
    switch GameSystemActor.EventQueryTalkChoice4() {
      case 0:

        call Hosta()

        Event475:
        Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 14, 'ChoiceLabel2': 19, 'ChoiceLabel3': 20, 'ChoiceNumber': 4, 'ChoiceLabel4': 11, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0094', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event471
      case 1:

        call Toryu()

        goto Event475
      case 2:

        call Amani()

        goto Event475
    }
}

void Hosta() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'MercenaryChallenge_HyrulePlain_IsCompleted_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'MercenaryChallenge_Hebra_IsCompleted_Exp'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MercenaryChallenge_BloodyMoonStandby', 'Index': -1}) {
                Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 14, 'ChoiceLabel2': 19, 'ChoiceLabel3': 20, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0090', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            } else
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MercenaryChallenge_HyrulePlain_Replay', 'Index': -1}) {
                Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 14, 'ChoiceLabel2': 19, 'ChoiceLabel3': 20, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0037', 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            } else
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_Hebra_Replay'}) {
                Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 14, 'ChoiceLabel2': 19, 'ChoiceLabel3': 20, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0038', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 14, 'ChoiceLabel2': 19, 'ChoiceLabel3': 20, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0090', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
        } else {
            Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 14, 'ChoiceLabel2': 19, 'ChoiceLabel3': 20, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0038', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
    } else {
        Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 14, 'ChoiceLabel2': 19, 'ChoiceLabel3': 20, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0037', 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Toryu() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'MercenaryChallenge_Eldin_IsCompleted_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'MercenaryChallenge_Akkare_IsCompleted_Exp'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_BloodyMoonStandby_Toryu'}) {
                Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 14, 'ChoiceLabel2': 19, 'ChoiceLabel3': 20, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0097', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            } else
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_Eldin_Replay'}) {
                Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 14, 'ChoiceLabel2': 19, 'ChoiceLabel3': 20, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0095', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            } else
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_Akkare_Replay'}) {
                Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 14, 'ChoiceLabel2': 19, 'ChoiceLabel3': 20, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0096', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 14, 'ChoiceLabel2': 19, 'ChoiceLabel3': 20, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0097', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
        } else {
            Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 14, 'ChoiceLabel2': 19, 'ChoiceLabel3': 20, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0096', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
    } else {
        Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 14, 'ChoiceLabel2': 19, 'ChoiceLabel3': 20, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0095', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Amani() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'MercenaryChallenge_Firone_IsCompleted_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'MercenaryChallenge_Hateru_IsCompleted_Exp'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_BloodyMoonStandby_Amani'}) {
                Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 14, 'ChoiceLabel2': 19, 'ChoiceLabel3': 20, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0093', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            } else
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_Firone_Replay'}) {
                Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 14, 'ChoiceLabel2': 19, 'ChoiceLabel3': 20, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0091', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            } else
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_Hateru_Replay'}) {
                Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 14, 'ChoiceLabel2': 19, 'ChoiceLabel3': 20, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0092', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 14, 'ChoiceLabel2': 19, 'ChoiceLabel3': 20, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0093', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
        } else {
            Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 14, 'ChoiceLabel2': 19, 'ChoiceLabel3': 20, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0092', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
    } else {
        Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 14, 'ChoiceLabel2': 19, 'ChoiceLabel3': 20, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0091', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Talk_Army() {
    Npc_MercenarySoldier_Hylia001[BaseCamp_Field].EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_MercenarySoldier_Hylia001_QuartetTalk01'}) {
        goto Event869
    } else {

        call Talk_Soldier({'Target': 3, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0101'})

        goto Event23
    }
}

void Talk_Army2() {
    Npc_MercenarySoldier_Hylia001[BaseCamp_Field].EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_MercenarySoldier_Hylia001_QuartetTalk01'}) {
        goto Event469
    } else {
        goto Event345
    }
}

void Question_HugeEnemy4to6_2() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DefeatHugeEnemy_4_IsCompleted_Exp'})
    && !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DefeatHugeEnemy_5_IsCompleted_Exp'}) {
        Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0104', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData1': 'DefeatHugeEnemy_4_IsCompleted_Exp', 'ChoiceExcludeGameData2': 'DefeatHugeEnemy_5_IsCompleted_Exp', 'ChoiceExcludeGameData3': '', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False})
        Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 11, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0039', 'ChoiceLabel1': 16, 'ChoiceLabel2': 17, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 3, 'ChoiceLabel3': 11, 'IsNotOpenIfSkipedMostRecent': False})
        Event574:
        if !GameSystemActor.EventQueryTalkChoice3() {
            Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0041', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DefeatHugeEnemy_4_IsAfter_Ready_Exp'}) {

                call Check_HugeEnemy4_AlreadyDefeated()

            }
            Event587:
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DefeatHugeEnemy_4_IsCompleted_Exp'}) {
                Event590:
                Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 4, 'ChoiceCancelNo': 0, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 3, 'ChoiceLabel1': 2, 'ChoiceLabel2': 15, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0013', 'IsNotOpenIfSkipedMostRecent': False})

                call Choice_Topic2()

            } else
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DefeatHugeEnemy_5_IsCompleted_Exp'}) {
                goto Event590
            } else {
                Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 11, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 16, 'ChoiceLabel2': 17, 'ChoiceLabel3': 18, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0040', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MapData.IsOpenUnderGround', 'Index': -1}) {

                    call Question_HugeEnemy4to6()

                } else {

                    call Question_HugeEnemy4to6_2()

                }
                Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 4, 'ChoiceCancelNo': 0, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 3, 'ChoiceLabel1': 2, 'ChoiceLabel2': 15, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0013', 'IsNotOpenIfSkipedMostRecent': False})

                call Choice_Topic2()

            }
        } else {
            Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0042', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DefeatHugeEnemy_5_IsAfter_Ready_Exp'}) {

                call Check_HugeEnemy5_AlreadyDefeated()

            }
            goto Event587
        }
    }
}

void Question_HugeEnemy4to6_FirstTalk() {
    goto Event209
}

void Question_HugeEnemy4to6_FirstTalk2() {
    goto Event574
}

void OnTheDesk() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'BaseCamp_Shelter_OnTheDesk'}) {
        Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 2, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 4, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk_OnTheDesk', 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Greeting() {
    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case [0, 1]:
        switch EventWorldManagerController.EventQueryTimeDivision() {
          case [0, 1]:
            Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 2, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 4, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0110', 'IsNotOpenIfSkipedMostRecent': False})
          case [2, 3, 4, 5]:
            Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 2, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 4, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0111', 'IsNotOpenIfSkipedMostRecent': False})
          case [6, 7]:
            Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 2, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 4, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0112', 'IsNotOpenIfSkipedMostRecent': False})
        }
      case [2, 3, 4, 5, 6, 7, 8]:
        Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 2, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 4, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0113', 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Goodby() {
    switch Npc_MercenarySoldier_Hylia001.EventQueryAvoidDuplicationRandomChoice3() {
      case 0:
        Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0002', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
      case 1:
        Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0114', 'IsNotOpenIfSkipedMostRecent': False})
      case 2:
        Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0115', 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void After_AllChallengeComplete() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'DefeatHugeEnemy_4to6_AfterTalk'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'All_HugeEnemy_Complete1to6'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'TalkAfter_All_HugeEnemy_Complete1to6', 'Index': -1}) {
                if Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {

                    call Greeting()

                }
                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'BaseCamp_Gerudo_First_PosChange'}) {
                    Npc_MercenarySoldier_Hylia001.EventTalk({'ChoiceNumber': 2, 'ChoiceLabel1': 2, 'ChoiceLabel2': 21, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0131', 'IsNotOpenIfSkipedMostRecent': False})
                } else {
                    Npc_MercenarySoldier_Hylia001.EventTalk({'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0117', 'ChoiceNumber': 2, 'ChoiceLabel1': 2, 'ChoiceLabel2': 21, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
                }
                Event473:
                if !GameSystemActor.EventQueryTalkChoice2() {
                    Event3:

                    call Ensei()

                    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'All_HugeEnemy_Complete1to6'}) {
                        Event753:
                        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'TalkAfter_All_HugeEnemy_Complete1to6', 'Index': -1}) {
                            Npc_MercenarySoldier_Hylia001.EventTalk({'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0118', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
                            Event752:

                            call OnTheDesk()

                        } else {
                            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'TalkAfter_All_HugeEnemy_Complete1to6', 'Value': True, 'Index': -1})

                            call Goodby()

                            goto Event752
                        }
                    } else {
                        GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData1': '', 'ChoiceExcludeGameData2': 'All_HugeEnemy_1to3', 'ChoiceExcludeGameData3': 'All_HugeEnemy_4to6', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False})
                        Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0013', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 15, 'ChoiceLabel4': 4, 'ChoiceNumber': 4, 'ChoiceCancelNo': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        Event346:
                        switch GameSystemActor.EventQueryTalkChoice4() {
                          case 0:
                            goto Event3
                          case 1:
                            GameSystemActor.EventWriteDefeatHonorTargetRestNum({'IsWaitEnd': True, 'TargetDefeatHonor': 'Obj_DefeatHonor_00', 'GameData': 'NumOfRemaining_HugeEnemy_01'})
                            GameSystemActor.EventWriteDefeatHonorTargetRestNum({'IsWaitEnd': True, 'TargetDefeatHonor': 'Obj_DefeatHonor_02', 'GameData': 'NumOfRemaining_HugeEnemy_02'})
                            GameSystemActor.EventWriteDefeatHonorTargetRestNum({'IsWaitEnd': True, 'TargetDefeatHonor': 'Obj_DefeatHonor_01', 'GameData': 'NumOfRemaining_HugeEnemy_03'})
                            GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
                            GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData1': 'All_HugeEnemy_01', 'ChoiceExcludeGameData2': 'All_HugeEnemy_03', 'ChoiceExcludeGameData3': 'All_HugeEnemy_02', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False})
                            Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0014', 'ChoiceLabel1': 8, 'ChoiceLabel2': 9, 'ChoiceLabel3': 10, 'ChoiceLabel4': 11, 'ChoiceNumber': 4, 'ChoiceCancelNo': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            Event353:
                            switch GameSystemActor.EventQueryTalkChoice4() {
                              case 0:
                                switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NumOfRemaining_HugeEnemy_01', 'Value': 0, 'Index': -1}) {
                                  case [0, 1]:
                                    Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0065', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkYes', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                                    Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0071', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                                    call GetPouchContent.GetPouchContentByActorName({'ActorName': 'Obj_DefeatHonor_00', 'IsSuccess': True})

                                    Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0072', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                    Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0073', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'All_HugeEnemy_01', 'Index': -1, 'Value': True})
                                    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
                                    Event416:

                                    call All_Defeat()

                                    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'All_HugeEnemy_1to3'}) {
                                        Event370:
                                        GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData1': '', 'ChoiceExcludeGameData2': 'All_HugeEnemy_1to3', 'ChoiceExcludeGameData3': 'All_HugeEnemy_4to6', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False})
                                        Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0013', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 15, 'ChoiceLabel4': 4, 'ChoiceNumber': 4, 'ChoiceCancelNo': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                        goto Event346
                                    } else {
                                        Event365:
                                        GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData1': 'All_HugeEnemy_01', 'ChoiceExcludeGameData2': 'All_HugeEnemy_03', 'ChoiceExcludeGameData3': 'All_HugeEnemy_02', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False})
                                        Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0021', 'ChoiceLabel1': 8, 'ChoiceNumber': 4, 'ChoiceLabel2': 9, 'ChoiceLabel3': 10, 'ChoiceLabel4': 11, 'ChoiceCancelNo': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                        goto Event353
                                    }
                                  case 2:
                                    Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0059', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                    goto Event365
                                }
                              case 1:
                                switch GameDataActor.EventQueryIsGameDataInt({'Value': 0, 'Index': -1, 'GameDataName': 'NumOfRemaining_HugeEnemy_03'}) {
                                  case [0, 1]:
                                    Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0067', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkYes', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                                    Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0077', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                                    call GetPouchContent.GetPouchContentByActorName({'ActorName': 'Obj_DefeatHonor_01', 'IsSuccess': True})

                                    Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0078', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                    Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0079', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'All_HugeEnemy_03'})
                                    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
                                    goto Event416
                                  case 2:
                                    Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0061', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                    goto Event365
                                }
                              case 2:
                                switch GameDataActor.EventQueryIsGameDataInt({'Value': 0, 'Index': -1, 'GameDataName': 'NumOfRemaining_HugeEnemy_02'}) {
                                  case [0, 1]:
                                    Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0066', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkYes', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                                    Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0074', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                                    call GetPouchContent.GetPouchContentByActorName({'ActorName': 'Obj_DefeatHonor_02', 'IsSuccess': True})

                                    Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0075', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                    Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0076', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'All_HugeEnemy_02'})
                                    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
                                    goto Event416
                                  case 2:
                                    Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0060', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                    goto Event365
                                }
                              case 3:
                                goto Event370
                            }
                          case 2:
                            GameSystemActor.EventWriteDefeatHonorTargetRestNum({'IsWaitEnd': True, 'TargetDefeatHonor': 'Obj_DefeatHonor_04', 'GameData': 'NumOfRemaining_HugeEnemy_04'})
                            GameSystemActor.EventWriteDefeatHonorTargetRestNum({'IsWaitEnd': True, 'TargetDefeatHonor': 'Obj_DefeatHonor_05', 'GameData': 'NumOfRemaining_HugeEnemy_05'})
                            GameSystemActor.EventWriteDefeatHonorTargetRestNum({'IsWaitEnd': True, 'TargetDefeatHonor': 'Obj_DefeatHonor_03', 'GameData': 'NumOfRemaining_HugeEnemy_06'})
                            GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
                            GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData1': 'All_HugeEnemy_04', 'ChoiceExcludeGameData2': 'All_HugeEnemy_05', 'ChoiceExcludeGameData3': 'All_HugeEnemy_06', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False})
                            Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 11, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0039', 'ChoiceNumber': 4, 'ChoiceLabel1': 16, 'ChoiceLabel2': 17, 'ChoiceLabel3': 18, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            Event348:
                            switch GameSystemActor.EventQueryTalkChoice4() {
                              case 0:
                                switch GameDataActor.EventQueryIsGameDataInt({'Value': 0, 'Index': -1, 'GameDataName': 'NumOfRemaining_HugeEnemy_04'}) {
                                  case [0, 1]:
                                    Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0068', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkYes', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                                    Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0080', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                                    call GetPouchContent.GetPouchContentByActorName({'ActorName': 'Obj_DefeatHonor_04', 'IsSuccess': True})

                                    Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0081', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                    Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0082', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'All_HugeEnemy_04'})
                                    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
                                    Event440:

                                    call All_Defeat()

                                    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'All_HugeEnemy_4to6'}) {
                                        Event372:
                                        GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData1': '', 'ChoiceExcludeGameData2': 'All_HugeEnemy_1to3', 'ChoiceExcludeGameData3': 'All_HugeEnemy_4to6', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False})
                                        Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0013', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 15, 'ChoiceLabel4': 4, 'ChoiceNumber': 4, 'ChoiceCancelNo': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                        goto Event346
                                    } else {
                                        Event371:
                                        GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData1': 'All_HugeEnemy_04', 'ChoiceExcludeGameData2': 'All_HugeEnemy_05', 'ChoiceExcludeGameData3': 'All_HugeEnemy_06', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False})
                                        Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 4, 'ChoiceLabel4': 11, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 16, 'ChoiceLabel2': 17, 'ChoiceLabel3': 18, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0040', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                        goto Event348
                                    }
                                  case 2:
                                    Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0062', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                    goto Event371
                                }
                              case 1:
                                switch GameDataActor.EventQueryIsGameDataInt({'Value': 0, 'Index': -1, 'GameDataName': 'NumOfRemaining_HugeEnemy_05'}) {
                                  case [0, 1]:
                                    Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0069', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkYes', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                                    Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0083', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                                    call GetPouchContent.GetPouchContentByActorName({'ActorName': 'Obj_DefeatHonor_05', 'IsSuccess': True})

                                    Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0084', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                    Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0085', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'All_HugeEnemy_05'})
                                    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
                                    goto Event440
                                  case 2:
                                    Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0063', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                    goto Event371
                                }
                              case 2:
                                switch GameDataActor.EventQueryIsGameDataInt({'Value': 0, 'Index': -1, 'GameDataName': 'NumOfRemaining_HugeEnemy_06'}) {
                                  case [0, 1]:
                                    Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0070', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkYes', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                                    Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0086', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                                    call GetPouchContent.GetPouchContentByActorName({'ActorName': 'Obj_DefeatHonor_03', 'IsSuccess': True})

                                    Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0087', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                    Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0088', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'All_HugeEnemy_06'})
                                    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
                                    goto Event440
                                  case 2:
                                    Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0064', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                    goto Event371
                                }
                              case 3:
                                goto Event372
                            }
                          case 3:

                            call Goodby()


                            call OnTheDesk()

                        }
                    }
                } else {

                    call GoodByeAfterComplete()

                }
            } else {
                Npc_MercenarySoldier_Hylia001.EventTalk({'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0116', 'ChoiceNumber': 2, 'ChoiceLabel1': 2, 'ChoiceLabel2': 21, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event473
            }
        } else
        if Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {

            call Greeting()

        }
        Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0108', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData1': '', 'ChoiceExcludeGameData2': 'All_HugeEnemy_1to3', 'ChoiceExcludeGameData3': 'All_HugeEnemy_4to6', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False})
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'BaseCamp_Gerudo_First_PosChange'}) {
            Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 2, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 3, 'ChoiceLabel3': 15, 'ChoiceNumber': 4, 'ChoiceLabel4': 4, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0130', 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 2, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 3, 'ChoiceLabel3': 15, 'ChoiceNumber': 4, 'ChoiceLabel4': 4, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0109', 'IsNotOpenIfSkipedMostRecent': False})
        }
        goto Event346
    } else
    if Npc_MercenarySoldier_Hylia001.EventQueryIsOnRecentTalkFlag() {

        call Greeting()

    }
    Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0056', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'DefeatHugeEnemy_4to6_AfterTalk'})
    if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
        GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData1': '', 'ChoiceExcludeGameData2': 'All_HugeEnemy_1to3', 'ChoiceExcludeGameData3': 'All_HugeEnemy_4to6', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False})
        Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 2, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 4, 'ChoiceLabel2': 3, 'ChoiceLabel3': 15, 'ChoiceLabel4': 4, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0105', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event346
    } else {
        GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData1': '', 'ChoiceExcludeGameData2': 'All_HugeEnemy_1to3', 'ChoiceExcludeGameData3': 'All_HugeEnemy_4to6', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False})
        Npc_MercenarySoldier_Hylia001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 2, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 4, 'ChoiceLabel2': 3, 'ChoiceLabel3': 15, 'ChoiceLabel4': 4, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0106', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event346
    }
}

void GoodByeAfterComplete() {
    goto Event753
}

void CampaignStart() {

    fork {
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkingL', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {
        GameSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})
        Npc_MercenarySoldier_Hylia003B_BaseCamp[BaseCamp_Field].EventNPCTurnToTarget({'FaceControlType': 1, 'IsConfront': False, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'Target': 2, 'ActorName': '', 'InstanceName': '', 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Npc_MercenarySoldier_Hylia002B_BaseCamp[BaseCamp_Field].EventNPCTurnToTarget({'FaceControlType': 1, 'IsConfront': False, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'Target': 2, 'ActorName': '', 'InstanceName': '', 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        NPC_oasis004_fr02[BaseCamp_Field].EventNPCTurnToTarget({'FaceControlType': 1, 'IsConfront': False, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'Target': 2, 'ActorName': '', 'InstanceName': '', 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    }


    call Talk_Soldier({'Target': 3, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0100'})

    Npc_MercenarySoldier_Hylia001[BaseCamp_Field].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 7, 'ChoiceLabel2': 7, 'ChoiceLabel1': 5, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0006', 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
    Npc_MercenarySoldier_Hylia001[BaseCamp_Field].EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 3, 'FaceControlType': 1, 'ActorName': 'NPC_oasis004_fr02', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'InstanceName': 'BaseCamp_Field', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
    EventCamera.EventMoveToTargetPosCamera({'CameraCollisionMode': 0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'PosVector': [-238.52999877929688, 128.1699981689453, -67.66000366210938], 'AtVector': [-244.52999877929688, 125.05999755859375, -74.01000213623047], 'TargetFovy': 34.79999923706055, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventCamera.EventMoveToTargetPosCamera({'CameraCollisionMode': 0, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-238.25999450683594, 128.30999755859375, -67.37000274658203], 'AtVector': [-244.52999877929688, 125.05999755859375, -74.01000213623047], 'TargetFovy': 34.79999923706055, 'IsWaitEnd': False, 'MoveTime': 200, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})

    fork {
        Npc_MercenarySoldier_Hylia002B_BaseCamp[BaseCamp_Field].EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 3, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'InstanceName': 'BaseCamp_Field', 'ActorName': 'Npc_MercenarySoldier_Hylia001', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Npc_MercenarySoldier_Hylia003B_BaseCamp[BaseCamp_Field].EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 3, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'InstanceName': 'BaseCamp_Field', 'ActorName': 'Npc_MercenarySoldier_Hylia001', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        NPC_oasis004_fr02[BaseCamp_Field].EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 3, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'InstanceName': 'BaseCamp_Field', 'ActorName': 'Npc_MercenarySoldier_Hylia001', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        GameSystemActor.EventWait({'Frames': 20, 'IsWaitEnd': True})
        Player.EventPlayerTurnAndLook({'ActorName': 'Npc_MercenarySoldier_Hylia001', 'InstanceName': 'BaseCamp_Field', 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1, 'KeepTalkWait': True, 'Target': 3, 'OffsetBase': 0})
    } {
        Npc_MercenarySoldier_Hylia001[BaseCamp_Field].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceLabel3': 7, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 6, 'ChoiceLabel2': 7, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0008', 'IsNotOpenIfSkipedMostRecent': False})
    }

    Npc_MercenarySoldier_Hylia001[BaseCamp_Field].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 7, 'ChoiceLabel2': 7, 'ChoiceLabel1': 5, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia001:Talk0009', 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_MercenarySoldier_Hylia001_Move', 'Index': -1, 'Value': True})
    EventCamera.EventMoveToTargetPosCamera({'CameraCollisionMode': 0, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'Actor1ActorName': 'Player', 'PosVector': [0.029999999329447746, 1.7999999523162842, -5.300000190734863], 'AtVector': [0.0, 1.7999999523162842, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Player.EventTriggerPlayerRequestLookAtTheFrontLock()
    GameSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
}

void Talk_Soldier() {

    fork {
        Npc_MercenarySoldier_Hylia001[BaseCamp_Field].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel3': 4, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'MessageId', 'IsNotOpenIfSkipedMostRecent': False})
    } {
        GameSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})
        Npc_MercenarySoldier_Hylia003B_BaseCamp[BaseCamp_Field].EventNPCTurnToTarget({'FaceControlType': 1, 'IsConfront': False, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'ActorName': 'Npc_MercenarySoldier_Hylia001', 'InstanceName': 'BaseCamp_Field', 'Target': 'Target', 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Npc_MercenarySoldier_Hylia002B_BaseCamp[BaseCamp_Field].EventNPCTurnToTarget({'FaceControlType': 1, 'IsConfront': False, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'ActorName': 'Npc_MercenarySoldier_Hylia001', 'InstanceName': 'BaseCamp_Field', 'Target': 'Target', 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        NPC_oasis004_fr02[BaseCamp_Field].EventNPCTurnToTarget({'FaceControlType': 1, 'IsConfront': False, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'ActorName': 'Npc_MercenarySoldier_Hylia001', 'InstanceName': 'BaseCamp_Field', 'Target': 'Target', 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    }

}
