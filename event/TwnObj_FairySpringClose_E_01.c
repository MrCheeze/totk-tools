-------- EventFlow: TwnObj_FairySpringClose_E_01 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: TwnObj_FairySpringClose_E_01
entrypoint: None()
actions: ['EventTalk', 'EventTriggerEmitXLink', 'EventPlayAS', 'EventTriggerBecomeSpeaker']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTriggerControllerRumble']
queries: ['EventQueryTalkChoice2']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: ['EventTriggerAddOrRemovePouchContent']
queries: ['EventQueryIsExistInPouch']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: HorseGod001
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventTriggerEmitXLink', 'EventPlayerWarpToNearAnchor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Talk() {
    TwnObj_FairySpringClose_E_01.EventTriggerBecomeSpeaker()

    fork {
        Player.EventPlayerWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'InstanceName': 'HorseGod_Link', 'UseDemoWait': True})

        call InitTalk.InitTalkExceptCamera({'Arg_Turn': 4, 'Arg_Greeting': 4})

    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': 'TwnObj_FairySpringClose_E_01', 'PosVector': [7.440000057220459, 5.130000114440918, 12.970000267028809], 'AtVector': [2.380000114440918, 4.460000038146973, 8.1899995803833], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    }

    TwnObj_FairySpringClose_E_01.EventTalk({'MessageId': 'EventFlowMsg/TwnObj_FairySpringClose_E_01:Talk_0001', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': False, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': True, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
    if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Item_PlantGet_Q', 'Num': 1, 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {

        call Fairy_HandOver()

        TwnObj_FairySpringClose_E_01.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'IsNotBecomeSpeaker': False, 'MessageId': 'EventFlowMsg/TwnObj_FairySpringClose_E_01:Talk_0007', 'ASName': 'Act_Hand', 'IsAnonymous': True, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {
            PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Actor': 'Item_PlantGet_Q', 'Num': -1, 'AttachmentActor': '', 'IsEquipDIrect': False, 'EffectType': 0, 'EffectValue': -1, 'IsSetOnlyEquipIndex': False})
            TwnObj_FairySpringClose_E_01.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TwnObj_FairySpringClose_E_01:Talk_0002', 'ASName': 'Act_Hand', 'IsAnimeDriven': True, 'IsAnonymous': True, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked.HorseGod001', 'Value': True, 'Index': -1})

            call Fairy_HandGet()

            EventSystemActor.EventTransition({'EventName': 'Dm_SY_0005', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})

            call HorseGod001.Talk()

        } else {

            call Fairy_HandOff()

            TwnObj_FairySpringClose_E_01.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TwnObj_FairySpringClose_E_01:Talk_0003', 'IsAnonymous': True, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Event50:
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked.HorseGod001', 'Value': True, 'Index': -1})
        }
    } else {
        TwnObj_FairySpringClose_E_01.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 2, 'IsNotBecomeSpeaker': False, 'MessageId': 'EventFlowMsg/TwnObj_FairySpringClose_E_01:Talk_0007', 'IsAnonymous': True, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'IsCloseDialog': True, 'ChoiceDefaultNo': 0, 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {
            TwnObj_FairySpringClose_E_01.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'IsNotBecomeSpeaker': False, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsAnonymous': True, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/TwnObj_FairySpringClose_E_01:Talk_0010', 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            TwnObj_FairySpringClose_E_01.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TwnObj_FairySpringClose_E_01:Talk_0003', 'IsAnonymous': True, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
        goto Event50
    }
}

void Fairy_HandOver() {

    fork {
        HorseGod001.EventPlayAS({'ASName': 'Act_Please_Hand', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
    } {
        EventSystemActor.EventWait({'Frames': 10, 'IsWaitEnd': True})
        TwnObj_FairySpringClose_E_01.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ASName': 'Act_Hand', 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
        TwnObj_FairySpringClose_E_01.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'TwnObj_FairySpringClose_HandAppear'})
    }

}

void Fairy_HandOff() {

    fork {
        HorseGod001.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Act_Please_Hand_Back', 'ForceFadeInFrame': -1.0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 16})
        TwnObj_FairySpringClose_E_01.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Act_Hand_Ed', 'ForceFadeInFrame': -1.0})
        TwnObj_FairySpringClose_E_01.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'TwnObj_FairySpringClose_HandAppear'})
    }

}

void Fairy_HandGet() {
    Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': True, 'ASCommand': 'TalkHandOver', 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ClothWarpMode': 0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 32})

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 12})

        fork {
            Player.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'TwnObj_FairySpringClose_PayMoney'})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
            GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Small', 'Length': 0.20000000298023224})
            Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': True, 'IsWaitEnd': True, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'DemoSurprise', 'ClothWarpMode': 0})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 12})
            TwnObj_FairySpringClose_E_01.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Act_Hand_Ed', 'ForceFadeInFrame': -1.0})
            TwnObj_FairySpringClose_E_01.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'TwnObj_FairySpringClose_HandAppear'})
        }

    } {
        HorseGod001.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'Act_Please_Hand_Ed', 'IsWaitEnd': True, 'ForceFadeInFrame': -1.0})
        HorseGod001.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'Act_Wait', 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
    }

}
