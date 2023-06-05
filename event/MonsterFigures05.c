-------- EventFlow: MonsterFigures05 --------

Actor: Npc_MamonoShop[Figures]
entrypoint: None()
actions: ['EventTalk', 'EventNPCTurnToTarget', 'EventTriggerBalloonMessage', 'EventPlayAS', 'EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule', 'EventTriggerAIScheduleSetIsRequestSetPostTalkTimer']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_UMiiVillage031[Figures]
entrypoint: None()
actions: ['EventTalk', 'EventPlayAS', 'EventNPCTurnToTarget']
queries: ['EventQueryHasPictureWithFigureInfo', 'EventQueryAlbumSelectPictureUIInput']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_oasis050[Figures]
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_UMiiVillage009[Figures]
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Zora005[Figures]
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: []
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataEnum']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: FigureDeleteArea
entrypoint: None()
actions: []
queries: ['EventQueryIsExistFigureInArea']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: FigureCreateActor
entrypoint: None()
actions: []
queries: ['EventQueryIsFigureCreateNumFull', 'EventQueryFigureActorAlreadyCreated']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBalloonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryCanAddToPorch']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryWeather']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventChangeAlbumModeDetail', 'EventChangeAlbumModeList', 'EventEventFadeIn', 'EventEventFadeOut', 'EventOpenAlbumSelectPictureUIFromFigureTarget', 'EventWaitAlbumSelectPictureUIInput', 'EventWait', 'EventOpenAlbumSelectPictureUIFromChallengeTarget', 'EventCloseAlbumSelectPictureUI']
queries: ['EventQueryTalkChoice3', 'EventQueryTalkChoice2', 'EventQueryAlbumSelectPictureActorName', 'EventQueryCheckNoObjectNearAnchor']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventSendMultiEventTalkMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventRequestQuit']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Display_Npc_UMiiVillage031_Figures_Talk() {
    Event261:

    call InitTalk.InitTalk_Pair({'Arg_Turn': 0, 'Arg_Greeting': 3, 'Actor1': ActorIdentifier(name="Npc_MamonoShop", sub_name="Figures"), 'Actor2': ActorIdentifier(name="Npc_UMiiVillage031", sub_name="Figures"), 'Spearker1ActorName': 'Npc_MamonoShop', 'Spearker1InstanceName': 'Figures', 'Spearker2ActorName': 'Npc_UMiiVillage031', 'Spearker2InstanceName': 'Figures'})

    Npc_MamonoShop[Figures].EventPlayAS({'IsAnimeDriven': False, 'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
    Npc_UMiiVillage031[Figures].EventPlayAS({'IsAnimeDriven': False, 'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case [0, 1, 4, 5]:
        Event46:
        Npc_UMiiVillage031[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures03:Talk84', 'IsNotOpenIfSkipedMostRecent': False})
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MonsterFigures_Set_Drake_Mix'}) {
            Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 6, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 2, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk23', 'IsNotOpenIfSkipedMostRecent': False})
            if !GameSystemActor.EventQueryTalkChoice2() {

                fork {
                    Npc_MamonoShop[Figures].EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'FaceControlType': 1, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                } {
                    Npc_UMiiVillage031[Figures].EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                }

                Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk25', 'IsNotOpenIfSkipedMostRecent': False})

                call MonsterFigures_Common.LookAtDegsinatedFigure({'ActorName1': 'FldObj_Figure_Enemy_Drake_Mix', 'Size_ActorName1': 'Enemy_Drake_Mix', 'ActorName2': 'FldObj_Figure_Enemy_Drake_Mix', 'ActorName3': 'FldObj_Figure_Enemy_Drake_Mix', 'Size_ActorName2': 'Enemy_Drake_Mix', 'Size_ActorName3': 'Enemy_Drake_Mix'})

                Event52:
                Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk26', 'IsNotOpenIfSkipedMostRecent': False})
                Npc_UMiiVillage031[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk27', 'IsNotOpenIfSkipedMostRecent': False})
                Npc_MamonoShop[Figures].EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'FaceControlType': 1, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                EventCamera.EventSendMultiEventTalkMessageToPlayerCamera({'Speaker1SetType': 1, 'Spearker1ActorName': 'Npc_MamonoShop', 'Spearker1InstanceName': 'Figures', 'Speaker2SetType': 1, 'Spearker2ActorName': 'Npc_UMiiVillage031', 'Spearker2InstanceName': 'Figures', 'IsWaitEnd': False, 'Speaker3SetType': 0, 'Spearker3ActorName': '', 'Spearker3InstanceName': '', 'Speaker4SetType': 0, 'Spearker4ActorName': '', 'Spearker4InstanceName': ''})
                Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk30', 'IsNotOpenIfSkipedMostRecent': False})
                ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'MonsterFigures05', 'StepName': 'Exhibition', 'IsIgnoreChallengeProgressUI': True, 'IsWaitEnd': True})
            } else {
                Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk24', 'IsNotOpenIfSkipedMostRecent': False})
            }
        } else {
            Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk24', 'IsNotOpenIfSkipedMostRecent': False})
        }
      case [2, 3, 6, 7, 8]:
        Npc_UMiiVillage031[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk97', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event46
    }
}

void Display_Npc_MamonoShop_Figures_Talk() {
    goto Event261
}

void AfterExpo() {

    call MonsterFigures_Common.TwoMenTurnToPlayer()

    Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk36', 'IsNotOpenIfSkipedMostRecent': False})
    if !PouchSystemActor.EventQueryCanAddToPorch({'Actor': 'Item_Material_08', 'Num': 1})
    && !PouchSystemActor.EventQueryCanAddToPorch({'Num': 1, 'Actor': 'Item_Ore_A'}) {
        Event81:

        call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Item_Ore_A'})

        Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk37', 'IsNotOpenIfSkipedMostRecent': False})

        call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Item_Material_08'})

        Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk38', 'IsNotOpenIfSkipedMostRecent': False})
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'MonsterFigures05', 'StepName': 'Complete', 'IsWaitEnd': True})
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk86', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_MamonoShop[Figures].EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule()
        Npc_MamonoShop[Figures].EventTriggerAIScheduleSetIsRequestSetPostTalkTimer()
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'MonsterFigures05', 'StepName': 'Reward', 'IsWaitEnd': True})
    }
}

