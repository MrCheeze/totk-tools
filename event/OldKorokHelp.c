-------- EventFlow: OldKorokHelp --------

Actor: Npc_OldKorok[OldKorok_First]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventTalk', 'EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS', 'EventNPCChangePostureWithAS', 'EventTriggerLookAtObject', 'EventAIScheduleWarpToAnchor', 'EventTriggerChangeAIScheduleEquipState']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Dm_Locator[demoPos]
entrypoint: None()
actions: ['EventWarpToTargetActor']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerBalloonMessage', 'EventTalk', 'EventTriggerSetHaveTalked', 'EventTriggerLookAtObject', 'EventAIScheduleWarpToAnchor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryIsExistInPouch']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventOpenKorokSeedDisplay', 'EventCloseKorokSeedDisplay', 'EventEventFadeIn', 'EventEventFadeOut', 'EventTriggerRequestAutoSave', 'EventCloseMessageDialog']
queries: ['EventQueryTalkChoice2', 'EventQueryTalkChoice4']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataEnum']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: ['EventQueryIsEventStarter']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerWarpToNearAnchor', 'EventTriggerParticipateEvent', 'EventPlayerUnequip']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

void Ready_Npc_OldKorok_Near() {
    Npc_EventStarter.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/OldKorokHelp:Near01', 'IsChallenge': True, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void STEP2_Npc_OldKorok_Near() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'OldKorokHelp_IsAfter_STEP1_Final_Exp'})
    && !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Obj_KorokNuts', 'Num': 1, 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': True, 'MessageID': 'EventFlowMsg/OldKorokHelp:Near03', 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    } else {
        Npc_EventStarter.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/OldKorokHelp:Near03', 'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void STEP2_Npc_OldKorok_Talk() {
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_OldKorok', 'IsCheckInstanceName': True, 'InstanceName': 'OldKorok_First'}) {

        call StartTalk()

    }
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'OldKorok_TalkAboutKorokNuts'}) {
        Event32:
        GameSystemActor.EventOpenKorokSeedDisplay({'IsWaitEnd': True})
        if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Obj_KorokNuts', 'Num': 1, 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'OldKorok_FirstShowKorokNuts'}) {
                Npc_EventStarter.EventTalk({'ChoiceNumber': 2, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'MessageId': 'EventFlowMsg/OldKorokHelp:Talk34', 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Event20:
                if !GameSystemActor.EventQueryTalkChoice2() {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/OldKorokHelp:Talk35', 'ChoiceNumber': 4, 'ChoiceLabel1': 11, 'ChoiceLabel2': 12, 'ChoiceLabel3': 13, 'ChoiceLabel4': 21, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    switch GameSystemActor.EventQueryTalkChoice4() {
                      case 0:

                        call Npc_OldKorok.Sel_Weapon()

                      case 1:

                        call Npc_OldKorok.Sel_Bow()

                      case 2:

                        call Npc_OldKorok.Sel_Shield()

                      case 3:
                        Event72:
                        if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_OldKorok', 'IsCheckInstanceName': True, 'InstanceName': 'OldKorok_First'}) {
                            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/OldKorokHelp:Talk43', 'IsNotOpenIfSkipedMostRecent': False})
                        } else {
                            Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_OldKorok:Talk04', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        }
                        GameSystemActor.EventCloseKorokSeedDisplay({'IsWaitEnd': True})
                    }
                } else
                goto Event72
            } else {
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'OldKorok_FirstShowKorokNuts', 'Value': True, 'Index': -1})
                Npc_EventStarter.EventTalk({'ChoiceNumber': 2, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'MessageId': 'EventFlowMsg/OldKorokHelp:Talk33', 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event20
            }
        } else {
            Npc_EventStarter.EventTalk({'ChoiceCancelNo': 1, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'MessageId': 'EventFlowMsg/OldKorokHelp:Talk32', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_OldKorok', 'IsCheckInstanceName': True, 'InstanceName': 'OldKorok_First'}) {
                Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/OldKorokHelp:Talk32_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
            }
            GameSystemActor.EventCloseKorokSeedDisplay({'IsWaitEnd': True})
        }
    } else {
        Npc_EventStarter.EventTalk({'ChoiceCancelNo': 1, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'MessageId': 'EventFlowMsg/OldKorokHelp:Talk31', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'OldKorok_TalkAboutKorokNuts', 'Value': True, 'Index': -1})
        goto Event32
    }
}

