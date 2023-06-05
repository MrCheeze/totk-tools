-------- EventFlow: GeniusWeapon_Zora --------

Actor: Npc_Zora033
entrypoint: None()
actions: ['EventTriggerBalloonMessage', 'EventTalk']
queries: ['EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: ['EventTriggerAddOrRemovePouchContent', 'EventTriggerRemovePouchContentInEquip']
queries: ['EventQueryIsExistInPouch']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventEventFadeIn', 'EventEventFadeOut']
queries: ['EventQueryTalkChoice2', 'EventQueryExistActor']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm', 'EventStartSound', 'EventTriggerStartInGameBgm']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventRequestQuit', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Ready_Npc_Zora033_Talk() {

    call Npc_Zora033.OnWaorTop_Player()


    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    Npc_Zora033.EventTalk({'MessageId': 'EventFlowMsg/GeniusWeapon_Zora:talk0001_00', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Zora033.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 8, 'ChoiceLabel2': 6, 'ChoiceCancelNo': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/GeniusWeapon_Zora:talk0001', 'ChoiceNumber': 0, 'ASName': 'Act_Metal_Engraving_Talk', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

    call ZoraSpear_Check()

    if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Item_Ore_A', 'Num': 3, 'IsExcludeAttached': False, 'IsExcludeAttachment': True})
    && !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Item_Ore_I', 'Num': 5, 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
        Npc_Zora033.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceCancelNo': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/GeniusWeapon_Zora:talk0009', 'ChoiceLabel2': 4, 'ChoiceNumber': 2, 'ASName': 'Act_Metal_Engraving_Talk', 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 3, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {
            if !GameSystemActor.EventQueryExistActor({'ActorName': 'Weapon_Spear_050', 'IsCheckLife': True, 'IsCheckEquipmentStand': False, 'IsCheckEquippedEnemy': False, 'IsCheckEquippedNPC': True, 'IsCheckAttached': False, 'IsCheckGolemAttachment': False}) {
                Npc_Zora033.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 8, 'ChoiceLabel2': 6, 'ChoiceCancelNo': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/GeniusWeapon_Zora:talk0008', 'ASName': 'Act_Metal_Engraving_Talk', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Event38:
                ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': True, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Step1', 'ChallengeName': 'GeniusWeapon_Zora', 'IsWaitEnd': True})
            } else {

                call GetSpear()

            }
        } else {
            Npc_Zora033.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 8, 'ChoiceLabel2': 6, 'ChoiceCancelNo': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/GeniusWeapon_Zora:talk0010', 'ASName': 'Act_Metal_Engraving_Talk', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event38
        }
    } else {

        call EventEnd()

    }
}

