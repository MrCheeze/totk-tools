-------- EventFlow: Mercenary_Hateru_Bloody --------

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn', 'EventWait', 'EventCloseMessageDialog']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerCameraSavePoint', 'EventSendEventTalkMessageToPlayerCamera', 'EventMoveCameraToSavePoint', 'EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerTurnAndLook', 'EventPlayerPlayASForFlowchart', 'EventWait']
queries: ['EventQueryIsEquipWeapon', 'EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryTimeDivision', 'EventQueryWeather']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBalloonMessage']
queries: ['EventQueryIsOnRecentTalkFlag', 'EventQueryIsDown', 'EventQueryIsBattle']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: NPC_oasis004_fr02[Hateru]
entrypoint: None()
actions: ['EventTalk', 'EventTriggerLookAtObject', 'EventTriggerBalloonMessage', 'EventTriggerSetHaveTalked', 'EventTriggerEmitXLink']
queries: ['EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'IsBindNearestActor': False}

Actor: Npc_MercenarySoldier_Hylia002B[Hateru]
entrypoint: None()
actions: ['EventTriggerBalloonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_MercenarySoldier_Hylia003B[Hateru]
entrypoint: None()
actions: ['EventTriggerBalloonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_MercenarySoldier_Goron001B[Hateru]
entrypoint: None()
actions: ['EventTriggerBalloonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_MercenarySoldier_Hylia008B[Hateru]
entrypoint: None()
actions: ['EventTriggerBalloonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_MercenarySoldier_Goron002B[Hateru]
entrypoint: None()
actions: ['EventTriggerBalloonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_MercenarySoldier_Hylia009B[Hateru]
entrypoint: None()
actions: ['EventTriggerBalloonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_BaseCamp_Gerudo002_Mercenary[Hateru]
entrypoint: None()
actions: ['EventTriggerBalloonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: NPC_oasis004_fr02[Clear_Talk(Reader)]
entrypoint: Clear_Talk(Reader)
actions: ['EventTalk']
queries: []
params: None

Actor: NPC_oasis004_fr02[Finale(Reader)]
entrypoint: Finale(Reader)
actions: ['EventTalk', 'EventNPCTurnToTarget', 'EventTriggerLookAtObject', 'EventPlayAS']
queries: []
params: None

Actor: NPC_oasis004_fr02[MasterSword_Check(Reader)]
entrypoint: MasterSword_Check(Reader)
actions: ['EventTalk']
queries: []
params: None

void Ready_Npc_MercenarySoldier_Hylia001_Near() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_Hateru_Broken'}) {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Firone:Near1019', 'DisplayFrame': 90, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MercenaryChallenge_Hateru_RemoveBall', 'Index': -1}) {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': False, 'DisplayFrame': 90, 'IsChallenge': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Hateru:Near1004'})
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_Hateru_EnemyBattleStart'}) {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': False, 'DisplayFrame': 90, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Hateru:Near1006', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    } else {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': False, 'DisplayFrame': 90, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Hateru:Near1003', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Ready_Npc_MercenarySoldier_Hylia001_Talk() {

    call MercenaryChallenge_Hateru.SpikeBallActorPause()

    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'HyruleCastleIncident_IsAfter_ReturnBCAfterBlackZelda_Exp'}) {

        call MercenaryChallenge_CommonTalk.MercenaryChallenge_Common_Wait_Amani_GerudoIn({'MercenarySoldier002': ActorIdentifier(name="Npc_MercenarySoldier_Hylia002B", sub_name="Hateru"), 'MercenarySoldier003': ActorIdentifier(name="Npc_MercenarySoldier_Hylia003B", sub_name="Hateru"), 'MercenarySoldier006': ActorIdentifier(name="Npc_MercenarySoldier_Goron001B", sub_name="Hateru"), 'MercenarySoldier007': ActorIdentifier(name="Npc_MercenarySoldier_Goron002B", sub_name="Hateru"), 'MercenarySoldier008': ActorIdentifier(name="Npc_MercenarySoldier_Hylia008B", sub_name="Hateru"), 'MercenarySoldier009': ActorIdentifier(name="Npc_MercenarySoldier_Hylia009B", sub_name="Hateru"), 'MercenarySoldier004': ActorIdentifier(name="Npc_BaseCamp_Gerudo002_Mercenary", sub_name="Hateru")})

    } else {

        call MercenaryChallenge_CommonTalk.MercenaryChallenge_Common_Wait_Amani({'MercenarySoldier002': ActorIdentifier(name="Npc_MercenarySoldier_Hylia002B", sub_name="Hateru"), 'MercenarySoldier003': ActorIdentifier(name="Npc_MercenarySoldier_Hylia003B", sub_name="Hateru"), 'MercenarySoldier006': ActorIdentifier(name="Npc_MercenarySoldier_Goron001B", sub_name="Hateru"), 'MercenarySoldier007': ActorIdentifier(name="Npc_MercenarySoldier_Goron002B", sub_name="Hateru"), 'MercenarySoldier008': ActorIdentifier(name="Npc_MercenarySoldier_Hylia008B", sub_name="Hateru"), 'MercenarySoldier009': ActorIdentifier(name="Npc_MercenarySoldier_Hylia009B", sub_name="Hateru")})

    }
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_Hateru_Broken'}) {

        call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})


        call MercenaryChallenge_Hateru.ReadyClearEvent()

    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MercenaryChallenge_Hateru_RemoveBall', 'Index': -1}) {

        call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

        NPC_oasis004_fr02[Hateru].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Hateru:Talk1033', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MercenaryChallenge_Hateru_Ready_isFirstTalk'})
        NPC_oasis004_fr02[Hateru].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Hateru:Talk_015', 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MercenaryChallenge_006_TalkLeaderBeforeDefeat'})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MercenaryChallenge_BgmStart'})

        call Hateru_Bloody_MercenarySoldier_ReadyBattleStart()

    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_Hateru_EnemyBattleStart'}) {

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 0})

        NPC_oasis004_fr02[Hateru].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Hateru:Talk_008', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_Hateru_Ready_isFirstTalk'}) {
            if !NPC_oasis004_fr02[Hateru].EventQueryIsOnRecentTalkFlag() {
                NPC_oasis004_fr02[Hateru].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Hateru:Talk_009', 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                NPC_oasis004_fr02[Hateru].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
                Event182:
                NPC_oasis004_fr02[Hateru].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Hateru:Talk1021', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                EventCamera.EventTriggerCameraSavePoint()

                call MercenaryChallenge_Hateru.Camera_Trap()

                NPC_oasis004_fr02[Hateru].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Hateru:Talk1048', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
                EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
                NPC_oasis004_fr02[Hateru].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Hateru:Talk_009', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MercenaryChallenge_006_TalkLeaderBeforeDefeat'})
                if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Mercenary_Hateru_Bloody_IsAfter_MeetAgain_Exp'}) {
                    ChallengeSystemActor.EventExecuteProgressChallengeStep({'StepName': 'Craft', 'ChallengeName': 'Mercenary_Hateru_Bloody', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': True, 'IsWaitEnd': True})
                }
            }
        } else {
            NPC_oasis004_fr02[Hateru].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
            Event36:
            NPC_oasis004_fr02[Hateru].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Hateru:Talk1033', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MercenaryChallenge_Hateru_Ready_isFirstTalk'})
            goto Event182
        }
    } else {

        call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_Hateru_Ready_isFirstTalk'}) {
            if !NPC_oasis004_fr02[Hateru].EventQueryIsOnRecentTalkFlag() {
                NPC_oasis004_fr02[Hateru].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Hateru:Talk_011', 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                goto Event182
            }
        } else {
            goto Event36
        }
    }
}

