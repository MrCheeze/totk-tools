-------- EventFlow: Uotori_WhiteLineGame --------

Actor: Npc_SouthernVillage006[Uotori]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventAIScheduleWarpToAnchor', 'EventTalk', 'EventNPCTurnToTarget', 'EventTriggerChangeAIScheduleEquipState', 'EventTriggerLookAtObject', 'EventTriggerNPCChangePosture', 'EventTriggerAIScheduleSelectSchedule', 'EventWait', 'EventTriggerChangeEmotion']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'IsBindNearestActor': False}

Actor: Npc_SouthernVillage009[Uotori]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventAIScheduleWarpToAnchor', 'EventTalk', 'EventNPCTurnToTarget', 'EventTriggerBalloonMessage', 'EventTriggerLookAtObject', 'EventWait', 'EventTriggerNPCChangePosture', 'EventTriggerAIScheduleSelectSchedule', 'EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule', 'EventTriggerAIScheduleSetIsRequestSetPostTalkTimer']
queries: ['EventQueryAIScheduleCheckActorAction14', 'EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_SouthernVillage008[Uotori]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventAIScheduleWarpToAnchor', 'EventTalk', 'EventNPCTurnToTarget', 'EventTriggerLookAtObject', 'EventWait', 'EventTriggerNPCChangePosture', 'EventTriggerAIScheduleSelectSchedule', 'EventTriggerChangeEmotion', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_SouthernVillage007[Uotori]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTraverseAroundAndWaitCreateActor', 'EventEventFadeIn', 'EventEventFadeOut']
queries: ['EventQueryTalkChoice2']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerWarpToNearAnchor', 'EventPlayerTurnAndLook', 'EventPlayerPlayASForFlowchart', 'EventWait', 'EventTriggerPlayerLookAtObject', 'EventPlayerHorseGetOff']
queries: ['EventQueryIsEquipArmor', 'EventQueryPlayerCheckRideHorse']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryWeather', 'EventQueryTimeDivision']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule', 'EventTriggerAIScheduleSetIsRequestSetPostTalkTimer']
queries: ['EventQueryIsOnRecentTalkFlag', 'EventQueryAIScheduleCheckActorAction14']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryIsExistInPouch']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_HatenoVillage032[Uotori]
entrypoint: None()
actions: ['EventAIScheduleWarpToAnchor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

void Step01_Npc_SouthernVillage009_Uotori_Talk() {

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})

    switch Npc_SouthernVillage009[Uotori].EventQueryAIScheduleCheckActorAction14() {
      case [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 12, 13]:
        Event227:
        if !Player.EventQueryIsEquipArmor({'ArmorName': 'Armor_175_Upper', 'ArmorSlot': 1}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Uotori_WhiteLineGame_Talk01'}) {
                Npc_SouthernVillage009[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Uotori_WhiteLineGame:Talk_48', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Npc_SouthernVillage009[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Uotori_WhiteLineGame:Talk_55', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_SouthernVillage009[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Uotori_WhiteLineGame:Talk_12', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Npc_SouthernVillage009[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Uotori_WhiteLineGame:Talk_53', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Npc_SouthernVillage009[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Uotori_WhiteLineGame:Talk_48', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Npc_SouthernVillage009[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Uotori_WhiteLineGame:Talk_54', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Npc_SouthernVillage009[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Uotori_WhiteLineGame:Talk_55', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Uotori_WhiteLineGame_Talk01', 'Index': -1, 'Value': True})
                Npc_EventStarter.EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule()
                Npc_EventStarter.EventTriggerAIScheduleSetIsRequestSetPostTalkTimer()
            }
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Uotori_WhiteLineGame_Talk01'}) {
            Npc_SouthernVillage009[Uotori].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 2, 'ChoiceLabel2': 1, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Uotori_WhiteLineGame:Talk_49', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            if !GameSystemActor.EventQueryTalkChoice2() {
                if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Armor_175_Upper', 'Num': 1, 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
                    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkHandOver', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                    Npc_SouthernVillage009[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_WhiteLineGame:Talk_52', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                    call Report()

                } else {
                    Npc_SouthernVillage009[Uotori].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Uotori_WhiteLineGame:Talk_56', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                }
            } else {
                Npc_SouthernVillage009[Uotori].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Uotori_WhiteLineGame:Talk_57', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Npc_SouthernVillage009[Uotori].EventTriggerAIScheduleSetIsRequestSetPostTalkTimer()
                Npc_SouthernVillage009[Uotori].EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule()
            }
        } else
        if !Npc_SouthernVillage009[Uotori].EventQueryIsOnRecentTalkFlag() {
            Npc_SouthernVillage009[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_WhiteLineGame:Talk_12', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Event229:
            if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Armor_175_Upper', 'Num': 1, 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
                Npc_SouthernVillage009[Uotori].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_WhiteLineGame:Talk_18', 'ChoiceNumber': 2, 'ChoiceLabel1': 2, 'ChoiceLabel2': 1, 'IsWaitEnd': True, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                if !GameSystemActor.EventQueryTalkChoice2() {
                    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkHandOver', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                    Npc_SouthernVillage009[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_WhiteLineGame:Talk_26', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    Npc_SouthernVillage009[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_WhiteLineGame:Talk_52', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                    call Report()

                } else {
                    Npc_SouthernVillage009[Uotori].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_WhiteLineGame:Talk_25', 'IsWaitEnd': True, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                }
            } else
            switch Npc_SouthernVillage009[Uotori].EventQueryAIScheduleCheckActorAction14() {
              case [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 12, 13]:
                if EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) in [2, 3, 4, 5, 6, 7, 8] {
                    Npc_SouthernVillage009[Uotori].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_WhiteLineGame:Talk_14', 'IsWaitEnd': True, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                }
              case 10:
                Npc_SouthernVillage009[Uotori].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_WhiteLineGame:Talk_35', 'IsWaitEnd': True, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
        } else {

            call Weather()

            Npc_SouthernVillage009[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 1, 'MessageId': 'EventFlowMsg/Uotori_WhiteLineGame:Talk_02', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            if !GameSystemActor.EventQueryTalkChoice2() {
                Npc_SouthernVillage009[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Uotori_WhiteLineGame:Talk_23', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event229
            } else
            switch Npc_SouthernVillage009[Uotori].EventQueryAIScheduleCheckActorAction14() {
              case [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 12, 13]:
                switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
                  case [0, 1]:
                    Npc_SouthernVillage009[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Uotori_WhiteLineGame:Talk_24', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                  case [2, 3, 4, 5, 6, 7, 8]:
                    Npc_SouthernVillage009[Uotori].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_WhiteLineGame:Talk_14', 'IsWaitEnd': True, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                }
              case 10:
                Npc_SouthernVillage009[Uotori].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_WhiteLineGame:Talk_35', 'IsWaitEnd': True, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
        }
      case 10:
        Npc_SouthernVillage009[Uotori].EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'ActorName': '', 'InstanceName': '', 'WorldPos': [2496.0, 330.0, 2917.0], 'Target': 2, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        goto Event227
      case 11:
        Npc_SouthernVillage009[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_WhiteLineGame:Talk_19', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Step01_Npc_SouthernVillage009_Uotori_Near() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Uotori_WhiteLineGame_Talk01'}) {
        if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Armor_175_Upper', 'Num': 1, 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
            Npc_SouthernVillage009[Uotori].EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': True, 'MessageID': 'EventFlowMsg/Uotori_WhiteLineGame:Near_07', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
        } else {
            Npc_SouthernVillage009[Uotori].EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/Uotori_WhiteLineGame:Near_07', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
        }
    } else
    if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Armor_175_Upper', 'Num': 1, 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
        switch Npc_SouthernVillage009[Uotori].EventQueryAIScheduleCheckActorAction14() {
          case 0:
            Npc_SouthernVillage009[Uotori].EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Uotori_WhiteLineGame:Near_05', 'IsChallenge': True, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
          case [1, 2, 3]:
            Npc_SouthernVillage009[Uotori].EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Uotori_WhiteLineGame:Near_02', 'IsChallenge': True, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
          case 10:
            Npc_SouthernVillage009[Uotori].EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Uotori_WhiteLineGame:Near_06', 'IsChallenge': True, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
        }
    } else
    switch Npc_SouthernVillage009[Uotori].EventQueryAIScheduleCheckActorAction14() {
      case 0:
        Npc_SouthernVillage009[Uotori].EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Uotori_WhiteLineGame:Near_05', 'IsChallenge': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
      case [1, 2, 3]:
        Npc_SouthernVillage009[Uotori].EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Uotori_WhiteLineGame:Near_02', 'IsChallenge': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
      case 10:
        Npc_SouthernVillage009[Uotori].EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Uotori_WhiteLineGame:Near_06', 'IsChallenge': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Ready_Npc_SouthernVillage009_Uotori_Talk() {

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})

    switch Npc_SouthernVillage009[Uotori].EventQueryAIScheduleCheckActorAction14() {
      case [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 12, 13]:
        Event230:
        if !Player.EventQueryIsEquipArmor({'ArmorName': 'Armor_175_Upper', 'ArmorSlot': 1}) {
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Uotori_ReviveRestaurant_Thank_04', 'Index': -1}) {

                call Weather()

                Event234:
                Npc_SouthernVillage009[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Uotori_WhiteLineGame:Talk_12', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Npc_SouthernVillage009[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Uotori_WhiteLineGame:Talk_53', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Npc_SouthernVillage009[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Uotori_WhiteLineGame:Talk_48', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Npc_SouthernVillage009[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Uotori_WhiteLineGame:Talk_54', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Npc_SouthernVillage009[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Uotori_WhiteLineGame:Talk_55', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Uotori_WhiteLineGame_Talk01', 'Index': -1, 'Value': True})
                ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'Uotori_WhiteLineGame', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Step01', 'IsWaitEnd': True})
                Npc_EventStarter.EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule()
                Npc_EventStarter.EventTriggerAIScheduleSetIsRequestSetPostTalkTimer()
            } else {

                call Thank_01()

                Npc_SouthernVillage009[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Uotori_WhiteLineGame:Talk_01', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event234
            }
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Uotori_ReviveRestaurant_Thank_04', 'Index': -1}) {

            call Weather()

            if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Armor_175_Upper', 'Num': 1, 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
                Npc_SouthernVillage009[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Uotori_WhiteLineGame:Talk_12', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Event103:
                Npc_SouthernVillage009[Uotori].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_WhiteLineGame:Talk_18', 'ChoiceNumber': 2, 'ChoiceLabel1': 2, 'ChoiceLabel2': 1, 'IsWaitEnd': True, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                if !GameSystemActor.EventQueryTalkChoice2() {
                    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkHandOver', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                    Npc_SouthernVillage009[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_WhiteLineGame:Talk_52', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                    call Report()

                } else {
                    Npc_SouthernVillage009[Uotori].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_WhiteLineGame:Talk_25', 'IsWaitEnd': True, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'Uotori_WhiteLineGame', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Step01', 'IsWaitEnd': True})
                }
            } else {
                Npc_SouthernVillage009[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 1, 'MessageId': 'EventFlowMsg/Uotori_WhiteLineGame:Talk_02', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Event157:
                if !GameSystemActor.EventQueryTalkChoice2() {
                    Npc_SouthernVillage009[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Uotori_WhiteLineGame:Talk_23', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Armor_175_Upper', 'Num': 1, 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
                        goto Event103
                    } else
                    switch Npc_SouthernVillage009[Uotori].EventQueryAIScheduleCheckActorAction14() {
                      case [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 12, 13]:
                        switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
                          case [0, 1]:
                            Event74:
                            ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'Uotori_WhiteLineGame', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Step01', 'IsWaitEnd': True})
                          case [2, 3, 4, 5, 6, 7, 8]:
                            Npc_SouthernVillage009[Uotori].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_WhiteLineGame:Talk_14', 'IsWaitEnd': True, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            goto Event74
                        }
                      case 10:
                        Npc_SouthernVillage009[Uotori].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_WhiteLineGame:Talk_35', 'IsWaitEnd': True, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        goto Event74
                    }
                } else
                switch Npc_SouthernVillage009[Uotori].EventQueryAIScheduleCheckActorAction14() {
                  case [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 12, 13]:
                    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
                      case [0, 1]:
                        Npc_SouthernVillage009[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Uotori_WhiteLineGame:Talk_24', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                      case [2, 3, 4, 5, 6, 7, 8]:
                        Npc_SouthernVillage009[Uotori].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_WhiteLineGame:Talk_14', 'IsWaitEnd': True, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    }
                  case 10:
                    Npc_SouthernVillage009[Uotori].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_WhiteLineGame:Talk_35', 'IsWaitEnd': True, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                }
            }
        } else {

            call Thank_01()

            Npc_SouthernVillage009[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Uotori_WhiteLineGame:Talk_01', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 1, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event157
        }
      case 10:
        Npc_SouthernVillage009[Uotori].EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'ActorName': '', 'InstanceName': '', 'WorldPos': [2496.0, 330.0, 2917.0], 'Target': 2, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        goto Event230
      case 11:
        Npc_SouthernVillage009[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_WhiteLineGame:Talk_19', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Ready_Npc_SouthernVillage009_Uotori_Near() {
    switch Npc_SouthernVillage009[Uotori].EventQueryAIScheduleCheckActorAction14() {
      case 0:
        Npc_SouthernVillage009[Uotori].EventTriggerBalloonMessage({'IsChallenge': True, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Uotori_WhiteLineGame:Near_05', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
      case [1, 2, 3]:
        Npc_SouthernVillage009[Uotori].EventTriggerBalloonMessage({'IsChallenge': True, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Uotori_WhiteLineGame:Near_01', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
      case 10:
        Npc_SouthernVillage009[Uotori].EventTriggerBalloonMessage({'IsChallenge': True, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Uotori_WhiteLineGame:Near_06', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Report() {
    GameSystemActor.EventEventFadeOut({'Length': 1, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Uotori_WhiteLineGame_SakuradaHide', 'Index': -1, 'Value': True})
    Npc_SouthernVillage009[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_WhiteLineGame:Talk_27', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})

    fork {
        Npc_SouthernVillage007[Uotori].EventTriggerParticipateEvent()
    } {
        Npc_SouthernVillage009[Uotori].EventTriggerParticipateEvent()
    } {
        Npc_SouthernVillage006[Uotori].EventTriggerParticipateEvent()
    } {
        Npc_SouthernVillage008[Uotori].EventTriggerParticipateEvent()
    }

    Npc_SouthernVillage006[Uotori].EventAIScheduleWarpToAnchor({'AnchorType': 22, 'IsWaitEnd': True, 'ActionType': 0, 'InstanceName': 'WhiteLine_Father', 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})

    fork {
        if !Player.EventQueryPlayerCheckRideHorse({'IsRidingAny': True, 'Type': 0, 'ActorFileName': ''}) {
            Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
        }
        Player.EventPlayerWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'InstanceName': 'WhiteLine_Link', 'UseDemoWait': True})
        Player.EventPlayerTurnAndLook({'Target': 3, 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': 'Uotori', 'KeepTalkWait': True, 'ActorName': 'Npc_SouthernVillage009', 'OffsetBase': 0})
        Player.EventTriggerPlayerLookAtObject({'Target': 3, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': 'Uotori', 'ActorName': 'Npc_SouthernVillage006'})
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'Talk', 'ClothWarpMode': 0})
    } {
        Npc_SouthernVillage009[Uotori].EventAIScheduleWarpToAnchor({'AnchorType': 22, 'IsWaitEnd': True, 'ActionType': 0, 'InstanceName': 'WhiteLine_OldBrother', 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
        Npc_SouthernVillage009[Uotori].EventNPCTurnToTarget({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'Target': 3, 'ActorName': 'Npc_SouthernVillage006', 'InstanceName': 'Uotori', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_SouthernVillage009[Uotori].EventTriggerNPCChangePosture({'Posture': 0, 'IsPlayCurrentAS': False})
    } {
        Npc_SouthernVillage008[Uotori].EventAIScheduleWarpToAnchor({'AnchorType': 22, 'IsWaitEnd': True, 'ActionType': 0, 'InstanceName': 'WhiteLine_YoungBrother', 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
        Npc_SouthernVillage008[Uotori].EventNPCTurnToTarget({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'Target': 3, 'ActorName': 'Npc_SouthernVillage006', 'InstanceName': 'Uotori', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_SouthernVillage008[Uotori].EventTriggerNPCChangePosture({'Posture': 0, 'IsPlayCurrentAS': False})
    }

    Npc_SouthernVillage006[Uotori].EventNPCTurnToTarget({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'Target': 3, 'ActorName': 'Npc_SouthernVillage008', 'InstanceName': 'Uotori', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_SouthernVillage006[Uotori].EventTriggerNPCChangePosture({'Posture': 0, 'IsPlayCurrentAS': False})
    Npc_SouthernVillage006[Uotori].EventTriggerChangeAIScheduleEquipState({'EquipState': 2})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 3})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'Actor1InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVector': [2885.27001953125, 114.01000213623047, 3418.89990234375], 'AtVector': [2886.929931640625, 113.80000305175781, 3417.530029296875], 'TargetFovy': 40.0, 'Actor1ActorName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Player.EventTriggerPlayerLookAtObject({'Target': 3, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': 'Uotori', 'ActorName': 'Npc_SouthernVillage009'})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Npc_SouthernVillage009[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_WhiteLineGame:Talk_10', 'NotPlayLipSyncAnim': False, 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_SouthernVillage008[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_WhiteLineGame:Talk_11', 'NotPlayLipSyncAnim': False, 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_SouthernVillage006[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_WhiteLineGame:Talk_09', 'NotPlayLipSyncAnim': False, 'ASName': 'Wait', 'IsNotOpenIfSkipedMostRecent': False})

    fork {
        Npc_SouthernVillage006[Uotori].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': True})
        Npc_SouthernVillage006[Uotori].EventNPCTurnToTarget({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Npc_SouthernVillage008[Uotori].EventWait({'IsWaitEnd': True, 'Frames': 10})
        Npc_SouthernVillage008[Uotori].EventNPCTurnToTarget({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Npc_SouthernVillage009[Uotori].EventWait({'IsWaitEnd': True, 'Frames': 3})
        Npc_SouthernVillage009[Uotori].EventNPCTurnToTarget({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Player.EventWait({'IsWaitEnd': True, 'Frames': 15})
        Player.EventTriggerPlayerLookAtObject({'Target': 3, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Npc_SouthernVillage006', 'InstanceName': 'Uotori'})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Uotori_RevivePlan_IsCompleted_Exp'}) {
        Npc_SouthernVillage006[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_WhiteLineGame:Talk_29', 'NotPlayLipSyncAnim': False, 'ASName': 'Wait', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_SouthernVillage006[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_WhiteLineGame:Talk_28', 'NotPlayLipSyncAnim': False, 'ASName': 'Wait', 'IsNotOpenIfSkipedMostRecent': False})
    }
    Npc_SouthernVillage006[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_WhiteLineGame:Talk_30', 'NotPlayLipSyncAnim': False, 'ASName': 'Wait', 'IsNotOpenIfSkipedMostRecent': False})

    call GetPouchContent.DisplayGetWindowByActorName({'ActorName': 'Armor_175_Upper', 'IsSuccess': True})

    Npc_SouthernVillage009[Uotori].EventTriggerLookAtObject({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'InstanceName': 'Uotori', 'ActorName': 'Npc_SouthernVillage006', 'ResetArriveTransformFixed': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 3})
    Npc_SouthernVillage008[Uotori].EventTriggerLookAtObject({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'InstanceName': 'Uotori', 'ActorName': 'Npc_SouthernVillage006', 'ResetArriveTransformFixed': False})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'Actor1InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'PosVector': [2886.27001953125, 114.18000030517578, 3417.7099609375], 'AtVector': [2887.860107421875, 113.81999969482422, 3416.1298828125], 'TargetFovy': 40.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})

    fork {
        Npc_SouthernVillage009[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_WhiteLineGame:Talk_13', 'NotPlayLipSyncAnim': False, 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
    } {
        Npc_SouthernVillage006[Uotori].EventWait({'IsWaitEnd': True, 'Frames': 5})
        Npc_SouthernVillage006[Uotori].EventTriggerLookAtObject({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'InstanceName': 'Uotori', 'ActorName': 'Npc_SouthernVillage009', 'ResetArriveTransformFixed': False})
    } {
        Player.EventTriggerPlayerLookAtObject({'Target': 3, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': 'Uotori', 'ActorName': 'Npc_SouthernVillage009'})
    }

    Npc_SouthernVillage006[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_WhiteLineGame:Talk_31', 'NotPlayLipSyncAnim': False, 'ASName': 'Wait', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_SouthernVillage009[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_WhiteLineGame:Talk_39', 'NotPlayLipSyncAnim': False, 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_SouthernVillage008[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_WhiteLineGame:Talk_32', 'NotPlayLipSyncAnim': False, 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'Actor1InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'PosVector': [2894.722900390625, 113.27799987792969, 3422.507080078125], 'AtVector': [2893.44189453125, 113.38999938964844, 3421.093017578125], 'TargetFovy': 10.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Npc_SouthernVillage008[Uotori].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
    Npc_SouthernVillage008[Uotori].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    Npc_SouthernVillage006[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_WhiteLineGame:Talk_33', 'NotPlayLipSyncAnim': False, 'ASName': 'Wait', 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventEventFadeOut({'Length': 1, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0})
    Npc_SouthernVillage006[Uotori].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'ActionType': 0, 'AnchorType': 4, 'InstanceName': '', 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    Npc_SouthernVillage009[Uotori].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'ActionType': 0, 'InstanceName': '', 'AnchorType': 4, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    Npc_SouthernVillage008[Uotori].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'ActionType': 0, 'InstanceName': '', 'AnchorType': 4, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    Npc_SouthernVillage006[Uotori].EventTriggerNPCChangePosture({'Posture': 2, 'IsPlayCurrentAS': False})
    Npc_SouthernVillage006[Uotori].EventTriggerChangeAIScheduleEquipState({'EquipState': 0})
    Npc_SouthernVillage006[Uotori].EventTriggerAIScheduleSelectSchedule()
    Npc_SouthernVillage008[Uotori].EventTriggerAIScheduleSelectSchedule()
    Npc_SouthernVillage009[Uotori].EventTriggerAIScheduleSelectSchedule()
    Npc_SouthernVillage008[Uotori].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    Npc_SouthernVillage009[Uotori].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Uotori_WhiteLineGame_SakuradaHide', 'Value': False, 'Index': -1})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Revive_Restaurant_Move'}) {
        Npc_HatenoVillage032[Uotori].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'ActionType': 0, 'InstanceName': '', 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'AnchorType': 2, 'EnableArrivalState': False})
        GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'Revive_Restaurant_Move'})
        Event105:
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Uotori_WhiteLineGame_Talk02', 'Value': True})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'Actor1InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'PosVector': [2885.4599609375, 115.11000061035156, 3423.199951171875], 'AtVector': [2887.97998046875, 114.27999877929688, 3417.929931640625], 'TargetFovy': 50.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'Uotori_WhiteLineGame', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Complete', 'IsWaitEnd': True})
    } else {
        goto Event105
    }
}

void Thank_01() {
    if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Uotori_ReviveRestaurant_Thank_04', 'Index': -1}) {
        Npc_SouthernVillage009[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_WhiteLineGame:Talk_21', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_SouthernVillage009_Talk01'}) {
            Npc_SouthernVillage009[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_WhiteLineGame:Talk_07', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_SouthernVillage009[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_WhiteLineGame:Talk_34', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Uotori_RevivePlan_IsCompleted_Exp'}) {
            Npc_SouthernVillage009[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_WhiteLineGame:Talk_16', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Uotori_ReviveRestaurant_Thank_04', 'Index': -1, 'Value': True})
    }
}

void Weather() {
    if Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
        switch EventWorldManagerController.EventQueryTimeDivision() {
          case [0, 1]:
            Npc_SouthernVillage009[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_WhiteLineGame:Talk_45', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
          case 2:
            Event54:
            Npc_SouthernVillage009[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_WhiteLineGame:Talk_46', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
          case 3:
            switch Npc_EventStarter.EventQueryAIScheduleCheckActorAction14() {
              case [0, 1, 2, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
                goto Event54
              case 3:
                Event62:
                Npc_SouthernVillage009[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_WhiteLineGame:Talk_47', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
          case 4:
            goto Event62
        }
    }
}
