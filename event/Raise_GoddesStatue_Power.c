-------- EventFlow: Raise_GoddesStatue_Power --------

Actor: TwnObj_GoddesStatue_Power_A_10
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerAddOrSubGameDataInt']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataInt']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Item_Enemy_39
entrypoint: None()
actions: ['EventTriggerEmitXLink', 'EventTriggerPushPauseMask', 'EventTriggerErasePauseMask', 'EventTriggerDeleteSelf']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryIsPouchContent']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryTalkChoice2', 'EventQueryTalkChoice3']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void GoddesStatuePower_Altarage() {
    Item_Enemy_39.EventTriggerEmitXLink({'ELinkKey': 'Raise_GoddesStatue_PowerAltarage_WaterLight', 'SLinkKey': 'Dm_Raise_GoddesStatue_Altarage_WaterLight'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    Item_Enemy_39.EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 80})
    Item_Enemy_39.EventTriggerErasePauseMask()
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    Item_Enemy_39.EventTriggerDeleteSelf()

    call Raise_GoddesStatue.StartCommon_FarPower()

    if !PouchSystemActor.EventQueryIsPouchContent({'ActorName': 'Item_Ore_B'}) {

        call ChallengeComplete_Core()

        Event20:

        call Raise_GoddesStatue.EndCommon_Power()

    } else {
        TwnObj_GoddesStatue_Power_A_10.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'OverrideStyle': 3, 'IsAnonymous': True, 'IsOverrideStyle': True, 'MessageId': 'EventFlowMsg/Raise_GoddesStatue_Power:talk080', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'Raise_GoddesStatue_Power', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'SolvePouch', 'IsWaitEnd': True})
        goto Event20
    }
}

void GoddesStatuePower_GetItem() {

    call GetPouchContent.GetPouchContentByActorName({'ActorName': 'Item_Ore_B', 'IsSuccess': True})

}

void Ready_GoddesStatuePower_Talk() {

    call Raise_GoddesStatue.StartCommon_Camera()

    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'Value': 1, 'GameDataName': 'Raise_GoddesStatue_ClearSpringCount'}) {
      case 0:
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Raise_GoddesStatue_Checked', 'Index': -1}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'OverrideStyle': 3, 'IsAnonymous': True, 'IsOverrideStyle': True, 'MessageId': 'EventFlowMsg/Raise_GoddesStatue_Power:talk020', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 1000, 'ChoiceLabel2': 1001, 'IsNotOpenIfSkipedMostRecent': False})
            if !GameSystemActor.EventQueryTalkChoice2() {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'OverrideStyle': 3, 'IsAnonymous': True, 'IsOverrideStyle': True, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Raise_GoddesStatue_Power:talk022', 'ChoiceNumber': 1, 'ChoiceLabel1': 1001, 'IsNotOpenIfSkipedMostRecent': False})
            }
            Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'Talk', 'IsWaitEnd': False, 'ClothWarpMode': 0})
            Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'TalkingL', 'ClothWarpMode': 0})

            call HintLoop({'MessageId': 'EventFlowMsg/Raise_GoddesStatue_Power:talk021'})

            Event9:
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'Raise_GoddesStatue_Power', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Altarage', 'IsWaitEnd': True})

            call Raise_GoddesStatue.EndCommon()

        } else {
            Event6:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'OverrideStyle': 3, 'MessageId': 'EventFlowMsg/Raise_GoddesStatue_Power:talk000', 'IsAnonymous': True, 'IsOverrideStyle': True, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'Raise_GoddesStatue_Power', 'StepName': 'CheckGoddesStatue', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})

            call Raise_GoddesStatue.EndCommon()

        }
      case [1, 2]:

        call HintLoop({'MessageId': 'EventFlowMsg/Raise_GoddesStatue_Power:talk030'})

        goto Event9
    }
}

