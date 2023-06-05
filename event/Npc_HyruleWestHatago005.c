-------- EventFlow: Npc_HyruleWestHatago005 --------

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventDisableRecentTalkFlag', 'EventTriggerSetVolatileGeneralPurposeFlag', 'EventNPCTurnToTarget', 'EventTriggerNPCChangePosture']
queries: ['EventQueryIsOnRecentTalkFlag', 'EventQueryVolatileGeneralPurposeFlagOn', 'EventQueryAIScheduleCheckActorAction14', 'EventQueryOwningObjectPlayerInterference']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventRequestQuit', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: HorseGodTextNPC[HorseGod]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn', 'EventResetGimmick']
queries: ['EventQueryRandomChoice2']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_HyruleWestHatago005
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerTurnAndLook']
queries: ['EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Npc_HyruleWestHatago005[Burned_WakkaCharm_CommonFlow(ActorName)]
entrypoint: Burned_WakkaCharm_CommonFlow(ActorName)
actions: ['EventTalk', 'EventTriggerNPCChangePosture', 'EventAIScheduleMoveToAnchor', 'EventTriggerSetRecentTalkFlag', 'EventTriggerSetVolatileGeneralPurposeFlag']
queries: ['EventQueryVolatileGeneralPurposeFlagOn', 'EventQueryIsOnRecentTalkFlag', 'EventQueryAIScheduleCheckActorAction14']
params: None

Actor: Npc_HyruleWestHatago005[Attacked_WakkaCharm_CommonFlow(ActorName)]
entrypoint: Attacked_WakkaCharm_CommonFlow(ActorName)
actions: ['EventTalk', 'EventTriggerNPCChangePosture', 'EventAIScheduleMoveToAnchor', 'EventTriggerSetRecentTalkFlag', 'EventTriggerSetVolatileGeneralPurposeFlag']
queries: ['EventQueryVolatileGeneralPurposeFlagOn', 'EventQueryIsOnRecentTalkFlag', 'EventQueryAIScheduleCheckActorAction14']
params: None

void Talk() {

    call OutSide({'HorseInnBoolean': 'HorseInn_ArrivedMaritta'})

}

void UmayadoMasterInside_Talk() {

    call InSide({'HorseInnBoolean': 'HorseInn_ArrivedMaritta'})

}

void OutSide() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HorseInnBoolean'}) {

        call HorseInnMaster.FitstTime_HorseAsosiation({'HorseInnBoolean': 'HorseInnBoolean'})

    }

    call HorseInnMaster.General_OutsideTalk()

    Event1:
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'HyruleCastleIncident_IsAfter_ReturnBCAfterBlackZelda_Exp'}) {

        call IsAfter_ReturnBCAfterBlackZelda_Message()


        call IsByeTalk()

        Event32:
        Npc_EventStarter.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Goodbye_01', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else {

        call InsertBluePrint()


        call IsByeTalk()

        goto Event32
    }
}

void InSide() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    HorseGodTextNPC[HorseGod].EventTriggerParticipateEvent()
    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HorseInnBoolean'}) {

        call HorseInnMaster.FitstTime_HorseAsosiation({'HorseInnBoolean': 'HorseInnBoolean'})

    }

    call HorseInnMaster.General_InsideTalk()

    goto Event1
}

void IsByeTalk() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HorseInn_RegisteredAssociation'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'ResisteredAssociation_AtBaseCamp'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'ResisteredAssociation_AtBaseCamp_FollowTalk_End'}) {
                Event35:
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'isWhistlingTalk'}) {
                    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'isWhistlingTalk'})
                    Event37:
                    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'HyruleCastleIncident_IsAfter_ReturnBCAfterBlackZelda_Exp'})
                    && !GameSystemActor.EventQueryRandomChoice2() {
                        Npc_EventStarter.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Goodbye_04', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    } else {
                        Npc_EventStarter.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk17', 'ASName': '', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    }
                    EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
                } else
                if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'ResisteredAssociation_AfterRecentTalkFlag', 'Index': -1}) {
                        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'ResisteredAssociation_AfterRecentTalkFlag', 'Value': False})
                    } else
                    goto Event37
                } else
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'ResisteredAssociation_AfterRecentTalkFlag', 'Index': -1}) {
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'ResisteredAssociation_AfterRecentTalkFlag', 'Value': False})
                }
            } else {
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'ResisteredAssociation_AtBaseCamp_FollowTalk_End', 'Value': True})
                Event27:
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'isWhistlingTalk'}) {
                    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'isWhistlingTalk'})
                }
                Npc_EventStarter.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk17', 'ASName': '', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                call FirstTimeFlag_End()

                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'ResisteredAssociation_AfterRecentTalkFlag', 'Value': False})
                EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
            }
        } else
        goto Event35
    } else
    goto Event27
}