void Ready_Npc_MercenarySoldier_CommonTalk() {

    call MercenaryChallenge_Hateru.SpikeBallActorPause()


    call MercenaryChallenge_Firone.ReadyCommonTalk_Amani({'LeaderActor': ActorIdentifier(name="NPC_oasis004_fr02", sub_name="Hateru"), 'MercenarySoldier002': ActorIdentifier(name="Npc_MercenarySoldier_Hylia002B", sub_name="Hateru"), 'MercenarySoldier003': ActorIdentifier(name="Npc_MercenarySoldier_Hylia003B", sub_name="Hateru"), 'MercenarySoldier006': ActorIdentifier(name="Npc_MercenarySoldier_Goron001B", sub_name="Hateru"), 'MercenarySoldier007': ActorIdentifier(name="Npc_MercenarySoldier_Goron002B", sub_name="Hateru"), 'MercenarySoldier008': ActorIdentifier(name="Npc_MercenarySoldier_Hylia008B", sub_name="Hateru"), 'MercenarySoldier009': ActorIdentifier(name="Npc_MercenarySoldier_Hylia009B", sub_name="Hateru"), 'MercenarySoldier004': ActorIdentifier(name="Npc_BaseCamp_Gerudo002_Mercenary", sub_name="Hateru")})


    call MercenaryChallenge_Firone.AmaniMember_OneTalk_Hyrule()

    Event258:

    fork {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_Hateru_Ready_isFirstTalk'}) {
            NPC_oasis004_fr02[Hateru].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsWaitEnd': True, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'ASName': 'RideWait', 'MessageId': 'EventFlowMsg/MercenaryChallenge_Hateru:Talk_014', 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            NPC_oasis004_fr02[Hateru].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsWaitEnd': True, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Firone:Common_000', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'ASName': 'RideWait', 'IsNotOpenIfSkipedMostRecent': False})
        }
    } {
        Player.EventWait({'IsWaitEnd': True, 'Frames': 10})
        Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Target': 3, 'TurnFaceControlType': 0, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'NPC_oasis004_fr02', 'KeepTalkWait': True, 'InstanceName': 'Hateru', 'OffsetBase': 0})
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Talk', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    }


    call MercenaryChallenge_Firone.ReadyAmaniCamera({'TurntoActorName': 'NPC_oasis004_fr02', 'TurntoInstanceName': 'Hateru'})

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_Hateru_Broken'}) {

        call MercenaryChallenge_Hateru.ReadyClearEvent()

    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_Hateru_Ready_isFirstTalk'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_Hateru_SoldierMember_isFirstTalk'})
        && !NPC_oasis004_fr02[Hateru].EventQueryIsOnRecentTalkFlag() {
            NPC_oasis004_fr02[Hateru].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Hateru:Talk_011', 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Event162:
            NPC_oasis004_fr02[Hateru].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Hateru:Talk1021', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            EventCamera.EventTriggerCameraSavePoint()

            call MercenaryChallenge_Hateru.Camera_Trap()

            NPC_oasis004_fr02[Hateru].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Hateru:Talk1048', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
            NPC_oasis004_fr02[Hateru].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Hateru:Talk_009', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            NPC_oasis004_fr02[Hateru].EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MercenaryChallenge_Hateru_SoldierMember_isFirstTalk'})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MercenaryChallenge_006_TalkLeaderBeforeDefeat'})
            if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Mercenary_Hateru_Bloody_IsAfter_MeetAgain_Exp'}) {
                ChallengeSystemActor.EventExecuteProgressChallengeStep({'StepName': 'Craft', 'ChallengeName': 'Mercenary_Hateru_Bloody', 'IsIgnoreChallengeProgressUI': True, 'IsIgnoreCompletedChallenge': False, 'IsWaitEnd': True})
            }
        }
    } else {
        NPC_oasis004_fr02[Hateru].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Hateru:Talk1033', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MercenaryChallenge_Hateru_Ready_isFirstTalk'})
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MercenaryChallenge_Hateru_RemoveBall', 'Index': -1}) {
            NPC_oasis004_fr02[Hateru].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Hateru:Talk_015', 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MercenaryChallenge_Hateru_SoldierMember_isFirstTalk'})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MercenaryChallenge_006_TalkLeaderBeforeDefeat'})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MercenaryChallenge_BgmStart'})

            call Hateru_Bloody_MercenarySoldier_ReadyBattleStart()

        } else {
            goto Event162
        }
    }
}