void CheckGoddesStatue_GoddesStatuePower_Talk() {

    call Raise_GoddesStatue.StartCommon_Camera()

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Raise_GoddesStatue_Checked', 'Index': -1}) {
        Event59:
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'Talk', 'IsWaitEnd': False, 'ClothWarpMode': 0})
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'TalkingL', 'ClothWarpMode': 0})

        call HintLoop({'MessageId': 'EventFlowMsg/Raise_GoddesStatue_Power:talk010'})

        goto Event9
    } else {
        goto Event6
    }
}

void Report_GoddesStatuePower_Talk() {

    call Raise_GoddesStatue.StartCommon_Camera()

    goto Event59
}

void Altarage_GoddesStatuePower_Talk() {

    call Raise_GoddesStatue.StartCommon_Camera()


    call HintLoop({'MessageId': 'EventFlowMsg/Raise_GoddesStatue_Power:talk040'})


    call Raise_GoddesStatue.EndCommon()

}

void Complete_GoddesStatuePower_Talk() {
    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'Value': 2, 'GameDataName': 'Raise_GoddesStatue_ClearSpringCount'}) {
      case 0:

        call Raise_GoddesStatue.StartCommon_Camera()

        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'OverrideStyle': 3, 'IsAnonymous': True, 'IsOverrideStyle': True, 'MessageId': 'EventFlowMsg/Raise_GoddesStatue_Power:talk052', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Event19:

        call Raise_GoddesStatue.EndCommon()

      case 1:

        call Raise_GoddesStatue.StartCommon_Camera()

        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'OverrideStyle': 3, 'IsAnonymous': True, 'IsOverrideStyle': True, 'MessageId': 'EventFlowMsg/Raise_GoddesStatue_Power:talk055', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event19
      case 2:

        call Raise_GoddesStatue.StartCommon_Camera()

        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'OverrideStyle': 3, 'IsAnonymous': True, 'IsOverrideStyle': True, 'MessageId': 'EventFlowMsg/Raise_GoddesStatue_Power:talk058', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event19
    }
}

void SolvePouch_GoddesStatuePower_Talk() {

    call Raise_GoddesStatue.StartCommon_Camera()

    if !PouchSystemActor.EventQueryIsPouchContent({'ActorName': 'Item_Ore_B'}) {

        call ChallengeComplete_Core()

    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'OverrideStyle': 3, 'IsAnonymous': True, 'IsOverrideStyle': True, 'MessageId': 'EventFlowMsg/Raise_GoddesStatue_Power:talk081', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }

    call Raise_GoddesStatue.EndCommon()

}

void ChallengeComplete_Core() {
    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'Value': 1, 'GameDataName': 'Raise_GoddesStatue_ClearSpringCount'}) {
      case 0:
        TwnObj_GoddesStatue_Power_A_10.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'OverrideStyle': 3, 'IsAnonymous': True, 'IsOverrideStyle': True, 'MessageId': 'EventFlowMsg/Raise_GoddesStatue_Power:talk050', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

        call GoddesStatuePower_GetItem()

        TwnObj_GoddesStatue_Power_A_10.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'OverrideStyle': 3, 'IsAnonymous': True, 'IsOverrideStyle': True, 'MessageId': 'EventFlowMsg/Raise_GoddesStatue_Power:talk051', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Event33:
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'Raise_GoddesStatue_Power', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Complete', 'IsWaitEnd': True})
        Event34:
        GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'Raise_GoddesStatue_ClearSpringCount', 'Value': 1, 'Index': -1})
      case 1:
        TwnObj_GoddesStatue_Power_A_10.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'OverrideStyle': 3, 'IsAnonymous': True, 'IsOverrideStyle': True, 'MessageId': 'EventFlowMsg/Raise_GoddesStatue_Power:talk053', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

        call GoddesStatuePower_GetItem()

        TwnObj_GoddesStatue_Power_A_10.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'OverrideStyle': 3, 'IsAnonymous': True, 'IsOverrideStyle': True, 'MessageId': 'EventFlowMsg/Raise_GoddesStatue_Power:talk054', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event33
      case 2:
        TwnObj_GoddesStatue_Power_A_10.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'OverrideStyle': 3, 'IsAnonymous': True, 'IsOverrideStyle': True, 'MessageId': 'EventFlowMsg/Raise_GoddesStatue_Power:talk056', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

        call GoddesStatuePower_GetItem()

        TwnObj_GoddesStatue_Power_A_10.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'OverrideStyle': 3, 'IsAnonymous': True, 'IsOverrideStyle': True, 'MessageId': 'EventFlowMsg/Raise_GoddesStatue_Power:talk057', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'Raise_GoddesStatue_Power', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Complete', 'IsWaitEnd': True})
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'Raise_GoddesStatue', 'StepName': 'ToGoal', 'IsWaitEnd': True})
        goto Event34
    }
}