void InsertBluePrint() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DeepHoleSurvey2_IsAfter_NotReady_Exp'})
    && GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DeepHoleSurvey2_IsAfter_Ready_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HorseInn_RegisteredAssociation'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'ResisteredAssociation_AtBaseCamp'}) {
                if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'ResisteredAssociation_AtBaseCamp_FollowTalk_End'}) {
                    Event23:
                    Npc_EventStarter.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Goodbye_05', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                }
                Event41:
                Npc_EventStarter.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Goodbye_06', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                call FirstTimeFlag_End()

                EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
            } else {
                goto Event41
            }
        } else {
            goto Event23
        }
    }
}

void FirstTimeFlag_End() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HorseInn_RegisteredAssociation'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'ResisteredAssociation_AtBaseCamp'})
        && GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'ResisteredAssociation_AtBaseCamp_FollowTalk_End'}) {
            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'ResisteredAssociation_AtBaseCamp_FollowTalk_End'})
        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'HorseInn_RegisteredAssociation'})
    }
}

void DoNot_ZonauMagic_WakkaCharm_NewMaritta() {

    call UmayadoMasterInteractSetting()

    switch Npc_EventStarter.EventQueryOwningObjectPlayerInterference({'IsCheckBrokenInterferedOnly': False}) {
      case [1, 2, 3, 4, 5, 7]:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'DoNotZonauMagic_WakkaCharm_NewMaritta'})
        && !Npc_EventStarter.EventQueryVolatileGeneralPurposeFlagOn() {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:DoNotWakka_02', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Event49:
            Npc_EventStarter.EventDisableRecentTalkFlag({'IsWaitEnd': True})
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:DoNotWakka_01', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'DoNotZonauMagic_WakkaCharm_NewMaritta'})
            Npc_EventStarter.EventTriggerSetVolatileGeneralPurposeFlag({'Value': True})
            goto Event49
        }
      case 6:

        call Attacked_WakkaCharm_CommonFlow({'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:BurnedWakka_01', 'ActorName': ActorIdentifier(name="Npc_HyruleWestHatago005")})

      case 8:

        call Burned_WakkaCharm_CommonFlow({'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:BurnedWakka_01', 'ActorName': ActorIdentifier(name="Npc_HyruleWestHatago005")})

    }
}