void Report_Npc_MercenarySoldier_Hylia001_Talk() {
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'GameDataName': 'Mercenary_Amani_IsCamperPresent', 'Index': -1})

    call Finale({'Reader': ActorIdentifier(name="NPC_oasis004_fr02", sub_name="Hateru")})

}

void Clear_Talk() {

    call MasterSword_Check({'Reader': 'Reader'})

    NPC_oasis004_fr02[Clear_Talk(Reader)].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Hateru:Talk1042', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})

    call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'PutRupee_Silver'})

    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'HyruleCastleIncident_IsAfter_ReturnBCAfterBlackZelda_Exp'}) {

        call MercenaryChallenge_CommonTalk.MercenaryChallenge_Common_AfterGetPouch_Amani_GerudoIn({'ActorName': 'NPC_oasis004_fr02', 'Reader': 'Reader', 'InstanceName': 'Hateru', 'MercenarySoldier002': ActorIdentifier(name="Npc_MercenarySoldier_Hylia002B", sub_name="Hateru"), 'MercenarySoldier003': ActorIdentifier(name="Npc_MercenarySoldier_Hylia003B", sub_name="Hateru"), 'MercenarySoldier006': ActorIdentifier(name="Npc_MercenarySoldier_Goron001B", sub_name="Hateru"), 'MercenarySoldier007': ActorIdentifier(name="Npc_MercenarySoldier_Goron002B", sub_name="Hateru"), 'MercenarySoldier008': ActorIdentifier(name="Npc_MercenarySoldier_Hylia008B", sub_name="Hateru"), 'MercenarySoldier009': ActorIdentifier(name="Npc_MercenarySoldier_Hylia009B", sub_name="Hateru"), 'Player': ActorIdentifier(name="Player"), 'MercenarySoldier004': ActorIdentifier(name="Npc_BaseCamp_Gerudo002_Mercenary", sub_name="Hateru")})

    } else {

        call MercenaryChallenge_CommonTalk.MercenaryChallenge_Common_AfterGetPouch_Amani({'ActorName': 'NPC_oasis004_fr02', 'Reader': 'Reader', 'Player': ActorIdentifier(name="Player"), 'MercenarySoldier002': ActorIdentifier(name="Npc_MercenarySoldier_Hylia002B", sub_name="Hateru"), 'MercenarySoldier003': ActorIdentifier(name="Npc_MercenarySoldier_Hylia003B", sub_name="Hateru"), 'MercenarySoldier006': ActorIdentifier(name="Npc_MercenarySoldier_Goron001B", sub_name="Hateru"), 'MercenarySoldier007': ActorIdentifier(name="Npc_MercenarySoldier_Goron002B", sub_name="Hateru"), 'MercenarySoldier008': ActorIdentifier(name="Npc_MercenarySoldier_Hylia008B", sub_name="Hateru"), 'MercenarySoldier009': ActorIdentifier(name="Npc_MercenarySoldier_Hylia009B", sub_name="Hateru"), 'InstanceName': 'Hateru'})

    }
    NPC_oasis004_fr02[Clear_Talk(Reader)].EventTalk({'EndDialogOption': 0, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Hateru:Talk1045', 'NotPlayLipSyncAnim': False, 'ASName': 'RideWait', 'IsNotOpenIfSkipedMostRecent': False})

    call MercenaryChallenge_Firone.LastGreeting_Amani({'ActorName': 'NPC_oasis004_fr02', 'InstanceName': 'Hateru', 'MessageId': 'EventFlowMsg/MercenaryChallenge_Hateru:Talk1017', 'Reader': ActorIdentifier(name="NPC_oasis004_fr02", sub_name="Hateru"), 'MercenarySoldier002': ActorIdentifier(name="Npc_MercenarySoldier_Hylia002B", sub_name="Hateru"), 'MercenarySoldier003': ActorIdentifier(name="Npc_MercenarySoldier_Hylia003B", sub_name="Hateru"), 'MercenarySoldier006': ActorIdentifier(name="Npc_MercenarySoldier_Goron001B", sub_name="Hateru"), 'MercenarySoldier007': ActorIdentifier(name="Npc_MercenarySoldier_Goron002B", sub_name="Hateru"), 'MercenarySoldier008': ActorIdentifier(name="Npc_MercenarySoldier_Hylia008B", sub_name="Hateru"), 'MercenarySoldier009': ActorIdentifier(name="Npc_MercenarySoldier_Hylia009B", sub_name="Hateru"), 'MercenarySoldier004': ActorIdentifier(name="Npc_BaseCamp_Gerudo002_Mercenary", sub_name="Hateru")})

    Event143:
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 2})

    call ResetFlag()

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'Mercenary_Hateru_Bloody', 'StepName': 'Ready', 'IsIgnoreChallengeProgressUI': True, 'IsWaitEnd': True})
}

