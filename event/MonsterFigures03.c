-------- EventFlow: MonsterFigures03 --------

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn', 'EventWait', 'EventWaitAlbumSelectPictureUIInput', 'EventChangeAlbumModeDetail', 'EventChangeAlbumModeList', 'EventOpenAlbumSelectPictureUIFromFigureTarget', 'EventOpenAlbumSelectPictureUIFromChallengeTarget', 'EventCloseAlbumSelectPictureUI']
queries: ['EventQueryTalkChoice2', 'EventQueryTalkChoice3', 'EventQueryAlbumSelectPictureActorName', 'EventQueryCheckNoObjectNearAnchor']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: []
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataEnum']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

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

Actor: Npc_HighMountain010[Figures]
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Goron025[Figures]
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_UMiiVillage009[Figures]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Zora005[Figures]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: FigureCreateActor
entrypoint: None()
actions: []
queries: ['EventQueryIsFigureCreateNumFull']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryWeather']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerBalloonMessage', 'EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryCanAddToPorch']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventSendMultiEventTalkMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventTriggerProgressChallengeStep', 'EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: FigureDeleteArea
entrypoint: None()
actions: []
queries: ['EventQueryIsExistFigureInArea']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Photo_Npc_UMiiVillage031_Figures_Talk() {
    Event207:

    call InitTalk.InitTalk_Pair({'Arg_Greeting': 3, 'Spearker1ActorName': 'Npc_MamonoShop', 'Spearker1InstanceName': 'Figures', 'Spearker2ActorName': 'Npc_UMiiVillage031', 'Spearker2InstanceName': 'Figures', 'Actor1': ActorIdentifier(name="Npc_MamonoShop", sub_name="Figures"), 'Actor2': ActorIdentifier(name="Npc_UMiiVillage031", sub_name="Figures"), 'Arg_Turn': 3})

    Event82:

    call MonsterFigures_Common.WaitPhoto_Greeting()


    call MonsterFigures_Common.WaitPhoto_Enokida()

    if !FigureCreateActor.EventQueryIsFigureCreateNumFull() {

        call MonsterFigures_Common.FullOfFigures()

    } else
    if !Npc_UMiiVillage031[Figures].EventQueryHasPictureWithFigureInfo() {
        if !GameSystemActor.EventQueryCheckNoObjectNearAnchor({'AnchorInstanceName': 'FigureBasePos', 'AnchorActorName': 'DesignateMatrixActor', 'Length': 10.0, 'Radius': 3.0}) {
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MonsterFigures_IsExplainedDelete', 'Index': -1}) {
                if !FigureDeleteArea.EventQueryIsExistFigureInArea() {
                    Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 7, 'ChoiceLabel4': 2, 'ChoiceLabel3': 13, 'MessageId': 'EventFlowMsg/MonsterFigures03:Talk73', 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})

                    call MonsterFigures_Common.ExistOnFigureBaseAfterDeleteEvent()

                } else {
                    Event154:
                    Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 1, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 13, 'ChoiceNumber': 3, 'MessageId': 'EventFlowMsg/MonsterFigures03:Talk61', 'ChoiceLabel3': 10, 'IsNotOpenIfSkipedMostRecent': False})
                    switch GameSystemActor.EventQueryTalkChoice3() {
                      case 0:

                        call Ready_OpenAlbum()

                      case 1:

                        call ExplainRequest_1st()

                        Event166:
                        Npc_UMiiVillage031[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceDefaultNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 1, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures03:Talk72', 'ChoiceLabel2': 13, 'ChoiceNumber': 3, 'ChoiceLabel3': 10, 'IsNotOpenIfSkipedMostRecent': False})
                        switch GameSystemActor.EventQueryTalkChoice3() {
                          case 0:

                            call Ready_OpenAlbum()

                          case 1:

                            call ExplainRequest_2nd()

                            goto Event166
                          case 2:
                            Event131:
                            Npc_MamonoShop[Figures].EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                            Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk73', 'IsNotOpenIfSkipedMostRecent': False})
                        }
                      case 2:
                        goto Event131
                    }
                }
            } else {
                Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 7, 'ChoiceLabel4': 2, 'ChoiceLabel3': 13, 'MessageId': 'EventFlowMsg/MonsterFigures03:Talk73', 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})

                call MonsterFigures_Common.ExistOnFigureBase()

            }
        } else {
            goto Event154
        }
    } else {
        Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures03:Talk73', 'ChoiceNumber': 2, 'ChoiceLabel1': 13, 'ChoiceLabel2': 10, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {

            call ExplainRequest_1st()

            Event189:
            Npc_UMiiVillage031[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceDefaultNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures03:Talk72', 'ChoiceLabel3': 2, 'ChoiceNumber': 2, 'ChoiceLabel1': 13, 'ChoiceLabel2': 10, 'IsNotOpenIfSkipedMostRecent': False})
            if !GameSystemActor.EventQueryTalkChoice2() {

                call ExplainRequest_2nd()

                goto Event189
            } else {
                goto Event131
            }
        } else {
            goto Event131
        }
    }
}

