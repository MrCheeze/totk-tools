-------- EventFlow: Dm_GO_0010 --------

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventEventFadeIn', 'EventEventFadeOut', 'EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Zelda_Black_Event[NorthMine_Zelda]
entrypoint: None()
actions: ['EventPlayAS', 'EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_GO_0010/Dm_GO_0010_Npc_Zelda_AncientHyrule/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_GO_0010_Npc_Zelda_AncientHyrule.root.as', 'IsGrounding': False, 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Npc_Goron011[NorthMine_Tokachin]
entrypoint: None()
actions: ['EventPlayAS', 'EventWarpToTargetPosAndRot', 'EventTriggerParticipateEvent', 'EventTriggerLookAtObject']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_GO_0010/Dm_GO_0010_UMii_Goron_BodyC_B_000/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_GO_0010_UMii_Goron_BodyC_M.root.as', 'IsBindNearestActor': False}

Actor: Npc_Goron033[NorthMine_Iffuru]
entrypoint: None()
actions: ['EventPlayAS', 'EventWarpToTargetPosAndRot', 'EventTriggerParticipateEvent', 'EventTriggerChangeEmotion', 'EventTriggerLookAtObject']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_GO_0010/Dm_GO_0010_UMii_Goron_BodyC_B_000/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_GO_0010_UMii_Goron_BodyC_M.root.as', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraAnimationInstructionsForFlowchart', 'EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 3, 'UseEventAS': '', 'UseEventModelAnime': '', 'IsBindNearestActor': False}

Actor: Npc_Goron_Yunbo_Sage[DynamicGenerateSage]
entrypoint: None()
actions: ['EventTalk', 'EventPlayAS', 'EventWarpToTargetPosAndRot', 'EventTriggerChangeEmotion', 'EventTriggerParticipateEvent', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'UseEventModelAnime': 'Work/Model/Event/Dm_GO_0010/Dm_GO_0010_Npc_Goron_HeroDescendants_Sage/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_GO_0010_Npc_Goron_HeroDescendants_Sage.root.as', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventPlayerWarpToTargetPosAndRot', 'EventGoOffstageForUser']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'UseEventModelAnime': 'Work/Model/Event/Dm_GO_0010/Dm_GO_0010_Link/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_GO_0010_Link.root.as', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStartBgmSimple', 'EventTriggerSoundControlBGM', 'EventTriggerForbidEmitIfOutsideView', 'EventTriggerCancelForbidEmitIfOutsideView', 'EventTriggerSoundBeginForbidDialogDucking', 'EventSoundStartSound', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Obj_RockBroken_Miasma_A_06
entrypoint: None()
actions: ['EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Sage_Soul_Zonau
entrypoint: None()
actions: ['EventGoOffstageForUser', 'EventWarpToTargetPosAndRot']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'TextureReplaceType': 0, 'EventMemberCreateMethod': 3, 'IsBindNearestActor': False}

void Start() {
    GameSystemActor.EventEventFadeOut({'Length': 1, 'Color': 0, 'IsNoPlayAnime': True, 'IsWaitEnd': True})

    call ride()

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'SageOfFire_Dream_IsFighting_Yunbo', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'SageOfFire_Dream_Defeat_Yunbo', 'Value': True})

    fork {
        EventCamera.EventTriggerParticipateEvent()
    } {
        Npc_Goron011[NorthMine_Tokachin].EventTriggerParticipateEvent()
    } {
        Npc_Goron033[NorthMine_Iffuru].EventTriggerParticipateEvent()
    } {
        Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventTriggerParticipateEvent()
    }


    fork {
        Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [1631.4200439453125, 510.5299987792969, -2896.699951171875]})
        Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventPlayAS({'Partial': '', 'IsWaitEnd': True, 'ASName': 'C00', 'IsAnimeDriven': False, 'ForceFadeInFrame': 1.0, 'IsAllSlot': False})
    } {
        Npc_Goron011[NorthMine_Tokachin].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -136.18299865722656, 'Position': [1633.02001953125, 510.5199890136719, -2893.59912109375]})
    } {
        Npc_Goron033[NorthMine_Iffuru].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -194.08900451660156, 'Position': [1629.6600341796875, 510.5299987792969, -2890.27001953125]})
    } {
        Npc_Zelda_Black_Event[NorthMine_Zelda].EventWarpToTargetPosAndRot({'Position': [1648.719970703125, 521.9000244140625, -2839.06005859375], 'IsWaitEnd': True, 'YAngle': 0.0})
    }

    GameSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})
    GameSystemActor.EventEventFadeIn({'IsNoPlayAnime': False, 'Length': 1, 'Color': 0, 'IsWaitEnd': False})
}