void Exhibition_Npc_MamonoShop_Figures_StepStart() {

    call Common.AirStartUP_Player()

    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    call MonsterFigures03.InitMonsterExpo()

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

    call MonsterFigures_Common.LookAtAll()

    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk31', 'IsNotOpenIfSkipedMostRecent': False})

    call MonsterFigures_Common.LookAtDegsinatedFigureFromAudience({'ActorName1': 'FldObj_Figure_Enemy_Drake_Mix', 'Size_ActorName1': 'Enemy_Drake_Mix', 'Size_ActorName2': 'Enemy_Drake_Mix', 'Size_ActorName3': 'Enemy_Drake_Mix', 'ActorName2': 'FldObj_Figure_Enemy_Drake_Mix', 'ActorName3': 'FldObj_Figure_Enemy_Drake_Mix'})

    Npc_Zora005[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk32', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_oasis050[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk39', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk33', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_UMiiVillage009[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk34', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk35', 'IsNotOpenIfSkipedMostRecent': False})

    call MonsterFigures_Common.SetupRewardPosition()


    call AfterExpo()

}

void Comp_WaitingForPhoto_MamonoShop() {

    call Npc_MamonoShop.NushiShop_CompleteCheck()


    call InitTalk.InitTalk_Pair({'Arg_Greeting': 3, 'Spearker1ActorName': 'Npc_MamonoShop', 'Spearker1InstanceName': 'Figures', 'Spearker2ActorName': 'Npc_UMiiVillage031', 'Spearker2InstanceName': 'Figures', 'Actor1': ActorIdentifier(name="Npc_MamonoShop", sub_name="Figures"), 'Actor2': ActorIdentifier(name="Npc_UMiiVillage031", sub_name="Figures"), 'Arg_Turn': 3})

    Event24:

    call MonsterFigures_Common.WaitPhoto_Greeting()


    call MonsterFigures_Common.WaitPhoto_Enokida()

    if !FigureCreateActor.EventQueryIsFigureCreateNumFull() {

        call MonsterFigures_Common.FullOfFigures()

    } else
    if !Npc_UMiiVillage031[Figures].EventQueryHasPictureWithFigureInfo() {
        if !GameSystemActor.EventQueryCheckNoObjectNearAnchor({'AnchorInstanceName': 'FigureBasePos', 'AnchorActorName': 'DesignateMatrixActor', 'Length': 10.0, 'Radius': 3.0}) {
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MonsterFigures_IsExplainedDelete', 'Index': -1}) {
                if !FigureDeleteArea.EventQueryIsExistFigureInArea() {
                    Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk47', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsNotOpenIfSkipedMostRecent': False})

                    call MonsterFigures_Common.ExistOnFigureBaseAfterDeleteEvent()

                } else {
                    Event127:
                    Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 1, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk47', 'ChoiceNumber': 3, 'ChoiceLabel2': 13, 'ChoiceLabel3': 10, 'IsNotOpenIfSkipedMostRecent': False})
                    switch GameSystemActor.EventQueryTalkChoice3() {
                      case 0:

                        call Comp_OpenAlbum()

                      case 1:
                        Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk83', 'ChoiceNumber': 3, 'ChoiceLabel1': 1, 'ChoiceLabel2': 13, 'ChoiceLabel3': 10, 'IsNotOpenIfSkipedMostRecent': False})
                        switch GameSystemActor.EventQueryTalkChoice3() {
                          case 0:

                            call Comp_OpenAlbum()

                          case 1:
                            Event197:
                            Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 3, 'ChoiceLabel1': 1, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk84', 'ChoiceLabel2': 13, 'ChoiceLabel3': 10, 'IsNotOpenIfSkipedMostRecent': False})
                            switch GameSystemActor.EventQueryTalkChoice3() {
                              case 0:

                                call Comp_OpenAlbum()

                              case 1:
                                goto Event197
                              case 2:
                                Event146:
                                Npc_MamonoShop[Figures].EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                                Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk73', 'IsNotOpenIfSkipedMostRecent': False})
                            }
                          case 2:
                            goto Event146
                        }
                      case 2:
                        goto Event146
                    }
                }
            } else {
                Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk47', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsNotOpenIfSkipedMostRecent': False})

                call MonsterFigures_Common.ExistOnFigureBase()

            }
        } else {
            goto Event127
        }
    } else {
        Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures03:Talk73', 'ChoiceNumber': 2, 'ChoiceLabel1': 13, 'ChoiceLabel2': 10, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {
            Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk83', 'ChoiceNumber': 2, 'ChoiceLabel1': 13, 'ChoiceLabel3': 0, 'ChoiceLabel2': 10, 'IsNotOpenIfSkipedMostRecent': False})
            if !GameSystemActor.EventQueryTalkChoice2() {
                Event36:
                Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk84', 'ChoiceNumber': 2, 'ChoiceLabel1': 13, 'ChoiceLabel3': 0, 'ChoiceLabel2': 10, 'IsNotOpenIfSkipedMostRecent': False})
                if !GameSystemActor.EventQueryTalkChoice2() {
                    goto Event36
                } else {
                    goto Event146
                }
            } else {
                goto Event146
            }
        } else {
            goto Event146
        }
    }
}