void Ready_Npc_Zora033_Near() {
    Npc_Zora033.EventTriggerBalloonMessage({'DisplayFrame': 200, 'IsChallenge': True, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/GeniusWeapon_Zora:Near0001', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void Step1_Npc_Zora033_Talk() {

    call Npc_Zora033.OnWaorTop_Player()


    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if Npc_Zora033.EventQueryIsOnRecentTalkFlag() {
        Npc_Zora033.EventTalk({'MessageId': 'EventFlowMsg/GeniusWeapon_Zora:talk0002_00', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
    }

    call CheckMaterial()

    Npc_Zora033.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceCancelNo': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/GeniusWeapon_Zora:talk0003', 'ChoiceNumber': 2, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ASName': 'Act_Metal_Engraving_Talk', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    if !GameSystemActor.EventQueryTalkChoice2() {

        call CheckMaterial_2nd()


        call ZoraSpear_Check()


        call GetSpear()

    } else {
        Npc_Zora033.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 8, 'ChoiceLabel2': 6, 'ChoiceCancelNo': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/GeniusWeapon_Zora:talk0005', 'ASName': 'Act_Metal_Engraving_Talk', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Step1_Npc_Zora033_Near() {
    if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Item_Ore_A', 'Num': 3, 'IsExcludeAttached': False, 'IsExcludeAttachment': True})
    && !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Item_Ore_I', 'Num': 5, 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
        if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Weapon_Spear_127', 'IsExcludeAttached': True, 'IsExcludeAttachment': True}) {
            Event66:
            Npc_Zora033.EventTriggerBalloonMessage({'DisplayFrame': 200, 'IsChallenge': True, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_Zora033:near1004', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
        } else
        if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Weapon_Spear_027', 'IsExcludeAttached': True, 'IsExcludeAttachment': True}) {
            goto Event66
        } else
        Event108:
        if !Npc_Zora033.EventQueryIsOnRecentTalkFlag() {
            Npc_Zora033.EventTriggerBalloonMessage({'DisplayFrame': 200, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_Zora033:near1004', 'IsDisplayInTerror': False, 'IsChallenge': False, 'NotOverriddenByInterestBalloon': False})
        } else {
            Npc_Zora033.EventTriggerBalloonMessage({'DisplayFrame': 200, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/GeniusWeapon_Zora:Near0001', 'IsChallenge': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
        }
    } else
    goto Event108
}

void ZoraSpear_Check() {
    if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Weapon_Spear_127', 'IsExcludeAttached': True, 'IsExcludeAttachment': True}) {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'GeniusWeapon_Zora_Spear', 'Value': False, 'Index': -1})
        Event74:
        GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    } else
    if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Weapon_Spear_027', 'IsExcludeAttached': True, 'IsExcludeAttachment': True}) {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'GeniusWeapon_Zora_Spear', 'Value': True, 'Index': -1})
        goto Event74
    } else {

        call EventEnd()

    }
}

void GetSpear() {
    PouchSystemActor.EventTriggerAddOrRemovePouchContent({'IsEquipDIrect': False, 'AttachmentActor': '', 'Actor': 'Item_Ore_A', 'EffectType': 0, 'EffectValue': -1, 'Num': -3, 'IsSetOnlyEquipIndex': False})
    PouchSystemActor.EventTriggerAddOrRemovePouchContent({'IsEquipDIrect': False, 'AttachmentActor': '', 'Actor': 'Item_Ore_I', 'EffectType': 0, 'EffectValue': -1, 'Num': -5, 'IsSetOnlyEquipIndex': False})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'GeniusWeapon_Zora_Spear', 'Index': -1}) {
        PouchSystemActor.EventTriggerRemovePouchContentInEquip({'Actor': 'Weapon_Spear_027', 'RemoveNum': 1, 'IsExcludeAttached': True})
    } else {
        PouchSystemActor.EventTriggerRemovePouchContentInEquip({'RemoveNum': 1, 'IsExcludeAttached': True, 'Actor': 'Weapon_Spear_127'})
    }
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'GeniusWeapon_Zora_IsCompleted_Exp'}) {
        Npc_Zora033.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': 'Act_Metal_Engraving_Talk', 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Zora033:talk2017', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_Zora033.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 8, 'ChoiceLabel2': 6, 'ChoiceCancelNo': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/GeniusWeapon_Zora:talk0004', 'ASName': 'Act_Metal_Engraving_Talk', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
    GameSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})
    SoundSystemActor.EventTriggerStopInGameBgm({'CommandLife': 2, 'FadeType': 1, 'WithPlayableEvent': False, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    SoundSystemActor.EventStartSound({'SLinkKey': 'Dm_Handicraft', 'IsWaitEnd': True, 'TimeoutFrame': 0})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    SoundSystemActor.EventTriggerStartInGameBgm({'IsFadeIn': False, 'WithPlayableEvent': False, 'IsControlSpotBgm': True})
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'GeniusWeapon_Zora_IsCompleted_Exp'}) {
        Npc_Zora033.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': 'Act_Metal_Engraving_Talk', 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Zora033:talk2020', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_Zora033.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 8, 'ChoiceLabel2': 6, 'ChoiceCancelNo': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/GeniusWeapon_Zora:talk0006', 'ASName': 'Act_Metal_Engraving_Talk', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }

    call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Weapon_Spear_050'})

    Npc_Zora033.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 8, 'ChoiceLabel2': 6, 'ChoiceCancelNo': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/GeniusWeapon_Zora:talk0015', 'ASName': 'Act_Metal_Engraving_Talk', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'GeniusWeapon_Zora_IsCompleted_Exp'}) {
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': True, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'GeniusWeapon_Zora', 'StepName': 'Complete', 'IsWaitEnd': True})
    }
}