void OldKorokHelp_Helped() {
    Npc_OldKorok[OldKorok_First].EventTriggerParticipateEvent()
    Player.EventTriggerParticipateEvent()
    Npc_OldKorok[OldKorok_First].EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS({'Value': True})
    Player.EventPlayerUnequip({'IsWaitEnd': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
    EventCamera.EventMoveToTargetPosCamera({'PosVector': [-1704.8399658203125, 308.8299865722656, -1076.6800537109375], 'AtVector': [-1702.0, 307.7799987792969, -1074.3499755859375], 'TargetFovy': 50.0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'MoveTime': 30, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Npc_OldKorok[OldKorok_First].EventTalk({'ChoiceCancelNo': 1, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': True, 'MessageId': 'EventFlowMsg/OldKorokHelp:Talk53', 'ASName': '', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_OldKorok[OldKorok_First].EventTalk({'ChoiceCancelNo': 1, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': True, 'ASName': '', 'MessageId': 'EventFlowMsg/OldKorokHelp:Talk54', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventEventFadeOut({'IsNoPlayAnime': False, 'IsWaitEnd': True, 'Color': 0, 'Length': 1})

    call InitTalk.InitTalkOnEvent({'Arg_Turn': 0, 'Self': ActorIdentifier(name="Npc_OldKorok", sub_name="OldKorok_First")})

    Player.EventPlayerWarpToNearAnchor({'IsWaitEnd': False, 'ActorName': 'DestinationAnchor', 'InstanceName': 'PlayerPos_Out', 'UseDemoWait': True})
    Npc_OldKorok[OldKorok_First].EventAIScheduleWarpToAnchor({'InstanceName': 'OldKorokClearPos', 'IsWaitEnd': True, 'AnchorType': 0, 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    Npc_OldKorok[OldKorok_First].EventTriggerChangeAIScheduleEquipState({'EquipState': 0})
    EventSystemActor.EventWait({'Frames': 5, 'IsWaitEnd': True})
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Npc_OldKorok', 'Actor1InstanceName': 'OldKorok_First', 'PosVector': [4.460000038146973, 1.2000000476837158, 8.229999542236328], 'AtVector': [0.47999998927116394, 1.5299999713897705, 3.3299999237060547], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Npc_OldKorok[OldKorok_First].EventNPCChangePostureWithAS({'IsWaitEnd': False, 'Posture': 0})
    Npc_OldKorok[OldKorok_First].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'Direction': 0.0, 'ResetArriveTransformFixed': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    GameSystemActor.EventEventFadeIn({'IsNoPlayAnime': False, 'IsWaitEnd': True, 'Color': 0, 'Length': 1})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
    Npc_OldKorok[OldKorok_First].EventTalk({'ChoiceCancelNo': 1, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/OldKorokHelp:Talk06', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_OldKorok[OldKorok_First].EventTalk({'MessageId': 'EventFlowMsg/OldKorokHelp:Talk06_01', 'EndDialogOption': 3, 'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
    EventSystemActor.EventWait({'Frames': 10, 'IsWaitEnd': True})
    Npc_OldKorok[OldKorok_First].EventTalk({'ChoiceCancelNo': 1, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'MessageId': 'EventFlowMsg/OldKorokHelp:Talk21', 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

    call STEP2()

}

void AfterBlackZelda() {
    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
    EventSystemActor.EventWait({'Frames': 10, 'IsWaitEnd': True})
    Npc_EventStarter.EventTalk({'ChoiceCancelNo': 1, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/OldKorokHelp:Talk56', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Event15:

    call STEP2()

}

void Ready_Npc_OldKorok_OldKorok_First_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    GameSystemActor.EventTriggerRequestAutoSave()

    call Dm_SY_0003.EntryPoint0()

    Npc_EventStarter.EventTriggerSetHaveTalked({'value': False, 'IsReflectWhenSleep': False})
    if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'OldKorokHelp_IsAfter_Ready_Exp'}) {
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'OldKorokHelp', 'StepName': 'STEP1', 'IsIgnoreCompletedChallenge': True, 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
        GameSystemActor.EventTriggerRequestAutoSave()
    }
}

void STEP1_Npc_OldKorok_OldKorok_First_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    Npc_EventStarter.EventTalk({'ChoiceCancelNo': 1, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/OldKorokHelp:Talk05', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_EventStarter.EventTalk({'ChoiceCancelNo': 1, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/OldKorokHelp:Talk07', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_EventStarter.EventTriggerSetHaveTalked({'value': False, 'IsReflectWhenSleep': False})
}

void StartTalk() {

    fork {
        Player.EventPlayerWarpToNearAnchor({'IsWaitEnd': False, 'ActorName': 'DestinationAnchor', 'InstanceName': 'PlayerPos_Out', 'UseDemoWait': True})
    } {
        EventCamera.EventMoveToTargetPosCamera({'PosVector': [-1681.969970703125, 315.0199890136719, -1109.1099853515625], 'AtVector': [-1679.6400146484375, 315.7200012207031, -1114.1400146484375], 'TargetFovy': 50.0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_EventStarter.EventAIScheduleWarpToAnchor({'InstanceName': 'OldKorokClearPos', 'IsWaitEnd': True, 'AnchorType': 0, 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    } {
        Dm_Locator[demoPos].EventWarpToTargetActor({'IsWaitEnd': True, 'YAngle': -71.84742736816406, 'TargetActorKind': 0, 'ActorName': '', 'InstanceName': '', 'OffsetBase': 0, 'PositionOffset': [0.0, 0.0, 0.0]})
    }

    Npc_EventStarter.EventTriggerLookAtObject({'ActorName': 'Dm_Locator', 'OffsetBase': 1, 'InstanceName': 'demoPos', 'Target': 2, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ResetArriveTransformFixed': False})

    call Npc_OldKorok.TalkSetting()

}

void STEP2() {
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'OldKorok_FirstTalk', 'Value': True, 'Index': -1})
    if !GameDataActor.EventQueryIsGameDataEnum({'Index': -1, 'GameDataName': 'Step_OldKorokHelp', 'Value': 'STEP2_BaseCamp'}) {
        Event60:
        GameSystemActor.EventTriggerRequestAutoSave()
    } else
    if GameDataActor.EventQueryIsGameDataEnum({'Index': -1, 'GameDataName': 'Step_OldKorokHelp', 'Value': 'STEP2_Final'}) {
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'StepName': 'STEP2', 'IsIgnoreCompletedChallenge': True, 'ChallengeName': 'OldKorokHelp', 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
    }
    goto Event60
}

void FirstTalkAtBaseCamp() {
    Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/OldKorokHelp:Talk56_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
    EventSystemActor.EventWait({'Frames': 10, 'IsWaitEnd': True})
    Npc_EventStarter.EventTalk({'ChoiceCancelNo': 1, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/OldKorokHelp:Talk56', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    goto Event15
}