void CreateDrakeMix() {

    call MonsterFigures_Common.CreateFigure()

    Npc_UMiiVillage031[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures03:Talk29', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk16', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_UMiiVillage031[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk17', 'IsNotOpenIfSkipedMostRecent': False})

    call MonsterFigures_Common.LookAtStage()

    Event257:
    Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures03:Talk83', 'IsNotOpenIfSkipedMostRecent': False})
    EventCamera.EventSendMultiEventTalkMessageToPlayerCamera({'Speaker1SetType': 1, 'Spearker1ActorName': 'Npc_MamonoShop', 'Spearker1InstanceName': 'Figures', 'Speaker2SetType': 1, 'Spearker2ActorName': 'Npc_UMiiVillage031', 'Spearker2InstanceName': 'Figures', 'IsWaitEnd': False, 'Speaker3SetType': 0, 'Spearker3ActorName': '', 'Spearker3InstanceName': '', 'Speaker4SetType': 0, 'Spearker4ActorName': '', 'Spearker4InstanceName': ''})
    Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MonsterFigures03:Talk23', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'StepName': 'Display', 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'MonsterFigures05', 'IsWaitEnd': True})
}

void Comp_SelectingPhoto() {
    Event140:
    GameSystemActor.EventWaitAlbumSelectPictureUIInput({'IsWaitEnd': True})
    switch Npc_UMiiVillage031[Figures].EventQueryAlbumSelectPictureUIInput() {
      case 0:
        GameSystemActor.EventChangeAlbumModeDetail({'IsWaitEnd': True})

        call MonsterFigures_Common.Talk_BeforeCreatingOtherFigure()

        switch GameSystemActor.EventQueryTalkChoice3() {
          case 0:

            call MonsterFigures_Common.CreateOtherFigure()

          case 1:

            call MonsterFigures_Common.ClosePad({'Npc_UMiiVillage031': ActorIdentifier(name="Npc_MamonoShop", sub_name="Figures"), 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk44'})

          case 2:
            GameSystemActor.EventChangeAlbumModeList({'IsWaitEnd': True})

            call Comp_SelectingPhoto()

        }
      case 1:

        call MonsterFigures_Common.NonMonsterInPhoto()

        Event289:

        call Comp_SelectingPhoto()

      case 2:

        call MonsterFigures_Common.CanNotCreateFigure()

        goto Event289
      case 3:

        call MonsterFigures_Common.ClosePad({'Npc_UMiiVillage031': ActorIdentifier(name="Npc_MamonoShop", sub_name="Figures"), 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk73'})

    }
}

void Comp_OpenAlbum() {

    call MonsterFigures_Common.ShowPad()

    GameSystemActor.EventOpenAlbumSelectPictureUIFromFigureTarget({'IsWaitEnd': True})
    goto Event140
}

void NotDisplayed() {
    goto Event257
}

void AlreadyDisplayed() {
    goto Event52
}

void Ready_Npc_MamonoShop_Figures_Talk() {
    Event11:

    call Npc_MamonoShop.NushiShop_CompleteCheck()


    call InitTalk.InitTalk_Pair({'Arg_Greeting': 3, 'Spearker1ActorName': 'Npc_MamonoShop', 'Spearker1InstanceName': 'Figures', 'Spearker2ActorName': 'Npc_UMiiVillage031', 'Spearker2InstanceName': 'Figures', 'Actor1': ActorIdentifier(name="Npc_MamonoShop", sub_name="Figures"), 'Actor2': ActorIdentifier(name="Npc_UMiiVillage031", sub_name="Figures"), 'Arg_Turn': 3})

    Event268:

    call MonsterFigures_Common.WaitPhoto_Greeting()


    call MonsterFigures_Common.WaitPhoto_Enokida()

    if !FigureCreateActor.EventQueryIsFigureCreateNumFull() {

        call MonsterFigures_Common.FullOfFigures()

    } else
    if !Npc_UMiiVillage031[Figures].EventQueryHasPictureWithFigureInfo() {
        if !GameSystemActor.EventQueryCheckNoObjectNearAnchor({'AnchorInstanceName': 'FigureBasePos', 'AnchorActorName': 'DesignateMatrixActor', 'Length': 10.0, 'Radius': 3.5}) {
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MonsterFigures_IsExplainedDelete', 'Index': -1}) {
                if !FigureDeleteArea.EventQueryIsExistFigureInArea() {
                    Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 7, 'ChoiceLabel4': 2, 'ChoiceLabel3': 13, 'MessageId': 'EventFlowMsg/MonsterFigures03:Talk73', 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})

                    call MonsterFigures_Common.ExistOnFigureBaseAfterDeleteEvent()

                } else {
                    Event69:
                    Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 1, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 13, 'ChoiceNumber': 3, 'MessageId': 'EventFlowMsg/MonsterFigures03:Talk61', 'ChoiceLabel3': 10, 'IsNotOpenIfSkipedMostRecent': False})
                    switch GameSystemActor.EventQueryTalkChoice3() {
                      case 0:

                        call OpenAlbum()

                      case 1:

                        call ExplainRequest_1st()

                        Event76:
                        Npc_UMiiVillage031[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceDefaultNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 1, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 13, 'ChoiceNumber': 3, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk80', 'ChoiceLabel3': 10, 'IsNotOpenIfSkipedMostRecent': False})
                        switch GameSystemActor.EventQueryTalkChoice3() {
                          case 0:

                            call OpenAlbum()

                          case 1:

                            call ExplainRequest_2nd()

                            goto Event76
                          case 2:
                            Event142:
                            Npc_MamonoShop[Figures].EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                            Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk73', 'IsNotOpenIfSkipedMostRecent': False})
                        }
                      case 2:
                        goto Event142
                    }
                }
            } else {
                Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 7, 'ChoiceLabel4': 2, 'ChoiceLabel3': 13, 'MessageId': 'EventFlowMsg/MonsterFigures03:Talk73', 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})

                call MonsterFigures_Common.ExistOnFigureBase()

            }
        } else {
            goto Event69
        }
    } else {
        Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures03:Talk73', 'ChoiceNumber': 2, 'ChoiceLabel1': 13, 'ChoiceLabel2': 10, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {

            call ExplainRequest_1st()

            Event19:
            Npc_UMiiVillage031[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceDefaultNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk80', 'ChoiceLabel1': 13, 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'ChoiceLabel2': 10, 'IsNotOpenIfSkipedMostRecent': False})
            if !GameSystemActor.EventQueryTalkChoice2() {

                call ExplainRequest_2nd()

                goto Event19
            } else {
                goto Event142
            }
        } else {
            goto Event142
        }
    }
}