void EventEnd() {
    Npc_Zora033.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 8, 'ChoiceLabel2': 6, 'ChoiceCancelNo': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ASName': 'Act_Metal_Engraving_Talk', 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GeniusWeapon_Zora:talk0014', 'IsNotOpenIfSkipedMostRecent': False})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': True, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Step1', 'ChallengeName': 'GeniusWeapon_Zora', 'IsWaitEnd': True})
    EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
}

void NotEnough_Ore_A() {

    call NotEnough_Start()

    Event43:
    Npc_Zora033.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 8, 'ChoiceLabel2': 6, 'ChoiceCancelNo': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/GeniusWeapon_Zora:talk0011', 'ASName': 'Act_Metal_Engraving_Talk', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    if PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Item_Ore_I', 'Num': 5, 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
        Event50:
        Npc_Zora033.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 8, 'ChoiceLabel2': 6, 'ChoiceCancelNo': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/GeniusWeapon_Zora:talk0012', 'ASName': 'Act_Metal_Engraving_Talk', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
    Event44:
    Npc_Zora033.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 8, 'ChoiceLabel2': 6, 'ChoiceCancelNo': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/GeniusWeapon_Zora:talk0014', 'ASName': 'Act_Metal_Engraving_Talk', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
}

void NotEnough_Ore_I() {

    call NotEnough_Start()

    goto Event50
}

void NotEnough_Start() {
    Npc_Zora033.EventTalk({'MessageId': 'EventFlowMsg/GeniusWeapon_Zora:talk0002_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
}

void CheckMaterial() {
    if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Weapon_Spear_127', 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
        Event6:
        if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Item_Ore_A', 'Num': 3, 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
            if PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Item_Ore_I', 'Num': 5, 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {

                call NotEnough_Ore_I()

            }
        } else {

            call NotEnough_Ore_A()

        }
    } else
    if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Weapon_Spear_027', 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
        goto Event6
    } else {

        call NotEnough_Start()

        Npc_Zora033.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 8, 'ChoiceLabel2': 6, 'ChoiceCancelNo': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/GeniusWeapon_Zora:talk0013', 'ASName': 'Act_Metal_Engraving_Talk', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Item_Ore_A', 'Num': 3, 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
            if PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Item_Ore_I', 'Num': 5, 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
                goto Event50
            }
            goto Event44
        } else {
            goto Event43
        }
    }
}

void CheckMaterial_2nd() {
    if !GameSystemActor.EventQueryExistActor({'ActorName': 'Weapon_Spear_050', 'IsCheckLife': True, 'IsCheckEquipmentStand': False, 'IsCheckEquippedEnemy': False, 'IsCheckEquippedNPC': True, 'IsCheckAttached': False, 'IsCheckGolemAttachment': False}) {
        Npc_Zora033.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 8, 'ChoiceLabel2': 6, 'ChoiceCancelNo': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/GeniusWeapon_Zora:talk0008', 'ASName': 'Act_Metal_Engraving_Talk', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
    } else
    if PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Weapon_Spear_127', 'IsExcludeAttached': True, 'IsExcludeAttachment': True})
    && PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Weapon_Spear_027', 'IsExcludeAttached': True, 'IsExcludeAttachment': True}) {
        Npc_Zora033.EventTalk({'MessageId': 'EventFlowMsg/GeniusWeapon_Zora:talk0004_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Zora033.EventTalk({'MessageId': 'EventFlowMsg/GeniusWeapon_Zora:talk0004_02', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
        EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
    }
}
