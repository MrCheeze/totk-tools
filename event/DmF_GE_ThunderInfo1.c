-------- EventFlow: DmF_GE_ThunderInfo1 --------

Actor: Npc_Gerudo_Queen_Young[Training]
entrypoint: None()
actions: ['EventTalk', 'EventPlayAS', 'EventTriggerChangeEmotion', 'EventWarpToTargetPosAndRot', 'EventTriggerRequestLookAtTheFront', 'EventTriggerChangeAIScheduleEquipState']
queries: []
params: {'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/DmF_GE_ThunderInfo1/DmF_GE_ThunderInfo1_Npc_Gerudo_Queen_Young/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/DmF_GE_ThunderInfo1_Npc_Gerudo_Queen_Young.root.as', 'IsGrounding': True, 'EventMemberCreateMethod': 0, 'EquipmentUser_Weapon': '', 'EquipmentUser_SubWeapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon_EquipmentState': 0, 'Rotation': [0.0, -90.0, 0.0], 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventMoveCameraAnimationInstructionsForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventPlayerWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': True, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/DmF_GE_ThunderInfo1/DmF_GE_ThunderInfo1_Link/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/DmF_GE_ThunderInfo1_Link.root.as', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'Rotation': [0.0, 90.0, 0.0], 'Position': [2.0, 0.0, 0.0], 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeIn', 'EventEventFadeOut']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventEffectAddELinkHiddenSetting']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundRequestDucking', 'EventSoundReleaseDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void EntryPoint0() {

    call pre()


    call C01()


    call C02()


    call C03()


    call C04()


    call C05()


    call C06()


    call C07()


    call C08()


    call C09()

}

void pre() {
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:WorldSEミュート(フェード普通)', 'CommandLife': 2, 'DuckingName2': '', 'DuckingName3': ''})
    GameSystemActor.EventEventFadeOut({'Length': 1, 'IsWaitEnd': False, 'Color': 0, 'IsNoPlayAnime': True})
    EventCamera.EventTriggerParticipateEvent()
    Npc_Gerudo_Queen_Young[Training].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [-3782.489990234375, 137.97999572753906, 2639.969970703125], 'YAngle': -90.0})
    Player.EventPlayerWarpToTargetPosAndRot({'Position': [-3784.360107421875, 137.97999572753906, 2639.969970703125], 'IsWaitEnd': True, 'YAngle': 90.0, 'UseDemoWait': True})
    EventEffectEmitter.EventEffectAddELinkHiddenSetting({'KeyName': 'Breath', 'ActorName': 'Player'})
    EventEffectEmitter.EventEffectAddELinkHiddenSetting({'KeyName': 'Breath', 'ActorName': 'Npc_Gerudo_Queen_Young'})

    fork {
        Player.EventPlayerPlayASForFlowchart({'IsAllSlot': False, 'IsWaitEnd': False, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'C01-Link-A-0', 'ClothWarpMode': 0})
    } {
        Npc_Gerudo_Queen_Young[Training].EventPlayAS({'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'C01-Npc_Gerudo_Queen_Young-A-0', 'IsWaitEnd': False, 'Partial': '', 'ForceFadeInFrame': -1.0})
        Npc_Gerudo_Queen_Young[Training].EventTriggerChangeAIScheduleEquipState({'EquipState': 1})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C01-0', 'CameraName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsIgnoreRootRot': True, 'IsReferenceRootOnce': False, 'TargetActorName': 'Player', 'RootType': 1, 'IsWaitEnd': False, 'InterpolateFrame': 0.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'DmF:WorldSEミュート(フェード普通)', 'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False})
    GameSystemActor.EventEventFadeIn({'IsNoPlayAnime': False, 'Length': 1, 'IsWaitEnd': False, 'Color': 0})
    Npc_Gerudo_Queen_Young[Training].EventTriggerRequestLookAtTheFront()
}