void Finale() {

    call InitTalk.InitTalkExceptCameraOnEventWithAirPause({'Arg_Turn': 4, 'Self': 'Reader'})


    fork {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_Hateru_RemoveBallEventCheck'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_SoldierAllDead'}) {
                NPC_oasis004_fr02[Finale(Reader)].EventTalk({'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Hateru:Talk1022', 'ASName': '', 'EndDialogOption': 3, 'IsCloseDialog': False, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                NPC_oasis004_fr02[Finale(Reader)].EventTalk({'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Hateru:Talk1019', 'ASName': '', 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
            }
        } else {
            NPC_oasis004_fr02[Finale(Reader)].EventTalk({'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Hateru:Talk1020', 'ASName': '', 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
        }
    } {
        if Player.EventQueryCheckPlayerState({'State': 5}) {
            Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Target': 3, 'TurnFaceControlType': 0, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'NPC_oasis004_fr02', 'InstanceName': 'Hateru', 'KeepTalkWait': True, 'OffsetBase': 0})
        }
    } {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'HyruleCastleIncident_IsAfter_ReturnBCAfterBlackZelda_Exp'}) {

            call MercenaryChallenge_CommonTalk.MercenaryChallenge_Common_Victory_Amani_GerudoIn({'MercenarySoldier002': ActorIdentifier(name="Npc_MercenarySoldier_Hylia002B", sub_name="Hateru"), 'MercenarySoldier003': ActorIdentifier(name="Npc_MercenarySoldier_Hylia003B", sub_name="Hateru"), 'MercenarySoldier006': ActorIdentifier(name="Npc_MercenarySoldier_Goron001B", sub_name="Hateru"), 'MercenarySoldier007': ActorIdentifier(name="Npc_MercenarySoldier_Goron002B", sub_name="Hateru"), 'MercenarySoldier008': ActorIdentifier(name="Npc_MercenarySoldier_Hylia008B", sub_name="Hateru"), 'MercenarySoldier009': ActorIdentifier(name="Npc_MercenarySoldier_Hylia009B", sub_name="Hateru"), 'MercenarySoldier004': ActorIdentifier(name="Npc_BaseCamp_Gerudo002_Mercenary", sub_name="Hateru")})

        } else {

            call MercenaryChallenge_CommonTalk.MercenaryChallenge_Common_Victory_Amani({'MercenarySoldier002': ActorIdentifier(name="Npc_MercenarySoldier_Hylia002B", sub_name="Hateru"), 'MercenarySoldier003': ActorIdentifier(name="Npc_MercenarySoldier_Hylia003B", sub_name="Hateru"), 'MercenarySoldier006': ActorIdentifier(name="Npc_MercenarySoldier_Goron001B", sub_name="Hateru"), 'MercenarySoldier008': ActorIdentifier(name="Npc_MercenarySoldier_Hylia008B", sub_name="Hateru"), 'MercenarySoldier009': ActorIdentifier(name="Npc_MercenarySoldier_Hylia009B", sub_name="Hateru"), 'MercenarySoldier007': ActorIdentifier(name="Npc_MercenarySoldier_Goron002B", sub_name="Hateru")})

        }
    }

    NPC_oasis004_fr02[Finale(Reader)].EventNPCTurnToTarget({'Target': 2, 'FaceControlType': 0, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    NPC_oasis004_fr02[Finale(Reader)].EventTriggerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'ActorName': 'Npc_MercenarySoldier_Goron001B', 'InstanceName': 'Hateru', 'ResetArriveTransformFixed': False})

    call MercenaryChallenge_HyrulePlain.ClearCameraPan({'Actor1ActorName': 'NPC_oasis004_fr02', 'Actor1InstanceName': 'Hateru', 'LeaderActor': ActorIdentifier(name="NPC_oasis004_fr02", sub_name="Hateru")})

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_Hateru_RemoveBallEventCheck'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_SoldierAllDead'}) {
            NPC_oasis004_fr02[Finale(Reader)].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Firone:Talk1064', 'ASName': 'RideForward', 'IsNotOpenIfSkipedMostRecent': False})
            NPC_oasis004_fr02[Finale(Reader)].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_006_TalkLeaderBeforeDefeat'}) {
                NPC_oasis004_fr02[Finale(Reader)].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Firone:Talk1065', 'ASName': 'RideWait', 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                NPC_oasis004_fr02[Finale(Reader)].EventTalk({'MessageId': 'EventFlowMsg/MercenaryChallenge_Hateru:Talk1025', 'ASName': 'RideWait', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
            }
            Event49:
            NPC_oasis004_fr02[Finale(Reader)].EventPlayAS({'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'RideWait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
            GameSystemActor.EventEventFadeOut({'Color': 0, 'Length': 1, 'IsWaitEnd': True, 'IsNoPlayAnime': False})

            call MercenaryChallenge_HyrulePlain.SoundControl_PreClearTalk()


            call MercenaryChallenge_HyrulePlain.LinkWarpBeforeSetting({'AnchorActorName': 'AnchorAction1', 'AnchorInstanceName': 'リンク'})


            call InitTalk.InitTalkOnEvent({'Arg_Turn': 4, 'Self': 'Reader'})

            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'HyruleCastleIncident_IsAfter_ReturnBCAfterBlackZelda_Exp'}) {

                call MercenaryChallenge_Hateru.MercenaryChallenge_Hateru_Finish_Gerudoin()

            } else {

                call MercenaryChallenge_Hateru.MercenaryChallenge_Hateru_Finish()

            }

            call MercenaryChallenge_Hateru.HateruFinaleEventCamera()

            EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            GameSystemActor.EventEventFadeIn({'Color': 0, 'Length': 1, 'IsWaitEnd': True, 'IsNoPlayAnime': False})

            call Clear_Talk({'Reader': ActorIdentifier(name="NPC_oasis004_fr02", sub_name="Hateru")})

        } else {
            NPC_oasis004_fr02[Finale(Reader)].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Firone:Talk1023', 'NotPlayLipSyncAnim': False, 'ASName': 'RideForward', 'IsNotOpenIfSkipedMostRecent': False})
            NPC_oasis004_fr02[Finale(Reader)].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_006_TalkLeaderBeforeDefeat'}) {
                NPC_oasis004_fr02[Finale(Reader)].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Firone:Talk1066', 'ASName': 'RideWait', 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                NPC_oasis004_fr02[Finale(Reader)].EventTalk({'MessageId': 'EventFlowMsg/MercenaryChallenge_Hateru:Talk1025', 'ASName': 'RideWait', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
            }
            goto Event49
        }
    } else {
        NPC_oasis004_fr02[Finale(Reader)].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        NPC_oasis004_fr02[Finale(Reader)].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Firone:Talk1024', 'NotPlayLipSyncAnim': False, 'ASName': 'RideForward', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event49
    }
}