void HintLoop() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'OverrideStyle': 3, 'IsAnonymous': True, 'IsOverrideStyle': True, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 1010, 'ChoiceLabel2': 1011, 'ChoiceLabel3': 1012, 'ChoiceLabel4': 1013, 'ChoiceCancelNo': 0, 'ChoiceNumber': 3, 'MessageId': 'MessageId', 'IsNotOpenIfSkipedMostRecent': False})
    switch GameSystemActor.EventQueryTalkChoice3() {
      case 0:

        call HintLoop_Where()

        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'OverrideStyle': 3, 'IsAnonymous': True, 'IsOverrideStyle': True, 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 1012, 'ChoiceLabel4': 1013, 'ChoiceCancelNo': 0, 'ChoiceNumber': 2, 'ChoiceLabel2': 1012, 'ChoiceLabel1': 1011, 'MessageId': 'EventFlowMsg/Raise_GoddesStatue_Power:talk090', 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {

            call HintLoop_Item()

            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'OverrideStyle': 3, 'IsAnonymous': True, 'IsOverrideStyle': True, 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 1012, 'ChoiceLabel4': 1013, 'ChoiceCancelNo': 0, 'ChoiceLabel2': 1012, 'ChoiceLabel1': 1012, 'ChoiceNumber': 1, 'MessageId': 'EventFlowMsg/Raise_GoddesStatue_Power:talk090', 'IsNotOpenIfSkipedMostRecent': False})
            Event77:

            call HintLoopEnd()

        } else {
            Event76:

            call HintLoopEnd()

        }
      case 1:

        call HintLoop_Item()

        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'OverrideStyle': 3, 'IsAnonymous': True, 'IsOverrideStyle': True, 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 1012, 'ChoiceLabel4': 1013, 'ChoiceCancelNo': 0, 'ChoiceNumber': 2, 'ChoiceLabel2': 1012, 'ChoiceLabel1': 1010, 'MessageId': 'EventFlowMsg/Raise_GoddesStatue_Power:talk090', 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {

            call HintLoop_Where()

            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'OverrideStyle': 3, 'IsAnonymous': True, 'IsOverrideStyle': True, 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 1012, 'ChoiceLabel4': 1013, 'ChoiceCancelNo': 0, 'ChoiceLabel2': 1012, 'ChoiceLabel1': 1012, 'ChoiceNumber': 1, 'MessageId': 'EventFlowMsg/Raise_GoddesStatue_Power:talk090', 'IsNotOpenIfSkipedMostRecent': False})
            goto Event77
        } else {
            goto Event76
        }
      case 2:

        call HintLoopEnd()

    }
}

void HintLoopEnd() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'OverrideStyle': 3, 'IsAnonymous': True, 'IsOverrideStyle': True, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Raise_GoddesStatue_Power:talk093', 'IsNotOpenIfSkipedMostRecent': False})
}

void HintLoop_Where() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'OverrideStyle': 3, 'IsAnonymous': True, 'IsOverrideStyle': True, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Raise_GoddesStatue_Power:talk091', 'IsNotOpenIfSkipedMostRecent': False})
}

void HintLoop_Item() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'OverrideStyle': 3, 'IsAnonymous': True, 'IsOverrideStyle': True, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Raise_GoddesStatue_Power:talk092', 'IsNotOpenIfSkipedMostRecent': False})
}
