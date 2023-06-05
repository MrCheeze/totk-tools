-------- EventFlow: Npc_AncientDoctor --------

Actor: Npc_AncientDoctor[WatchTowerPurah]
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBalloonMessage', 'EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule']
queries: ['EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Tool': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: []
queries: ['EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryIsExistInPouch']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventGoOffstageForUser']
queries: ['EventQueryIsEquipWeapon', 'EventQueryPlayerEquipArmorSeries', 'EventQueryIsEquipArmor']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryWeather']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerCameraSavePoint', 'EventMoveCameraToSavePoint', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_AncientDoctor_After5thSage_Talk'}) {
        if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Weapon_Sword_070', 'Num': 1, 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
            if !Player.EventQueryIsEquipWeapon({'WeaponName': 'Weapon_Sword_070', 'WeaponSlot': 0}) {
                Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/HyruleCastleIncident:talk93', 'IsNotOpenIfSkipedMostRecent': False})
                Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkingL', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/HyruleCastleIncident:talk84', 'IsNotOpenIfSkipedMostRecent': False})
                Event137:
                EventCamera.EventTriggerCameraSavePoint()

                fork {
                    GameSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
                    Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/HyruleCastleIncident:talk148', 'IsNotOpenIfSkipedMostRecent': False})
                    Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/HyruleCastleIncident:talk149', 'IsNotOpenIfSkipedMostRecent': False})
                    Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'Talk_Normal_L', 'MessageId': 'EventFlowMsg/HyruleCastleIncident:talk156', 'IsNotOpenIfSkipedMostRecent': False})
                    GameSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
                } {

                    call DemoCamera_PuruaBustUp()

                } {
                    Player.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
                }


                fork {
                    EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': True, 'ReviseMode': 0, 'EnableCameraAlpha': False})
                } {
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})
                    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Talk', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': 0.0, 'ClothWarpMode': 0})
                }

                Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/HyruleCastleIncident:talk90', 'IsNotOpenIfSkipedMostRecent': False})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_AncientDoctor_After5thSageMasterSword_Talk'})

                call HyruleCastleIncident.Talk_Ganon()

            } else {
                Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/HyruleCastleIncident:talk91', 'IsNotOpenIfSkipedMostRecent': False})
                Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkingL', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/HyruleCastleIncident:talk83', 'IsNotOpenIfSkipedMostRecent': False})
                goto Event137
            }
        } else
        if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/HyruleCastleIncident:talk92', 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/HyruleCastleIncident:talk87', 'IsNotOpenIfSkipedMostRecent': False})
        }
        Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/HyruleCastleIncident:talk80', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

        call Reaction()

    } else {
        Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/HyruleCastleIncident:talk82', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_AncientDoctor_After5thSage_Talk', 'Index': -1, 'Value': True})

        call HyruleCastleIncident.MasterSwordTalk()

        if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Weapon_Sword_070', 'Num': 1, 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {

            call HyruleCastleIncident.Talk_Ganon()

        }
    }
}

void DefeatGanondorf_IsAfter_Ready_Exp_Talk() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'MinusYiga_IsCompleted_Exp'}) {

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})

        if !Npc_AncientDoctor[WatchTowerPurah].EventQueryIsOnRecentTalkFlag() {
            Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/HyruleCastleIncident:New01_01_talk004', 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/HyruleCastleIncident:New01_01_talk003', 'IsNotOpenIfSkipedMostRecent': False})
        }
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkingL', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        EventCamera.EventTriggerCameraSavePoint()
        EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})

        fork {

            call DemoCamera_HyruleCastlePanDown()

        } {
            EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
            Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/HyruleCastleIncident:New01_02_talk001', 'IsNotOpenIfSkipedMostRecent': False})
        }


        fork {

            call DemoCamera_PuruaMiddle()

        } {
            EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DeepHoleSurvey2_IsCompleted_Exp'}) {
                Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/HyruleCastleIncident:New01_02_talk011', 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/HyruleCastleIncident:New01_02_talk011', 'IsCloseDialog': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
            EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
        } {
            Player.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        }

        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DeepHoleSurvey2_IsCompleted_Exp'}) {

            fork {
                EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
                Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/HyruleCastleIncident:New01_02_talk010', 'IsNotOpenIfSkipedMostRecent': False})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_AncientDoctor_Praise'})
            } {
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})
                Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Talk', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            }

        }

        fork {

            call DemoCamera_PuruaBustUpAnime()

        } {
            Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/HyruleCastleIncident:New01_02_talk003', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
            Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/HyruleCastleIncident:New01_02_talk005', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
            Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/HyruleCastleIncident:New01_02_talk006', 'ASName': 'Talk_Special', 'IsNotOpenIfSkipedMostRecent': False})
        } {
            Player.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        }

        Npc_AncientDoctor[WatchTowerPurah].EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule()
        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0})
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'MainChallenge', 'StepName': 'GoToDeepHole', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': True, 'IsWaitEnd': True})
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'DefeatGanondorf', 'StepName': 'GoToDeepHole', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
    } else {

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})

        if !Npc_AncientDoctor[WatchTowerPurah].EventQueryIsOnRecentTalkFlag() {
            Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/HyruleCastleIncident:New01_01_talk004', 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/HyruleCastleIncident:New01_01_talk003', 'IsNotOpenIfSkipedMostRecent': False})
        }
        Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/HyruleCastleIncident:New01_01_talk006', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/HyruleCastleIncident:New01_01_talk007', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})

        call Reaction()

    }
}