void MercenaryChallenge_Hateru_RemoveBall() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'HyruleCastleIncident_IsAfter_ReturnBCAfterBlackZelda_Exp'}) {

        call MercenaryChallenge_CommonTalk.MercenaryChallenge_Common_BatlleWait_Amani_GerudoIn({'MercenarySoldier002': ActorIdentifier(name="Npc_MercenarySoldier_Hylia002B", sub_name="Hateru"), 'MercenarySoldier003': ActorIdentifier(name="Npc_MercenarySoldier_Hylia003B", sub_name="Hateru"), 'MercenarySoldier006': ActorIdentifier(name="Npc_MercenarySoldier_Goron001B", sub_name="Hateru"), 'MercenarySoldier007': ActorIdentifier(name="Npc_MercenarySoldier_Goron002B", sub_name="Hateru"), 'MercenarySoldier008': ActorIdentifier(name="Npc_MercenarySoldier_Hylia008B", sub_name="Hateru"), 'MercenarySoldier009': ActorIdentifier(name="Npc_MercenarySoldier_Hylia009B", sub_name="Hateru"), 'Reader': ActorIdentifier(name="NPC_oasis004_fr02", sub_name="Hateru"), 'MercenarySoldier004': ActorIdentifier(name="Npc_BaseCamp_Gerudo002_Mercenary", sub_name="Hateru")})

    } else {

        call MercenaryChallenge_CommonTalk.MercenaryChallenge_Common_BatlleWait_Amani({'MercenarySoldier002': ActorIdentifier(name="Npc_MercenarySoldier_Hylia002B", sub_name="Hateru"), 'MercenarySoldier003': ActorIdentifier(name="Npc_MercenarySoldier_Hylia003B", sub_name="Hateru"), 'MercenarySoldier006': ActorIdentifier(name="Npc_MercenarySoldier_Goron001B", sub_name="Hateru"), 'MercenarySoldier007': ActorIdentifier(name="Npc_MercenarySoldier_Goron002B", sub_name="Hateru"), 'MercenarySoldier008': ActorIdentifier(name="Npc_MercenarySoldier_Hylia008B", sub_name="Hateru"), 'MercenarySoldier009': ActorIdentifier(name="Npc_MercenarySoldier_Hylia009B", sub_name="Hateru"), 'Reader': ActorIdentifier(name="NPC_oasis004_fr02", sub_name="Hateru")})

    }
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'NPC_oasis004_fr02', 'Actor1InstanceName': 'Hateru', 'PosVector': [5.309999942779541, -0.41999998688697815, -18.780000686645508], 'AtVector': [5.210000038146973, 0.019999999552965164, -13.800000190734863], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True})
    NPC_oasis004_fr02[Hateru].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Hateru:Talk1005', 'NotPlayLipSyncAnim': False, 'ASName': 'RideWait', 'IsNotOpenIfSkipedMostRecent': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MercenaryChallenge_Hateru_RemoveBall'})
    Event11:
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_Hateru_RemoveBallEventCheck', 'Value': True})
    NPC_oasis004_fr02[Hateru].EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': True, 'IsChallenge': False, 'DisplayFrame': 90, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Firone:Near1007', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'StepName': 'Exterminate', 'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'Mercenary_Hateru_Bloody', 'IsIgnoreChallengeProgressUI': True, 'IsWaitEnd': True})
    NPC_oasis004_fr02[Hateru].EventTriggerEmitXLink({'SLinkKey': 'Mercenary_BattleCry00', 'ELinkKey': ''})
    Npc_MercenarySoldier_Hylia002B[Hateru].EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': True, 'IsChallenge': False, 'DisplayFrame': 90, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Firone:Near1008', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    Npc_MercenarySoldier_Hylia003B[Hateru].EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': True, 'IsChallenge': False, 'DisplayFrame': 90, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Firone:Near1009', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    Npc_MercenarySoldier_Goron001B[Hateru].EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': True, 'IsChallenge': False, 'DisplayFrame': 90, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Firone:Near1012', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    Npc_MercenarySoldier_Goron002B[Hateru].EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': True, 'IsChallenge': False, 'DisplayFrame': 90, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Firone:Near1013', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    Npc_MercenarySoldier_Hylia008B[Hateru].EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': True, 'IsChallenge': False, 'DisplayFrame': 90, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Firone:Near1014', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    Npc_MercenarySoldier_Hylia009B[Hateru].EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': True, 'IsChallenge': False, 'DisplayFrame': 90, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Firone:Near1015', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'HyruleCastleIncident_IsAfter_ReturnBCAfterBlackZelda_Exp'}) {
        Npc_BaseCamp_Gerudo002_Mercenary[Hateru].EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': True, 'IsChallenge': False, 'DisplayFrame': 90, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Firone:Near1010', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void MasterSword_Check() {
    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_006_TalkLeaderBeforeDefeat'}) {
        NPC_oasis004_fr02[MasterSword_Check(Reader)].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Hateru:Talk1027', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
    }
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MercenaryChallenge_HaveMasterSword_TalkedLin', 'Index': -1}) {
        NPC_oasis004_fr02[MasterSword_Check(Reader)].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Hateru:Talk1029', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        NPC_oasis004_fr02[MasterSword_Check(Reader)].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Hateru:Talk1046', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else
    if !Player.EventQueryIsEquipWeapon({'WeaponName': 'Weapon_Sword_070', 'WeaponSlot': 0}) {
        GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'GameDataName': 'MercenaryChallenge_HaveMasterSword_TalkedLin', 'Value': True})
        NPC_oasis004_fr02[MasterSword_Check(Reader)].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Firone:Talk1019', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        NPC_oasis004_fr02[MasterSword_Check(Reader)].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Hateru:Talk1029', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Exterminate_Npc_MercenarySoldier_Hylia002B_Firone_Talk() {

    call MercenaryChallenge_Firone.Exterminate_Npc_MercenarySoldier_Hylia002B_Firone_Talk()

}