void Ready_Npc_UMiiVillage031_Figures_Talk() {
    Event3:

    call InitTalk.InitTalk_Pair({'Arg_Greeting': 3, 'Spearker1ActorName': 'Npc_MamonoShop', 'Spearker1InstanceName': 'Figures', 'Spearker2ActorName': 'Npc_UMiiVillage031', 'Spearker2InstanceName': 'Figures', 'Actor1': ActorIdentifier(name="Npc_MamonoShop", sub_name="Figures"), 'Actor2': ActorIdentifier(name="Npc_UMiiVillage031", sub_name="Figures"), 'Arg_Turn': 3})

    goto Event268
}

void Photo_Npc_UMiiVillage031_Figures_Talk() {
    goto Event3
}

void Photo_Npc_MamonoShop_Figures_Talk() {
    goto Event11
}

void ExplainRequest_1st() {
    Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk78', 'IsNotOpenIfSkipedMostRecent': False})
    Event8:
    Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk79', 'IsNotOpenIfSkipedMostRecent': False})
    if !FigureCreateActor.EventQueryFigureActorAlreadyCreated({'ActorName2': '', 'ActorName3': '', 'ActorName1': 'FldObj_Figure_Enemy_Drake_Mix'}) {
        Npc_UMiiVillage031[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk67', 'IsNotOpenIfSkipedMostRecent': False})

        call MonsterFigures_Common.LookAtDegsinatedFigure({'ActorName1': 'FldObj_Figure_Enemy_Drake_Mix', 'Size_ActorName1': 'Enemy_Drake_Mix', 'ActorName2': 'FldObj_Figure_Enemy_Drake_Mix', 'ActorName3': 'FldObj_Figure_Enemy_Drake_Mix', 'Size_ActorName2': 'Enemy_Drake_Mix', 'Size_ActorName3': 'Enemy_Drake_Mix'})

        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MonsterFigures_Set_Drake_Mix'}) {

            call AlreadyDisplayed()

            EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
        } else {
            Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk68', 'IsNotOpenIfSkipedMostRecent': False})

            call NotDisplayed()

            EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
        }
    } else {
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'StepName': 'Photo', 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'MonsterFigures05', 'IsWaitEnd': True})
    }
}