void Burned_WakkaCharm_CommonFlow() {
    if !Npc_HyruleWestHatago005[Burned_WakkaCharm_CommonFlow(ActorName)].EventQueryVolatileGeneralPurposeFlagOn() {
        Npc_HyruleWestHatago005[Burned_WakkaCharm_CommonFlow(ActorName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:BurnedWakka_Common02', 'IsNotOpenIfSkipedMostRecent': False})
        Event63:
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        Npc_HyruleWestHatago005[Burned_WakkaCharm_CommonFlow(ActorName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:BurnedWakka_Common03', 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventResetGimmick({'IsWaitEnd': True, 'IsResetCamera': False, 'Option': 0})
        if !Player.EventQueryCheckPlayerState({'State': 6}) {
            Player.EventPlayerTurnAndLook({'Target': 1, 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
        }
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        Npc_HyruleWestHatago005[Burned_WakkaCharm_CommonFlow(ActorName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:BurnedWakka_Common04', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_HyruleWestHatago005[Burned_WakkaCharm_CommonFlow(ActorName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'MessageId', 'IsNotOpenIfSkipedMostRecent': False})
        Event61:
        if Npc_HyruleWestHatago005[Attacked_WakkaCharm_CommonFlow(ActorName)].EventQueryIsOnRecentTalkFlag() {
            Npc_HyruleWestHatago005[Attacked_WakkaCharm_CommonFlow(ActorName)].EventTriggerSetRecentTalkFlag({'value': False, 'IsReflectWhenSleep': False})
        }
        Npc_HyruleWestHatago005[Attacked_WakkaCharm_CommonFlow(ActorName)].EventTriggerNPCChangePosture({'Posture': 1, 'IsPlayCurrentAS': False})
        switch Npc_HyruleWestHatago005[Attacked_WakkaCharm_CommonFlow(ActorName)].EventQueryAIScheduleCheckActorAction14() {
          case 1:
            Npc_HyruleWestHatago005[Attacked_WakkaCharm_CommonFlow(ActorName)].EventAIScheduleMoveToAnchor({'IsWaitEnd': False, 'InstanceName': '', 'ASName': '', 'IsTurnToAnchorRot': False, 'IsAlignAnchorPos': False, 'DesiredGear': 1, 'ActionType': 0, 'AnchorType': 0, 'ForceIsNotAlignmentWaitPosition': False, 'WaitCancelPathFinding': False})
          case 5:
            Npc_HyruleWestHatago005[Attacked_WakkaCharm_CommonFlow(ActorName)].EventAIScheduleMoveToAnchor({'AnchorType': 4, 'IsWaitEnd': False, 'InstanceName': '', 'ASName': '', 'IsTurnToAnchorRot': False, 'IsAlignAnchorPos': False, 'DesiredGear': 1, 'ActionType': 0, 'ForceIsNotAlignmentWaitPosition': False, 'WaitCancelPathFinding': False})
        }
    } else {
        Npc_HyruleWestHatago005[Burned_WakkaCharm_CommonFlow(ActorName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:BurnedWakka_Common01', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_HyruleWestHatago005[Burned_WakkaCharm_CommonFlow(ActorName)].EventTriggerSetVolatileGeneralPurposeFlag({'Value': True})
        goto Event63
    }
}

void IsAfter_ReturnBCAfterBlackZelda_Message() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HorseInn_RegisteredAssociation'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'ResisteredAssociation_AtBaseCamp'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'ResisteredAssociation_AtBaseCamp_FollowTalk_End'})
            Event87:
            && GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HorseInn_ReturnBCAfterBlackZelda_IsFirstTalk'}) {
                Npc_EventStarter.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk9032', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HorseInn_ReturnBCAfterBlackZelda_IsFirstTalk', 'Index': -1, 'Value': True})

                call FirstTimeFlag_End()

                EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
            }
        } else
        goto Event87
    }
}

void Attacked_WakkaCharm_CommonFlow() {
    if !Npc_HyruleWestHatago005[Attacked_WakkaCharm_CommonFlow(ActorName)].EventQueryVolatileGeneralPurposeFlagOn() {
        Npc_HyruleWestHatago005[Attacked_WakkaCharm_CommonFlow(ActorName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:BurnedWakka_Common02', 'IsNotOpenIfSkipedMostRecent': False})
        Event96:
        Npc_HyruleWestHatago005[Attacked_WakkaCharm_CommonFlow(ActorName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'MessageId', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event61
    } else {
        Npc_HyruleWestHatago005[Attacked_WakkaCharm_CommonFlow(ActorName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:BurnedWakka_Common01', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_HyruleWestHatago005[Attacked_WakkaCharm_CommonFlow(ActorName)].EventTriggerSetVolatileGeneralPurposeFlag({'Value': True})
        goto Event96
    }
}

void UmayadoMasterInteractSetting() {

    call InitTalk.InitTalkOnEventWithAirPause({'Self': ActorIdentifier(name="Npc_EventStarter"), 'Arg_Turn': 3})

    switch Npc_EventStarter.EventQueryAIScheduleCheckActorAction14() {
      case [0, 2, 3, 4, 6, 7, 8, 9, 10, 11, 12, 13]:
        Event18:
        Npc_EventStarter.EventNPCTurnToTarget({'Target': 2, 'FaceControlType': 1, 'IsConfront': True, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
      case [1, 5]:
        Npc_EventStarter.EventTriggerNPCChangePosture({'Posture': 0, 'IsPlayCurrentAS': False})
        goto Event18
    }
}