void Exterminate_Npc_MercenarySoldier_Hylia003B_Firone_Talk() {

    call MercenaryChallenge_Firone.Exterminate_Npc_MercenarySoldier_Hylia003B_Firone_Talk()

}

void Exterminate_Npc_MercenarySoldier_Goron001B_Firone_Talk() {

    call MercenaryChallenge_Firone.Exterminate_Npc_MercenarySoldier_Goron001B_Firone_Talk()

}

void Exterminate_Npc_MercenarySoldier_Hylia008B_Firone_Talk() {

    call MercenaryChallenge_Firone.Exterminate_Npc_MercenarySoldier_Hylia008B_Firone_Talk()

}

void Exterminate_Npc_MercenarySoldier_Gerudo001B_Firone_Talk() {

    call MercenaryChallenge_Firone.Exterminate_Npc_MercenarySoldier_Gerudo001B_Firone_Talk()

}

void Exterminate_Npc_MercenarySoldier_Goron002B_Firone_Talk() {

    call MercenaryChallenge_Firone.Exterminate_Npc_MercenarySoldier_Goron002B_Firone_Talk()

}

void Exterminate_Npc_MercenarySoldier_Hylia009B_Firone_Talk() {

    call MercenaryChallenge_Firone.Exterminate_Npc_MercenarySoldier_Hylia009B_Firone_Talk()

}