void ExplainRequest_2nd() {
    Npc_MamonoShop[Figures].EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk81', 'IsNotOpenIfSkipedMostRecent': False})
    goto Event8
}

void OpenAlbum() {

    call MonsterFigures_Common.ShowPad()

    if !GameDataActor.EventQueryIsGameDataEnum({'Value': 'Photo', 'Index': -1, 'GameDataName': 'Step_MonsterFigures05'}) {
        GameSystemActor.EventOpenAlbumSelectPictureUIFromChallengeTarget({'IsWaitEnd': True, 'StepName': 'Photo', 'WithFigureTarget': True, 'ChallengeName': 'MonsterFigures05'})
    } else {
        GameSystemActor.EventOpenAlbumSelectPictureUIFromFigureTarget({'IsWaitEnd': True})
    }
    Event191:
    GameSystemActor.EventWaitAlbumSelectPictureUIInput({'IsWaitEnd': True})
    switch Npc_UMiiVillage031[Figures].EventQueryAlbumSelectPictureUIInput() {
      case 0:
        if !GameSystemActor.EventQueryAlbumSelectPictureActorName({'ActorName': 'Enemy_Drake_Mix'}) {
            GameSystemActor.EventChangeAlbumModeDetail({'IsWaitEnd': True})
            Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk08', 'IsNotOpenIfSkipedMostRecent': False})
            Npc_UMiiVillage031[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk10', 'IsNotOpenIfSkipedMostRecent': False})
            Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceLabel1': 3, 'ChoiceNumber': 3, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 5, 'ChoiceLabel3': 4, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk11', 'IsNotOpenIfSkipedMostRecent': False})
            switch GameSystemActor.EventQueryTalkChoice3() {
              case 0:
                GameSystemActor.EventCloseAlbumSelectPictureUI({'IsWaitEnd': True, 'withSound': True})
                Npc_UMiiVillage031[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk13', 'IsNotOpenIfSkipedMostRecent': False})

                call CreateDrakeMix()

              case 1:

                call MonsterFigures_Common.ClosePad({'Npc_UMiiVillage031': ActorIdentifier(name="Npc_MamonoShop", sub_name="Figures"), 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk44'})

                Npc_UMiiVillage031[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk12', 'IsNotOpenIfSkipedMostRecent': False})
              case 2:
                GameSystemActor.EventChangeAlbumModeList({'IsWaitEnd': True})

                call SelectingPhoto()

            }
        } else
        if !GameSystemActor.EventQueryAlbumSelectPictureActorName({'ActorName': 'Enemy_Drake_Fire'}) {
            Event229:
            GameSystemActor.EventChangeAlbumModeDetail({'IsWaitEnd': True})
            Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk82', 'ChoiceNumber': 3, 'ChoiceLabel1': 3, 'ChoiceLabel2': 5, 'ChoiceLabel3': 4, 'IsNotOpenIfSkipedMostRecent': False})
            Event212:
            switch GameSystemActor.EventQueryTalkChoice3() {
              case 0:

                call MonsterFigures_Common.CreateOtherFigure()

                Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk76', 'IsNotOpenIfSkipedMostRecent': False})
              case 1:

                call MonsterFigures_Common.ClosePad({'Npc_UMiiVillage031': ActorIdentifier(name="Npc_MamonoShop", sub_name="Figures"), 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk44'})

              case 2:
                GameSystemActor.EventChangeAlbumModeList({'IsWaitEnd': True})

                call SelectingPhoto()

            }
        } else
        if !GameSystemActor.EventQueryAlbumSelectPictureActorName({'ActorName': 'Enemy_Drake_Ice'}) {
            goto Event229
        } else
        if !GameSystemActor.EventQueryAlbumSelectPictureActorName({'ActorName': 'Enemy_Drake_Electric'}) {
            goto Event229
        } else {
            GameSystemActor.EventChangeAlbumModeDetail({'IsWaitEnd': True})

            call MonsterFigures_Common.Talk_BeforeCreatingOtherFigure()

            goto Event212
        }
      case 1:

        call MonsterFigures_Common.NonMonsterInPhoto()

        Event215:

        call SelectingPhoto()

      case 2:

        call MonsterFigures_Common.CanNotCreateFigure()

        goto Event215
      case 3:

        call MonsterFigures_Common.CancelToSelectPhoto()

    }
}

void SelectingPhoto() {
    goto Event191
}

void Comp_WaitingForPhoto_UMiiVillage031() {

    call InitTalk.InitTalk_Pair({'Arg_Greeting': 3, 'Spearker1ActorName': 'Npc_MamonoShop', 'Spearker1InstanceName': 'Figures', 'Spearker2ActorName': 'Npc_UMiiVillage031', 'Spearker2InstanceName': 'Figures', 'Actor1': ActorIdentifier(name="Npc_MamonoShop", sub_name="Figures"), 'Actor2': ActorIdentifier(name="Npc_UMiiVillage031", sub_name="Figures"), 'Arg_Turn': 3})

    goto Event24
}

void Reward_Npc_UMiiVillage031_Figures_Talk() {

    call MonsterFigures_Common.Reward_Enokida_Talk()

}

void Reward_Npc_MamonoShop_Figures_Talk() {

    call InitTalk.InitTalk_Pair({'Arg_Greeting': 3, 'Spearker1ActorName': 'Npc_MamonoShop', 'Spearker1InstanceName': 'Figures', 'Spearker2ActorName': 'Npc_UMiiVillage031', 'Spearker2InstanceName': 'Figures', 'Actor1': ActorIdentifier(name="Npc_MamonoShop", sub_name="Figures"), 'Actor2': ActorIdentifier(name="Npc_UMiiVillage031", sub_name="Figures"), 'Arg_Turn': 3})

    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case [0, 1, 4, 5]:
        Event270:
        if !PouchSystemActor.EventQueryCanAddToPorch({'Actor': 'Item_Material_08', 'Num': 1})
        && !PouchSystemActor.EventQueryCanAddToPorch({'Num': 1, 'Actor': 'Item_Ore_A'}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk101', 'IsNotOpenIfSkipedMostRecent': False})

            call GetReward()

        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk87', 'IsNotOpenIfSkipedMostRecent': False})
        }
      case [2, 3, 6, 7, 8]:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk98', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event270
    }
}

void Ready_Npc_UMiiVillage031_Figures_Near() {
    Event280:
    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case [0, 1, 4, 5]:
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/MonsterFigures05:Near04', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
      case [2, 3, 6, 7, 8]:
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/MonsterFigures05:Near03', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Photo_Npc_MamonoShop_Figures_Near() {
    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case [0, 1, 4, 5]:
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/MonsterFigures03:Near01', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
      case [2, 3, 6, 7, 8]:
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/MonsterFigures05:Near02', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Photo_Npc_UMiiVillage031_Figures_Near() {
    goto Event280
}

void Display_Npc_UMiiVillage031_Figures_Near() {
    if EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) in [2, 3, 6, 7, 8] {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/MonsterFigures05:Near06', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Display_Npc_MamonoShop_Figures_Near() {
    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case [0, 1, 4, 5]:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MonsterFigures_Set_Drake_Mix'}) {
            Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/MonsterFigures01:Near04', 'IsChallenge': True})
        } else {
            Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/MonsterFigures01:Near04', 'IsChallenge': False})
        }
      case [2, 3, 6, 7, 8]:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MonsterFigures_Set_Drake_Mix'}) {
            Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'MessageID': 'EventFlowMsg/MonsterFigures05:Near05', 'NotOverriddenByInterestBalloon': False, 'IsChallenge': True})
        } else {
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'MessageID': 'EventFlowMsg/MonsterFigures05:Near05', 'NotOverriddenByInterestBalloon': False})
        }
    }
}