void Photo_Npc_MamonoShop_Figures_Talk() {
    Event3:

    call Npc_MamonoShop.NushiShop_CompleteCheck()


    call InitTalk.InitTalk_Pair({'Arg_Greeting': 3, 'Spearker1ActorName': 'Npc_MamonoShop', 'Spearker1InstanceName': 'Figures', 'Spearker2ActorName': 'Npc_UMiiVillage031', 'Spearker2InstanceName': 'Figures', 'Actor1': ActorIdentifier(name="Npc_MamonoShop", sub_name="Figures"), 'Actor2': ActorIdentifier(name="Npc_UMiiVillage031", sub_name="Figures"), 'Arg_Turn': 3})

    goto Event82
}

void Display_Npc_UMiiVillage031_Figures_Talk() {
    Event86:

    call InitTalk.InitTalk_Pair({'Arg_Turn': 0, 'Arg_Greeting': 3, 'Actor1': ActorIdentifier(name="Npc_MamonoShop", sub_name="Figures"), 'Actor2': ActorIdentifier(name="Npc_UMiiVillage031", sub_name="Figures"), 'Spearker1ActorName': 'Npc_MamonoShop', 'Spearker1InstanceName': 'Figures', 'Spearker2ActorName': 'Npc_UMiiVillage031', 'Spearker2InstanceName': 'Figures'})

    Npc_MamonoShop[Figures].EventPlayAS({'IsAnimeDriven': False, 'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
    Npc_UMiiVillage031[Figures].EventPlayAS({'IsAnimeDriven': False, 'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case [0, 1, 4, 5]:
        Event14:
        Npc_UMiiVillage031[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures03:Talk84', 'IsNotOpenIfSkipedMostRecent': False})
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MonsterFigures_Set_Golem_Fort'}) {
            Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 6, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MonsterFigures03:Talk23', 'ChoiceLabel2': 2, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            if !GameSystemActor.EventQueryTalkChoice2() {

                fork {
                    Npc_MamonoShop[Figures].EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'FaceControlType': 1, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                } {
                    Npc_UMiiVillage031[Figures].EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                }

                Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MonsterFigures03:Talk25', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                call MonsterFigures_Common.LookAtFigureFromMamonoShop()

                Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MonsterFigures03:Talk26', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Npc_UMiiVillage031[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MonsterFigures03:Talk27', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Npc_MamonoShop[Figures].EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'FaceControlType': 1, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                EventCamera.EventSendMultiEventTalkMessageToPlayerCamera({'Speaker1SetType': 1, 'Spearker1ActorName': 'Npc_MamonoShop', 'Spearker1InstanceName': 'Figures', 'Speaker2SetType': 1, 'Spearker2ActorName': 'Npc_UMiiVillage031', 'Spearker2InstanceName': 'Figures', 'IsWaitEnd': False, 'Speaker3SetType': 0, 'Spearker3ActorName': '', 'Spearker3InstanceName': '', 'Speaker4SetType': 0, 'Spearker4ActorName': '', 'Spearker4InstanceName': ''})
                Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MonsterFigures03:Talk30', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': True, 'ChallengeName': 'MonsterFigures03', 'StepName': 'Exhibition', 'IsWaitEnd': True})
            } else {
                Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MonsterFigures03:Talk24', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
        } else {
            Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MonsterFigures03:Talk24', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
      case [2, 3, 6, 7, 8]:
        Npc_UMiiVillage031[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk97', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event14
    }
}

void Display_Npc_MamonoShop_Figures_Talk() {
    goto Event86
}

void InitMonsterExpo() {

    call MonsterFigures02.InitMonsterExpo()


    call MonsterFigures_Common.SetupAudience({'InstanceName': 'Figures', 'NpcName': 'Npc_UMiiVillage009', 'Npc_Actor': ActorIdentifier(name="Npc_UMiiVillage009", sub_name="Figures")})


    call MonsterFigures_Common.SetupAudience({'InstanceName': 'Figures', 'NpcName': 'Npc_Zora005', 'Npc_Actor': ActorIdentifier(name="Npc_Zora005", sub_name="Figures")})

}

void AfterExpo() {

    call MonsterFigures_Common.TwoMenTurnToPlayer()

    Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MonsterFigures03:Talk36', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    if !PouchSystemActor.EventQueryCanAddToPorch({'Actor': 'Item_Material_08', 'Num': 1}) {

        call GetReward()

    } else {
        Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures03:Talk85', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_MamonoShop[Figures].EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule()
        Npc_MamonoShop[Figures].EventTriggerAIScheduleSetIsRequestSetPostTalkTimer()
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Reward', 'ChallengeName': 'MonsterFigures03', 'IsWaitEnd': True})
    }
}

void Exhibition_Npc_MamonoShop_Figures_StepStart() {

    call Common.AirStartUP_Player()

    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    call InitMonsterExpo()

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

    call MonsterFigures_Common.LookAtAll()

    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MonsterFigures03:Talk31', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

    call MonsterFigures_Common.LookAtFigureFromAudience({'CameraPosActor': 'Npc_oasis050', 'CameraPosInstanceName': 'Figures'})

    Npc_HighMountain010[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures03:Talk32', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MonsterFigures03:Talk33', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Goron025[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MonsterFigures03:Talk34', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MonsterFigures03:Talk35', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

    call MonsterFigures_Common.SetupRewardPosition()


    call AfterExpo()

}

void CreateGolemFort() {

    call MonsterFigures_Common.CreateFigure()

    Npc_UMiiVillage031[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures03:Talk29', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MonsterFigures03:Talk16', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_UMiiVillage031[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MonsterFigures03:Talk17', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

    call MonsterFigures_Common.LookAtStage()

    Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures03:Talk83', 'IsNotOpenIfSkipedMostRecent': False})
    EventCamera.EventSendMultiEventTalkMessageToPlayerCamera({'Speaker1SetType': 1, 'Spearker1ActorName': 'Npc_MamonoShop', 'Spearker1InstanceName': 'Figures', 'Speaker2SetType': 1, 'Spearker2ActorName': 'Npc_UMiiVillage031', 'Spearker2InstanceName': 'Figures', 'IsWaitEnd': False, 'Speaker3SetType': 0, 'Spearker3ActorName': '', 'Spearker3InstanceName': '', 'Speaker4SetType': 0, 'Spearker4ActorName': '', 'Spearker4InstanceName': ''})
    Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MonsterFigures03:Talk23', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'MonsterFigures03', 'StepName': 'Display', 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
}

void Ready_Npc_UMiiVillage031_Figures_Talk() {
    goto Event207
}

void Ready_Npc_MamonoShop_Figures_Talk() {
    goto Event3
}

void Ready_SelectingPhoto() {
    Event74:
    GameSystemActor.EventWaitAlbumSelectPictureUIInput({'IsWaitEnd': True})
    switch Npc_UMiiVillage031[Figures].EventQueryAlbumSelectPictureUIInput() {
      case 0:
        if !GameSystemActor.EventQueryAlbumSelectPictureActorName({'ActorName': 'Enemy_Golem_Fort_A'}) {
            GameSystemActor.EventChangeAlbumModeDetail({'IsWaitEnd': True})
            Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MonsterFigures03:Talk08', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceLabel1': 3, 'ChoiceNumber': 3, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 5, 'ChoiceLabel3': 4, 'MessageId': 'EventFlowMsg/MonsterFigures03:Talk11', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            switch GameSystemActor.EventQueryTalkChoice3() {
              case 0:
                GameSystemActor.EventCloseAlbumSelectPictureUI({'IsWaitEnd': True, 'withSound': True})
                Npc_UMiiVillage031[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures03:Talk13', 'IsNotOpenIfSkipedMostRecent': False})

                call CreateGolemFort()

              case 1:

                call MonsterFigures_Common.ClosePad({'Npc_UMiiVillage031': ActorIdentifier(name="Npc_MamonoShop", sub_name="Figures"), 'MessageId': 'EventFlowMsg/MonsterFigures03:Talk44'})

                Npc_UMiiVillage031[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MonsterFigures03:Talk12', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
              case 2:
                GameSystemActor.EventChangeAlbumModeList({'IsWaitEnd': True})

                call Ready_SelectingPhoto()

            }
        } else {
            GameSystemActor.EventChangeAlbumModeDetail({'IsWaitEnd': True})

            call MonsterFigures_Common.Talk_BeforeCreatingOtherFigure()

            switch GameSystemActor.EventQueryTalkChoice3() {
              case 0:

                call MonsterFigures_Common.CreateOtherFigure()

                Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures03:Talk67', 'IsNotOpenIfSkipedMostRecent': False})
              case 1:

                call MonsterFigures_Common.ClosePad({'Npc_UMiiVillage031': ActorIdentifier(name="Npc_MamonoShop", sub_name="Figures"), 'MessageId': 'EventFlowMsg/MonsterFigures03:Talk44'})

              case 2:
                GameSystemActor.EventChangeAlbumModeList({'IsWaitEnd': True})

                call Ready_SelectingPhoto()

            }
        }
      case 1:

        call MonsterFigures_Common.NonMonsterInPhoto()

        Event105:

        call Ready_SelectingPhoto()

      case 2:

        call MonsterFigures_Common.CanNotCreateFigure()

        goto Event105
      case 3:

        call MonsterFigures_Common.CancelToSelectPhoto()

    }
}

void Ready_OpenAlbum() {

    call MonsterFigures_Common.ShowPad()

    if !GameDataActor.EventQueryIsGameDataEnum({'Value': 'Photo', 'GameDataName': 'Step_MonsterFigures03', 'Index': -1}) {
        GameSystemActor.EventOpenAlbumSelectPictureUIFromChallengeTarget({'IsWaitEnd': True, 'StepName': 'Photo', 'WithFigureTarget': True, 'ChallengeName': 'MonsterFigures03'})
    } else {
        GameSystemActor.EventOpenAlbumSelectPictureUIFromFigureTarget({'IsWaitEnd': True})
    }
    goto Event74
}

void ExplainRequest_1st() {
    Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures03:Talk68', 'IsNotOpenIfSkipedMostRecent': False})
    Event128:
    Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures03:Talk76', 'IsNotOpenIfSkipedMostRecent': False})
    ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'MonsterFigures03', 'StepName': 'Photo', 'IsIgnoreChallengeProgressUI': False})
}

void ExplainRequest_2nd() {
    Npc_MamonoShop[Figures].EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures03:Talk78', 'IsNotOpenIfSkipedMostRecent': False})
    goto Event128
}

void Reward_Npc_UMiiVillage031_Figures_Talk() {

    call MonsterFigures_Common.Reward_Enokida_Talk()

}

void Reward_Npc_MamonoShop_Figures_Talk() {

    call InitTalk.InitTalk_Pair({'Arg_Greeting': 3, 'Spearker1ActorName': 'Npc_MamonoShop', 'Spearker1InstanceName': 'Figures', 'Spearker2ActorName': 'Npc_UMiiVillage031', 'Spearker2InstanceName': 'Figures', 'Actor1': ActorIdentifier(name="Npc_MamonoShop", sub_name="Figures"), 'Actor2': ActorIdentifier(name="Npc_UMiiVillage031", sub_name="Figures"), 'Arg_Turn': 3})

    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case [0, 1, 4, 5]:
        Event49:
        if !PouchSystemActor.EventQueryCanAddToPorch({'Actor': 'Item_Material_08', 'Num': 1}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk101', 'IsNotOpenIfSkipedMostRecent': False})

            call GetReward()

        } else {
            Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/MonsterFigures03:Talk86', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
        }
      case [2, 3, 6, 7, 8]:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/MonsterFigures05:Talk98', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event49
    }
}

void Ready_Npc_UMiiVillage031_Figures_Near() {
    Event42:
    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case [0, 1, 4, 5]:
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/MonsterFigures05:Near04', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
      case [2, 3, 6, 7, 8]:
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/MonsterFigures05:Near03', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Photo_Npc_UMiiVillage031_Figures_Near() {
    goto Event42
}

void Display_Npc_UMiiVillage031_Figures_Near() {
    if EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) in [2, 3, 6, 7, 8] {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'MessageID': 'EventFlowMsg/MonsterFigures05:Near06', 'NotOverriddenByInterestBalloon': False})
    }
}

void Display_Npc_MamonoShop_Figures_Near() {
    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case [0, 1, 4, 5]:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MonsterFigures_Set_Golem_Fort'}) {
            Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/MonsterFigures01:Near04', 'IsChallenge': True})
        } else {
            Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/MonsterFigures01:Near04', 'IsChallenge': False})
        }
      case [2, 3, 6, 7, 8]:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MonsterFigures_Set_Golem_Fort'}) {
            Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'MessageID': 'EventFlowMsg/MonsterFigures05:Near05', 'NotOverriddenByInterestBalloon': False, 'IsChallenge': True})
        } else {
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'MessageID': 'EventFlowMsg/MonsterFigures05:Near05', 'NotOverriddenByInterestBalloon': False})
        }
    }
}