void C01() {
    SoundSystemActor.EventTriggerForbidEmitIfOutsideView({'IsIgnoreLODResult': False})

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'CameraName': '', 'SceneName': 'C01', 'IsReferenceRootOnce': False, 'IsIgnoreRootRot': False, 'RootType': 1, 'TargetActorName': 'Player', 'IsLoop': False, 'IsWaitEnd': False, 'CalcUpInInterpolate': False})
    } {
        Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventTalk({'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Dm_GO_0010:Dm_GO_0010_Text_000_b', 'IsAnonymous': False, 'ASName': 'C01_OneTime_Face', 'IsWaitEnd': True, 'IsCloseDialog': False, 'NotPlayLipSyncAnim': False, 'EndDialogOption': 3, 'IsPlayASAllSlot': True, 'IsAnimeDriven': False, 'IsNotOpenIfSkipedMostRecent': False})
    }

    SoundSystemActor.EventTriggerCancelForbidEmitIfOutsideView()
}

void C02() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'TargetActorName': 'Player', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'CameraName': '', 'SceneName': 'C02', 'RootType': 1, 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventPlayAS({'IsAnimeDriven': False, 'Partial': '', 'IsWaitEnd': True, 'ASName': 'C02', 'ForceFadeInFrame': 0.0, 'IsAllSlot': True})
    } {
        Npc_Goron011[NorthMine_Tokachin].EventPlayAS({'Partial': '', 'ForceFadeInFrame': -1.0, 'ASName': 'C02-A_Face', 'IsAllSlot': True, 'IsAnimeDriven': True, 'IsWaitEnd': False})
    } {
        Npc_Goron033[NorthMine_Iffuru].EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'ForceFadeInFrame': -1.0, 'ASName': 'C02-B_Face', 'IsAllSlot': True, 'IsAnimeDriven': True})
    }

}

void C03() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 1, 'TargetActorName': 'Player', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'CameraName': '', 'SceneName': 'C03', 'IsWaitEnd': False, 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventTalk({'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'EndDialogOption': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Dm_GO_0010:Dm_GO_0010_Text_003_b', 'ASName': 'C03-0', 'IsWaitEnd': True, 'IsCloseDialog': True, 'NotPlayLipSyncAnim': False, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventTalk({'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'EndDialogOption': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Dm_GO_0010:Dm_GO_0010_Text_000_b_00', 'ASName': 'C03-1', 'IsCloseDialog': True, 'IsWaitEnd': True, 'NotPlayLipSyncAnim': False, 'IsPlayASAllSlot': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventTalk({'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'EndDialogOption': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Dm_GO_0010:Dm_GO_0010_Text_001_b', 'ASName': 'C03-2', 'IsWaitEnd': True, 'IsCloseDialog': True, 'NotPlayLipSyncAnim': False, 'IsPlayASAllSlot': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        Npc_Goron011[NorthMine_Tokachin].EventTriggerLookAtObject({'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 0, 'ActorName': '', 'WorldPos': [1631.1700439453125, 520.0, -2897.1201171875], 'ResetArriveTransformFixed': False})
        Npc_Goron011[NorthMine_Tokachin].EventPlayAS({'Partial': '', 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Wait', 'ForceFadeInFrame': 0.0, 'IsAllSlot': True})
    } {
        Npc_Goron033[NorthMine_Iffuru].EventTriggerLookAtObject({'Target': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'WorldPos': [1631.1700439453125, 530.0, -2897.1201171875], 'ResetArriveTransformFixed': False})
        Npc_Goron033[NorthMine_Iffuru].EventPlayAS({'Partial': '', 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Wait', 'IsAllSlot': True, 'ForceFadeInFrame': 0.0})
    }

}

void C04() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'RootType': 1, 'TargetActorName': 'Player', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'CameraName': '', 'SceneName': 'C04', 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        Npc_Zelda_Black_Event[NorthMine_Zelda].EventWarpToTargetPosAndRot({'Position': [1647.198974609375, 521.2882080078125, -2844.18994140625], 'YAngle': 21.854000091552734, 'IsWaitEnd': False})
        Npc_Zelda_Black_Event[NorthMine_Zelda].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'C04'})
    } {
        Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventPlayAS({'IsAnimeDriven': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'ASName': 'C04'})
    } {
        SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_AfterYunboBattle', 'CommandLife': 2, 'IsReleaseDucking': True})
    }

    SoundSystemActor.EventTriggerSoundBeginForbidDialogDucking({'CommandLife': 1})
    Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventTalk({'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': 'C03-2', 'IsWaitEnd': True, 'NotPlayLipSyncAnim': False, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_GO_0010:Dm_GO_0010_Text_001_b_00', 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
}

void C05() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'RootType': 1, 'TargetActorName': 'Player', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'CameraName': '', 'SceneName': 'C05', 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        Npc_Goron011[NorthMine_Tokachin].EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'ASName': 'C05-A', 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0, 'IsAllSlot': True})
    } {
        Npc_Goron033[NorthMine_Iffuru].EventTriggerChangeEmotion({'EmotionType': 3, 'IsActFaceOnly': True})
        Npc_Goron033[NorthMine_Iffuru].EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'ASName': 'C05-B', 'IsAllSlot': True, 'ForceFadeInFrame': 0.0, 'IsAnimeDriven': True})
    } {
        Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventTriggerChangeEmotion({'IsActFaceOnly': False, 'EmotionType': 4})
        Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'C05', 'ForceFadeInFrame': 0.0})
    } {
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ASCommand': 'C05', 'ForceFadeFrame': 0.0, 'ClothWarpMode': 0})
    } {
        GameSystemActor.EventWait({'Frames': 10, 'IsWaitEnd': True})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_GataGata', 'Length': 0.0})
    } {
        Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_GO_0010_Npc_Yunbo_FallStone'})
    } {
        SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 91})
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Dm_GO_0010_C05_Quake', 'IsIgnoreDucking': False})
    }

}