void Reward_Npc_UMiiVillage031_Figures_Near() {
    goto Event280
}

void GetReward() {
    goto Event81
}

void Ready_Npc_MamonoShop_Figures_Near() {
    Npc_MamonoShop[Figures].EventTriggerBalloonMessage({'IsChallenge': True, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/MonsterFigures05:Near01', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void Reward_Npc_MamonoShop_Figures_Near() {
    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case [0, 1, 4, 5]:
        if !PouchSystemActor.EventQueryCanAddToPorch({'Actor': 'Item_Material_08', 'Num': 1})
        && !PouchSystemActor.EventQueryCanAddToPorch({'Num': 1, 'Actor': 'Item_Ore_A'}) {
            Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/MonsterFigures01:Near05', 'IsChallenge': True})
        } else {
            Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/MonsterFigures01:Near05'})
        }
      case [2, 3, 6, 7, 8]:
        if !PouchSystemActor.EventQueryCanAddToPorch({'Actor': 'Item_Material_08', 'Num': 1})
        && !PouchSystemActor.EventQueryCanAddToPorch({'Num': 1, 'Actor': 'Item_Ore_A'}) {
            Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/MonsterFigures05:Near02', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'IsChallenge': True})
        } else {
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/MonsterFigures05:Near02', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
        }
    }
}

void Comp_MamonoShop_Near() {
    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case [0, 1, 4, 5]:
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/MonsterFigures03:Near01', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
      case [2, 3, 6, 7, 8]:
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/MonsterFigures05:Near02', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Comp_UMiiVillage031_Near() {
    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case [0, 1, 4, 5]:
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/MonsterFigures05:Near04', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
      case [2, 3, 6, 7, 8]:
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/MonsterFigures05:Near03', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}