void Exterminate_Npc_MercenarySoldier_Hylia001_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_Hateru_Ready_isFirstTalk'}) {
        Event92:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_SoldierAllDead'}) {
            Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Firone:Talk1044', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Firone:Talk1011', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MercenaryChallenge_006_TalkLeaderBeforeDefeat'})
        if Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
              case [0, 1, 4, 5, 8]:
                switch EventWorldManagerController.EventQueryTimeDivision() {
                  case [0, 1]:
                    Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Firone:Talk_016', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                  case [2, 3]:
                    Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Firone:Talk_017', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                  case [4, 5]:
                    Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Firone:Talk_021', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                  case [6, 7]:
                    Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Firone:Talk_018', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                }
              case [2, 3]:
                Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Firone:Talk_019', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
              case [6, 7]:
                Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Firone:Talk_020', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
        }
    } else {
        NPC_oasis004_fr02[Hateru].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MercenaryChallenge_Hateru:Talk1033', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MercenaryChallenge_Hateru_Ready_isFirstTalk'})
        goto Event92
    }
}

void Exterminate_Npc_MercenarySoldier_Hylia001_Near() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_SoldierAllDead'}) {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': True, 'DisplayFrame': 90, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Firone:Near1017', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    } else {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': True, 'DisplayFrame': 90, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Firone:Near1005', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Exterminate_Npc_MercenarySoldier_Hylia002A_Near() {
    if Npc_EventStarter.EventQueryIsDown()
    && Npc_EventStarter.EventQueryIsBattle() in [0, 1] {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': True, 'IsChallenge': False, 'DisplayFrame': 90, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Firone:Near1016', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Exterminate_Npc_MercenarySoldier_Hylia003A_Near() {
    if Npc_EventStarter.EventQueryIsDown()
    && Npc_EventStarter.EventQueryIsBattle() in [0, 1] {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': True, 'IsChallenge': False, 'DisplayFrame': 90, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Firone:Near1018', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Exterminate_Npc_MercenarySoldier_Hylia004A_Near() {
    if Npc_EventStarter.EventQueryIsDown()
    && Npc_EventStarter.EventQueryIsBattle() in [0, 1] {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': True, 'IsChallenge': False, 'DisplayFrame': 90, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Firone:Near1020', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Exterminate_Npc_MercenarySoldier_Hylia006A_Near() {
    if Npc_EventStarter.EventQueryIsDown()
    && Npc_EventStarter.EventQueryIsBattle() in [0, 1] {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': True, 'IsChallenge': False, 'DisplayFrame': 90, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Firone:Near1021', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Exterminate_Npc_MercenarySoldier_Hylia007A_Near() {
    if Npc_EventStarter.EventQueryIsDown()
    && Npc_EventStarter.EventQueryIsBattle() {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': True, 'IsChallenge': False, 'DisplayFrame': 90, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Firone:Near1022', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Exterminate_Npc_MercenarySoldier_Hylia008A_Near() {
    if Npc_EventStarter.EventQueryIsDown()
    && Npc_EventStarter.EventQueryIsBattle() in [0, 1] {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': True, 'IsChallenge': False, 'DisplayFrame': 90, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Firone:Near1023', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Exterminate_Npc_MercenarySoldier_Hylia009A_Near() {
    if Npc_EventStarter.EventQueryIsDown()
    && Npc_EventStarter.EventQueryIsBattle() in [0, 1] {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': True, 'IsChallenge': False, 'DisplayFrame': 90, 'MessageID': 'EventFlowMsg/MercenaryChallenge_Firone:Near1024', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Ready_Npc_MercenarySoldier_CommonTalk_Goron() {

    call MercenaryChallenge_Hateru.SpikeBallActorPause()


    call MercenaryChallenge_Firone.ReadyCommonTalk_Amani({'LeaderActor': ActorIdentifier(name="NPC_oasis004_fr02", sub_name="Hateru"), 'MercenarySoldier002': ActorIdentifier(name="Npc_MercenarySoldier_Hylia002B", sub_name="Hateru"), 'MercenarySoldier003': ActorIdentifier(name="Npc_MercenarySoldier_Hylia003B", sub_name="Hateru"), 'MercenarySoldier006': ActorIdentifier(name="Npc_MercenarySoldier_Goron001B", sub_name="Hateru"), 'MercenarySoldier007': ActorIdentifier(name="Npc_MercenarySoldier_Goron002B", sub_name="Hateru"), 'MercenarySoldier008': ActorIdentifier(name="Npc_MercenarySoldier_Hylia008B", sub_name="Hateru"), 'MercenarySoldier009': ActorIdentifier(name="Npc_MercenarySoldier_Hylia009B", sub_name="Hateru"), 'MercenarySoldier004': ActorIdentifier(name="Npc_BaseCamp_Gerudo002_Mercenary", sub_name="Hateru")})


    call MercenaryChallenge_Firone.AmaniMember_OneTalk_Goron()

    goto Event258
}

void Ready_Npc_MercenarySoldier_CommonTalk_Gerudo() {

    call MercenaryChallenge_Hateru.SpikeBallActorPause()


    call MercenaryChallenge_Firone.ReadyCommonTalk_Amani({'LeaderActor': ActorIdentifier(name="NPC_oasis004_fr02", sub_name="Hateru"), 'MercenarySoldier002': ActorIdentifier(name="Npc_MercenarySoldier_Hylia002B", sub_name="Hateru"), 'MercenarySoldier003': ActorIdentifier(name="Npc_MercenarySoldier_Hylia003B", sub_name="Hateru"), 'MercenarySoldier006': ActorIdentifier(name="Npc_MercenarySoldier_Goron001B", sub_name="Hateru"), 'MercenarySoldier007': ActorIdentifier(name="Npc_MercenarySoldier_Goron002B", sub_name="Hateru"), 'MercenarySoldier008': ActorIdentifier(name="Npc_MercenarySoldier_Hylia008B", sub_name="Hateru"), 'MercenarySoldier009': ActorIdentifier(name="Npc_MercenarySoldier_Hylia009B", sub_name="Hateru"), 'MercenarySoldier004': ActorIdentifier(name="Npc_BaseCamp_Gerudo002_Mercenary", sub_name="Hateru")})


    call MercenaryChallenge_Firone.AmaniMember_OneTalk_Gerudo()

    goto Event258
}

void EndFlow() {
    goto Event143
}

void ResetFlag() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'Value': False, 'GameDataName': 'MercenarySoldier_EnemyFound'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'Value': False, 'GameDataName': 'MercenaryChallenge_Hateru_Ready_isFirstTalk'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'Value': False, 'GameDataName': 'MercenaryChallenge_Hateru_Exterminate_isFirstTalk'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'Value': False, 'GameDataName': 'MercenaryChallenge_Hateru_SoldierMember_isFirstTalk'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'Value': False, 'GameDataName': 'MercenaryChallenge_Hateru_RemoveBall'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'Value': False, 'GameDataName': 'MercenaryChallenge_SoldierAllDead'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'Value': True, 'GameDataName': 'MercenaryChallenge_HateruDelete'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'Value': False, 'GameDataName': 'MercenaryChallenge_Hateru_Replay'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'Value': True, 'GameDataName': 'MercenaryChallenge_Firone_Replay'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'Value': True, 'GameDataName': 'MercenaryChallenge_BloodyMoonStandby_Amani'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'Value': False, 'GameDataName': 'MercenaryChallenge_FironeDelete'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_006_TalkLeaderBeforeDefeat', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': 0, 'Value': False, 'GameDataName': 'MercenaryChallenge_Hateru_EnemyBattleStart'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MercenaryChallenge_Hateru_RemoveBallEventCheck', 'Value': False})
}

void Hateru_Bloody_MercenarySoldier_ReadyBattleStart() {
    goto Event11
}