void C06() {
    SoundSystemActor.EventTriggerForbidEmitIfOutsideView({'IsIgnoreLODResult': False})

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'RootType': 1, 'TargetActorName': 'Player', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'CameraName': '', 'SceneName': 'C06', 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        Npc_Zelda_Black_Event[NorthMine_Zelda].EventWarpToTargetPosAndRot({'Position': [1647.198974609375, 521.2882080078125, -2844.18994140625], 'IsWaitEnd': False, 'YAngle': 20.834999084472656})
        Npc_Zelda_Black_Event[NorthMine_Zelda].EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C06'})
    } {
        Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventPlayAS({'Partial': '', 'IsAllSlot': True, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': True, 'ASName': 'C07-00'})
    } {
        Npc_Goron033[NorthMine_Iffuru].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -176.33999633789062, 'Position': [1631.20703125, 510.5212097167969, -2895.553955078125]})
    } {
        Npc_Goron011[NorthMine_Tokachin].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [1631.864013671875, 510.4552917480469, -2895.5439453125], 'YAngle': -126.59300231933594})
    } {
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_Dooon', 'Length': 0.0})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_GoGoGo', 'Length': 2.0})
    }

    Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventTriggerXLinkFadeByKey({'SLinkKey': '', 'ELinkKey': 'Dm_GO_0010_Npc_Yunbo_FallStone', 'IsKill': False})
    SoundSystemActor.EventTriggerCancelForbidEmitIfOutsideView()
}

void C07() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SageOfFire_Drop_Miasma'})

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'RootType': 1, 'TargetActorName': 'Player', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'CameraName': '', 'SceneName': 'C07', 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        Npc_Goron011[NorthMine_Tokachin].EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ASName': 'C07-A', 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0})
    } {
        Npc_Goron033[NorthMine_Iffuru].EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'ASName': 'C07-B', 'ForceFadeInFrame': 0.0, 'IsAllSlot': True, 'IsAnimeDriven': False})
    } {
        Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventPlayAS({'Partial': '', 'ASName': 'C07_Face', 'IsWaitEnd': True, 'IsAllSlot': True, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})
    } {
        Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_GO_0010_Npc_Yunbo_FallStone_Hard'})
    } {
        SoundSystemActor.EventWait({'Frames': 70, 'IsWaitEnd': True})
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Dm_GO_0010_C07_RockFall', 'IsIgnoreDucking': False})
    } {
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Small', 'Length': 2.0})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Zonau_BlockMaster_CoreRegistBreakDown', 'Length': 2.0})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Camera_Converge01'})
    } {
        Player.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }

    Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventTriggerXLinkFadeByKey({'SLinkKey': '', 'ELinkKey': 'Dm_GO_0010_Npc_Yunbo_FallStone_Hard', 'IsKill': False})
}

void C08() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'RootType': 1, 'TargetActorName': 'Player', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'CameraName': '', 'SceneName': 'C08', 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        Obj_RockBroken_Miasma_A_06.EventTriggerEmitXLink({'ELinkKey': 'Dm_GO_0010_Obj_RockBroken_Miasma_Smoke', 'SLinkKey': ''})
    }

    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
}

void EntryPoint0() {

    call Start()


    call C01()


    call C02()


    call C03()


    call C04()


    call C05()


    call C06()


    call C07()


    call C08()

}

void ride() {

    call Common.InitPlayState({'IsRidableGetOff': True, 'IsUnequip': True})

    Sage_Soul_Zonau.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [1640.8599853515625, 520.239990234375, -2825.2080078125]})
    Sage_Soul_Zonau.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [1627.883056640625, 510.96319580078125, -2894.6279296875], 'YAngle': 41.63800048828125, 'UseDemoWait': True})
}