void C01() {

    fork {
        Player.EventPlayerPlayASForFlowchart({'IsAllSlot': False, 'IsWaitEnd': True, 'ASCommand': 'C01-Link-A-0', 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {
        Npc_Gerudo_Queen_Young[Training].EventTriggerChangeEmotion({'EmotionType': 5, 'IsActFaceOnly': True})
        Npc_Gerudo_Queen_Young[Training].EventPlayAS({'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'C01-Npc_Gerudo_Queen_Young-A-0', 'IsWaitEnd': False, 'Partial': '', 'ForceFadeInFrame': -1.0})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C01-0', 'IsWaitEnd': True, 'CameraName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsIgnoreRootRot': True, 'IsReferenceRootOnce': False, 'TargetActorName': 'Player', 'RootType': 1, 'InterpolateFrame': 0.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
    }

}

void C02() {

    fork {
        Player.EventPlayerPlayASForFlowchart({'IsAllSlot': False, 'IsWaitEnd': False, 'UseAnmDriven': False, 'ASCommand': 'Talk', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {
        Npc_Gerudo_Queen_Young[Training].EventTriggerChangeEmotion({'EmotionType': 5, 'IsActFaceOnly': True})
        Npc_Gerudo_Queen_Young[Training].EventTalk({'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'EndDialogOption': 0, 'MessageId': 'EventFlowMsg/DmF_GE_ThunderInfo1:Talk_00', 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'C02-Npc_Gerudo_Queen_Young-A-0', 'IsNotOpenIfSkipedMostRecent': False})

        fork {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 8})
            Npc_Gerudo_Queen_Young[Training].EventTriggerChangeEmotion({'IsActFaceOnly': True, 'EmotionType': 0})
        } {
            Npc_Gerudo_Queen_Young[Training].EventPlayAS({'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': True, 'ASName': 'C02-Npc_Gerudo_Queen_Young-A-2', 'Partial': '', 'ForceFadeInFrame': -1.0})
        }

        Npc_Gerudo_Queen_Young[Training].EventTalk({'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'EndDialogOption': 0, 'ASName': 'C02-Npc_Gerudo_Queen_Young-A-3_Loop', 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/DmF_GE_ThunderInfo1:Talk_11', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Gerudo_Queen_Young[Training].EventTalk({'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'EndDialogOption': 0, 'ASName': 'C02-Npc_Gerudo_Queen_Young-A-3_Loop', 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/DmF_GE_ThunderInfo1:Talk_01', 'IsNotBecomeSpeaker': False, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsIgnoreRootRot': True, 'IsReferenceRootOnce': False, 'TargetActorName': 'Player', 'RootType': 1, 'SceneName': 'C02-0', 'IsWaitEnd': False, 'InterpolateFrame': 0.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
    }

}

void C03() {

    fork {
        Npc_Gerudo_Queen_Young[Training].EventTalk({'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'EndDialogOption': 0, 'ASName': 'C02-Npc_Gerudo_Queen_Young-A-3_Loop', 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/DmF_GE_ThunderInfo1:Talk_02', 'IsNotBecomeSpeaker': False, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsIgnoreRootRot': True, 'IsReferenceRootOnce': False, 'TargetActorName': 'Player', 'RootType': 1, 'SceneName': 'C03-0', 'IsWaitEnd': False, 'InterpolateFrame': 0.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
    }


    fork {

        fork {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
            Npc_Gerudo_Queen_Young[Training].EventTriggerChangeEmotion({'IsActFaceOnly': True, 'EmotionType': 0})
        } {
            Npc_Gerudo_Queen_Young[Training].EventPlayAS({'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'C03-Npc_Gerudo_Queen_Young-A-0', 'Partial': '', 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
        }

    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'TargetActorInstanceName': '', 'IsIgnoreRootRot': True, 'IsReferenceRootOnce': False, 'TargetActorName': 'Player', 'RootType': 1, 'SceneName': 'C03-1', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsWaitEnd': False, 'InterpolateFrame': 0.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 35})
}

void C04() {

    fork {
        Npc_Gerudo_Queen_Young[Training].EventTalk({'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'EndDialogOption': 0, 'ASName': 'C03-Npc_Gerudo_Queen_Young-A-1_Loop', 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/DmF_GE_ThunderInfo1:Talk_03', 'IsNotBecomeSpeaker': False, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsIgnoreRootRot': True, 'IsReferenceRootOnce': False, 'TargetActorName': 'Player', 'RootType': 1, 'SceneName': 'C04-0', 'IsWaitEnd': False, 'InterpolateFrame': 0.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
    }

}

void C05() {

    fork {
        Npc_Gerudo_Queen_Young[Training].EventPlayAS({'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': True, 'ASName': 'C05-Npc_Gerudo_Queen_Young-A-0', 'Partial': '', 'ForceFadeInFrame': -1.0})
        Npc_Gerudo_Queen_Young[Training].EventTalk({'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'EndDialogOption': 0, 'ASName': 'C05-Npc_Gerudo_Queen_Young-A-1_Loop', 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/DmF_GE_ThunderInfo1:Talk_04', 'IsNotBecomeSpeaker': False, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Gerudo_Queen_Young[Training].EventTriggerChangeEmotion({'IsActFaceOnly': True, 'EmotionType': 5})
        Npc_Gerudo_Queen_Young[Training].EventTalk({'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'EndDialogOption': 0, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/DmF_GE_ThunderInfo1:Talk_05', 'IsNotBecomeSpeaker': False, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'C05-Npc_Gerudo_Queen_Young-A-2', 'IsNotOpenIfSkipedMostRecent': False})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'TargetActorInstanceName': '', 'IsIgnoreRootRot': True, 'IsReferenceRootOnce': False, 'TargetActorName': 'Player', 'RootType': 1, 'IsWaitEnd': False, 'SceneName': 'C05-0', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
    }

}

void C07() {

    fork {
        Npc_Gerudo_Queen_Young[Training].EventPlayAS({'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': True, 'ASName': 'C07-Npc_Gerudo_Queen_Young-A-0', 'Partial': '', 'ForceFadeInFrame': -1.0})
        Npc_Gerudo_Queen_Young[Training].EventTalk({'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'EndDialogOption': 0, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/DmF_GE_ThunderInfo1:Talk_07', 'ASName': 'C07-Npc_Gerudo_Queen_Young-A-1_Loop', 'IsNotBecomeSpeaker': False, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsIgnoreRootRot': True, 'IsReferenceRootOnce': False, 'TargetActorName': 'Player', 'RootType': 1, 'IsWaitEnd': False, 'SceneName': 'C07-0', 'InterpolateFrame': 0.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
    }


    fork {

        fork {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
            Npc_Gerudo_Queen_Young[Training].EventTriggerChangeEmotion({'IsActFaceOnly': True, 'EmotionType': 5})
        } {
            Npc_Gerudo_Queen_Young[Training].EventPlayAS({'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': True, 'ASName': 'C07-Npc_Gerudo_Queen_Young-A-2', 'Partial': '', 'ForceFadeInFrame': -1.0})
        }

        Npc_Gerudo_Queen_Young[Training].EventTalk({'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'EndDialogOption': 0, 'ASName': 'C07-Npc_Gerudo_Queen_Young-A-3_Loop', 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/DmF_GE_ThunderInfo1:Talk_08', 'IsNotBecomeSpeaker': False, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Gerudo_Queen_Young[Training].EventTriggerChangeEmotion({'IsActFaceOnly': True, 'EmotionType': 6})
        Npc_Gerudo_Queen_Young[Training].EventPlayAS({'IsAnimeDriven': False, 'IsWaitEnd': True, 'ASName': 'C07-Npc_Gerudo_Queen_Young-A-4', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsIgnoreRootRot': True, 'IsReferenceRootOnce': False, 'TargetActorName': 'Player', 'RootType': 1, 'IsWaitEnd': False, 'SceneName': 'C07-1', 'InterpolateFrame': 0.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
    }

}

void C06() {

    fork {

        fork {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 55})
            Npc_Gerudo_Queen_Young[Training].EventTriggerChangeEmotion({'IsActFaceOnly': True, 'EmotionType': 0})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 25})
        } {
            Npc_Gerudo_Queen_Young[Training].EventPlayAS({'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'C06-Npc_Gerudo_Queen_Young-A-0', 'Partial': '', 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
        }

        Npc_Gerudo_Queen_Young[Training].EventTalk({'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': 'C02-Npc_Gerudo_Queen_Young-A-3_Loop', 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/DmF_GE_ThunderInfo1:Talk_06', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Gerudo_Queen_Young[Training].EventPlayAS({'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': True, 'ASName': 'C06-Npc_Gerudo_Queen_Young-A-1', 'Partial': '', 'ForceFadeInFrame': -1.0})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsIgnoreRootRot': True, 'IsReferenceRootOnce': False, 'TargetActorName': 'Player', 'RootType': 1, 'IsWaitEnd': False, 'SceneName': 'C06-0', 'InterpolateFrame': 0.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
    }

}

void C08() {

    fork {
        Npc_Gerudo_Queen_Young[Training].EventPlayAS({'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': True, 'ASName': 'C08-Npc_Gerudo_Queen_Young-A-0', 'Partial': '', 'ForceFadeInFrame': -1.0})
        Npc_Gerudo_Queen_Young[Training].EventTalk({'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'EndDialogOption': 0, 'ASName': 'C08-Npc_Gerudo_Queen_Young-A-1_Loop', 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/DmF_GE_ThunderInfo1:Talk_09', 'IsNotBecomeSpeaker': False, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Gerudo_Queen_Young[Training].EventTriggerChangeEmotion({'IsActFaceOnly': True, 'EmotionType': 0})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsIgnoreRootRot': True, 'IsReferenceRootOnce': False, 'TargetActorName': 'Player', 'RootType': 1, 'IsWaitEnd': False, 'SceneName': 'C08-0', 'InterpolateFrame': 0.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
    }

}

void C09() {

    fork {
        Player.EventPlayerPlayASForFlowchart({'IsAllSlot': False, 'UseAnmDriven': False, 'ASCommand': 'Wait', 'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        Player.EventPlayerWarpToTargetPosAndRot({'Position': [-3784.360107421875, 137.97999572753906, 2639.969970703125], 'IsWaitEnd': True, 'YAngle': 90.0, 'UseDemoWait': True})
        Npc_Gerudo_Queen_Young[Training].EventTalk({'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'EndDialogOption': 0, 'ASName': 'C08-Npc_Gerudo_Queen_Young-A-1_Loop', 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/DmF_GE_ThunderInfo1:Talk_10', 'IsNotBecomeSpeaker': False, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsIgnoreRootRot': True, 'IsReferenceRootOnce': False, 'TargetActorName': 'Player', 'RootType': 1, 'IsWaitEnd': False, 'SceneName': 'C09-0', 'InterpolateFrame': 0.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
    }

}