void Reward_Npc_UMiiVillage031_Figures_Near() {
    goto Event42
}

void GetReward() {

    call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'GameRomHorseReins_04'})

    Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MonsterFigures03:Talk37', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

    call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Item_Material_08'})

    Npc_MamonoShop[Figures].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/MonsterFigures03:Talk38', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'MonsterFigures03', 'StepName': 'Complete', 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
}

void Photo_Npc_MamonoShop_Figures_Near() {
    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case [0, 1, 4, 5]:
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/MonsterFigures03:Near01', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
      case [2, 3, 6, 7, 8]:
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/MonsterFigures05:Near02', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Ready_Npc_MamonoShop_Figures_Near() {
    Npc_MamonoShop[Figures].EventTriggerBalloonMessage({'IsChallenge': True, 'MessageID': 'EventFlowMsg/MonsterFigures03:Near01', 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void Reward_Npc_MamonoShop_Figures_Near() {
    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case [0, 1, 4, 5]:
        if !PouchSystemActor.EventQueryCanAddToPorch({'Actor': 'Item_Material_08', 'Num': 1}) {
            Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/MonsterFigures01:Near05', 'IsChallenge': True})
        } else {
            Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/MonsterFigures01:Near05'})
        }
      case [2, 3, 6, 7, 8]:
        if !PouchSystemActor.EventQueryCanAddToPorch({'Actor': 'Item_Material_08', 'Num': 1}) {
            Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/MonsterFigures05:Near02', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'IsChallenge': True})
        } else {
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/MonsterFigures05:Near02', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
        }
    }
}