void Talk_Last() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DeepHoleSurvey2_IsCompleted_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_AncientDoctor_Praise'}) {
            Event2:
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_AncientDoctor_LastTalk'})
            && !Npc_AncientDoctor[WatchTowerPurah].EventQueryIsOnRecentTalkFlag() {
                Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/HyruleCastleIncident:New01_03_talk003', 'IsNotOpenIfSkipedMostRecent': False})
                Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'Talk_Special', 'MessageId': 'EventFlowMsg/HyruleCastleIncident:New01_03_talk004', 'IsNotOpenIfSkipedMostRecent': False})

                call Reaction()

            } else {
                Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/HyruleCastleIncident:New01_03_talk001', 'IsNotOpenIfSkipedMostRecent': False})
                Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/HyruleCastleIncident:New01_03_talk002', 'IsNotOpenIfSkipedMostRecent': False})
                Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'Talk_Special', 'MessageId': 'EventFlowMsg/HyruleCastleIncident:New01_03_talk004', 'IsNotOpenIfSkipedMostRecent': False})
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_AncientDoctor_LastTalk', 'Index': -1, 'Value': True})

                call Reaction()

            }
        } else {
            Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/HyruleCastleIncident:New01_02_talk010', 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_AncientDoctor_Praise'})
            goto Event2
        }
    } else
    goto Event2
}

void Reaction() {
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckUpper': True, 'CheckLower': True, 'CheckSeries': 'Naked', 'CheckHead': False}) {
        if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Naked_infrontof_Purua', 'Index': -1}) {
            Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/HyruleCastleIncident:talk94', 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Naked_infrontof_Purua', 'Index': -1, 'Value': True})
        }
    } else
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckSeries': 'Yiga', 'CheckHead': True, 'CheckUpper': False, 'CheckLower': False}) {
        if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Yiga_infrontof_Purua', 'Index': -1}) {
            Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/HyruleCastleIncident:talk96', 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Yiga_infrontof_Purua', 'Index': -1, 'Value': True})
        }
    } else
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckLower': False, 'CheckSeries': 'NewHero', 'CheckHead': False, 'CheckUpper': True}) {
        if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'NewHero_infrontof_Purua', 'Index': -1}) {
            Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/HyruleCastleIncident:talk97', 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'NewHero_infrontof_Purua', 'Index': -1, 'Value': True})
        }
    } else
    if !Player.EventQueryIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_1151_Head'}) {
        if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HairClip_infrontof_Purua', 'Index': -1}) {
            Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/HyruleCastleIncident:talk98', 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'HairClip_infrontof_Purua'})
        }
    } else
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckUpper': True, 'CheckHead': True, 'CheckLower': True, 'CheckSeries': 'AncientHeroSoul'}) {
        if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'AncientHero_infrontof_Purua'}) {
            Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/HyruleCastleIncident:talk99', 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'AncientHero_infrontof_Purua', 'Index': -1, 'Value': True})
        }
    } else
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckUpper': True, 'CheckHead': True, 'CheckLower': True, 'CheckSeries': 'NotSlippy'}) {
        if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Kawazu_infrontof_Purua1'}) {
            Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/HyruleCastleIncident:talk101', 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Kawazu_infrontof_Purua1'})
        }
    } else
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckSeries': 'NotSlippy', 'CheckUpper': False, 'CheckLower': False}) {
        Event8:
        if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Kawazu_infrontof_Purua'})
        && GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Kawazu_infrontof_Purua1'}) {
            Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/HyruleCastleIncident:talk100', 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Kawazu_infrontof_Purua'})
        }
    } else
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckSeries': 'NotSlippy', 'CheckHead': False, 'CheckLower': False, 'CheckUpper': True}) {
        goto Event8
    } else
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckSeries': 'NotSlippy', 'CheckHead': False, 'CheckUpper': False, 'CheckLower': True}) {
        goto Event8
    }
}

void DefeatGanondorf_IsAfter_FindWhereabouts_Exp_Near() {
    if EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) in [2, 3, 4, 5, 6, 7, 8] {
        Npc_AncientDoctor[WatchTowerPurah].EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/SurveyOfFourVillages:Near_01', 'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void DemoCamera_HyruleCastlePanDown() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-254.0, 171.1300048828125, -151.57000732421875], 'AtVector': [-253.99000549316406, 172.25, -155.60000610351562], 'TargetFovy': 40.0, 'Actor1InstanceName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'Actor1ActorName': '', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'PosVector': [-254.0, 172.00999450683594, -151.4199981689453], 'AtVector': [-253.99000549316406, 172.25, -155.60000610351562], 'TargetFovy': 40.0, 'MoveTime': 120, 'Actor1ActorName': '', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void DemoCamera_PuruaBustUp() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'Actor1ActorName': 'Npc_AncientDoctor', 'Actor1InstanceName': 'WatchTowerPurah', 'PosVector': [-0.17000000178813934, 1.4199999570846558, 1.340000033378601], 'AtVector': [0.029999999329447746, 1.4900000095367432, 0.3700000047683716], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void DemoCamera_PuruaMiddle() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_AncientDoctor', 'Actor1InstanceName': 'WatchTowerPurah', 'PosVector': [-0.23000000417232513, 1.190000057220459, 1.7400000095367432], 'AtVector': [-0.03999999910593033, 1.2599999904632568, 0.7699999809265137], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void DemoCamera_PuruaBustUpAnime() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_AncientDoctor', 'Actor1InstanceName': 'WatchTowerPurah', 'PosVector': [-0.23000000417232513, 1.190000057220459, 1.7400000095367432], 'AtVector': [-0.03999999910593033, 1.2599999904632568, 0.7699999809265137], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 90, 'Actor1ActorName': 'Npc_AncientDoctor', 'Actor1InstanceName': 'WatchTowerPurah', 'PosVector': [-0.17000000178813934, 1.4199999570846558, 1.340000033378601], 'AtVector': [0.029999999329447746, 1.4900000095367432, 0.3700000047683716], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}
