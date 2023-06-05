-------- EventFlow: Dm_OT_0019 --------

Actor: Dm_Locator[posKoga]
entrypoint: None()
actions: ['EventWarpToTargetActor']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 1, 'UseEventModelAnime': 'Work/Model/Event/Dm_OT_0019/Dm_OT_0019_Dm_Locator/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_OT_0019_Dm_Locator.root.as', 'IsBindNearestActor': False}

Actor: Dm_Locator[posC12Cam]
entrypoint: None()
actions: ['EventWarpToTargetActor']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerWarpToTargetPosAndRot', 'EventTriggerPlayerLookAtObject', 'EventPlayerPlayASForFlowchart', 'EventWait', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventPlayerWarpToTargetActor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeIn', 'EventWait', 'EventCloseMessageDialog', 'EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventMoveCameraAnimationInstructionsForFlowchart', 'EventTriggerRequestCameraShake', 'EventTriggerRequestStopCameraShake']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataInt', 'EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Dm_Obj_Kohga_Rocket
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerParticipateEvent', 'EventWarpToTargetActor', 'EventGoOffstageForUser', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_OT_0019/Dm_OT_0019_SpObj_Rocket_A/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_OT_0019_SpObj_Rocket_A.root.as', 'IsBindNearestActor': False}

Actor: Npc_Zonau_Golem_Servant_Minus0005
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventDoNothing']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: TBox_Field_Enemy_Assassin[Reward_KohgaFinal]
entrypoint: None()
actions: ['EventTriggerEmitXLink', 'EventGoOffstageForUser', 'EventDoNothing']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: DgnObj_RaumiLabo_A_06[Dm_Rope]
entrypoint: None()
actions: ['EventTriggerModelBind', 'EventGoOffstageForUser', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsGrounding': False, 'IsWorld': True, 'Position': [-3508.679931640625, -311.1600036621094, -1847.219970703125], 'Rotation': [0.0, 14.352890014648438, 0.0], 'IsBindNearestActor': False}

Actor: Dm_Locator[Rope_Loc]
entrypoint: None()
actions: ['EventDoNothing', 'EventPlayAS']
queries: []
params: {'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsGrounding': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_OT_0019/Dm_OT_0019_Dm_Locator/workspace.pp__ModelProject.gyml', 'IsWorld': True, 'Position': [-3508.679931640625, -311.1600036621094, -1847.219970703125], 'Rotation': [0.0, 14.352890014648438, 0.0], 'IsBindNearestActor': False}

Actor: Dm_Locator[posEnargyMat]
entrypoint: None()
actions: ['EventWarpToTargetActor']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsBindNearestActor': False}

Actor: TBox_Field_Enemy_Assassin[Reward_KohgaFinal2]
entrypoint: None()
actions: ['EventGoOffstageForUser', 'EventTriggerEmitXLink', 'EventDoNothing']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor[FxWait]
entrypoint: None()
actions: ['EventTriggerControllerRumble', 'EventWait']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm', 'EventTriggerStartBgmSimple', 'EventTriggerSoundStopBGM', 'EventWait', 'EventTriggerCancelForbidEmitIfOutsideView', 'EventTriggerForbidEmitIfOutsideView', 'EventSoundChangeListenerPreset']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor[forSound]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Enemy_Kohga_GolemRider[KohgaFinal]
entrypoint: None()
actions: ['EventWait', 'EventTriggerEmitXLink', 'EventTriggerParticipateEvent', 'EventWarpToTargetActor', 'EventPlayAS', 'EventTalk', 'EventTriggerXLinkFadeByKey', 'EventTriggerModelBind']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'UseEventModelAnime': 'Work/Model/Event/Dm_OT_0022/Dm_OT_0022_Enemy_Assassin_Boss/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_OT_0010.root.as', 'EventMemberCreateMethod': 0, 'IsBindNearestActor': False}

Actor: DgnObj_RaumiLabo_A_03
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void c03() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-1.1200000047683716, 0.6499999761581421, 4.170000076293945], 'AtVector': [0.07999999821186066, 2.109999895095825, -0.1899999976158142], 'TargetFovy': 36.099998474121094, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionMode': 0, 'Actor1ActorName': 'Enemy_Kohga_GolemRider', 'Actor1InstanceName': 'KohgaFinal', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Enemy_Kohga_GolemRider[KohgaFinal].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0, 'ASName': 'kataosaeWara'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 39})
    SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_AssassinBossTalk_00', 'CommandLife': 2, 'IsReleaseDucking': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 21})
    EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-1.1200000047683716, 0.6499999761581421, 4.170000076293945], 'TargetFovy': 36.099998474121094, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionMode': 0, 'MoveTime': 90, 'IsWaitEnd': False, 'AtVector': [0.07999999821186066, 1.7000000476837158, -0.1899999976158142], 'Actor1ActorName': 'Enemy_Kohga_GolemRider', 'Actor1InstanceName': 'KohgaFinal', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Enemy_Kohga_GolemRider[KohgaFinal].EventTalk({'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': 'Wait', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_OT_0019:Talk_0020', 'NotPlayLipSyncAnim': False, 'IsWaitEnd': True, 'EndDialogOption': 4, 'IsCloseDialog': True, 'IsNotOpenIfSkipedMostRecent': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
    Enemy_Kohga_GolemRider[KohgaFinal].EventTalk({'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': 'Wait', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_OT_0019:Talk_0021', 'NotPlayLipSyncAnim': False, 'IsWaitEnd': True, 'EndDialogOption': 4, 'IsCloseDialog': True, 'IsNotOpenIfSkipedMostRecent': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    Enemy_Kohga_GolemRider[KohgaFinal].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0, 'ASName': 'kataosaeWara3'})
    Enemy_Kohga_GolemRider[KohgaFinal].EventTalk({'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': 'Wait', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_OT_0019:Talk_0032', 'NotPlayLipSyncAnim': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 2, 'IsNotOpenIfSkipedMostRecent': False})
    Enemy_Kohga_GolemRider[KohgaFinal].EventTalk({'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': 'Wait', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_OT_0019:Talk_0033', 'NotPlayLipSyncAnim': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 2, 'IsNotOpenIfSkipedMostRecent': False})
    Enemy_Kohga_GolemRider[KohgaFinal].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0, 'ASName': 'jyutsu'})
    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
}

void c04() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'TargetFovy': 50.0, 'MoveTime': 0, 'AtVector': [0.0, 1.100000023841858, 0.8199999928474426], 'PosVector': [0.0, 0.05000000074505806, 2.930000066757202], 'CameraCollisionMode': 1, 'Actor1ActorName': 'Enemy_Kohga_GolemRider', 'Actor1InstanceName': 'KohgaFinal', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': False, 'TargetFovy': 70.0, 'AtVector': [0.0, 2.0999999046325684, 0.8199999928474426], 'StartAccelerateRate': 0.30000001192092896, 'MoveTime': 30, 'PosVector': [0.0, 0.05000000074505806, 2.930000066757202], 'CameraCollisionMode': 1, 'Actor1ActorName': 'Enemy_Kohga_GolemRider', 'Actor1InstanceName': 'KohgaFinal', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Enemy_Kohga_GolemRider[KohgaFinal].EventWait({'IsWaitEnd': True, 'Frames': 25})
        Enemy_Kohga_GolemRider[KohgaFinal].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_OT_0019_Enm_Assassin_Senior_Magic'})
        Enemy_Kohga_GolemRider[KohgaFinal].EventWait({'IsWaitEnd': True, 'Frames': 70})

        fork {
            Dm_Obj_Kohga_Rocket.EventTriggerEmitXLink({'ELinkKey': 'Dm_OT_0019_Kohga_Rocket_Appear', 'SLinkKey': 'Dm_OT_0019_Kohga_Rocket_Appear'})
        } {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 3})
            GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_Bofuhn', 'Length': 0.0})
        }

        Enemy_Kohga_GolemRider[KohgaFinal].EventWait({'IsWaitEnd': True, 'Frames': 10})
        Dm_Obj_Kohga_Rocket.EventPlayAS({'ASName': 'appear', 'IsAnimeDriven': True, 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    }

}

void c06() {
    EventCamera.EventMoveToTargetPosCamera({'PosVector': [-1.600000023841858, 0.019999999552965164, 2.0299999713897705], 'AtVector': [-1.2799999713897705, 0.7400000095367432, 1.409999966621399], 'TargetFovy': 50.529998779296875, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'Actor1ActorName': 'Enemy_Kohga_GolemRider', 'Actor1InstanceName': 'KohgaFinal', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventCamera.EventMoveToTargetPosCamera({'PosVector': [-1.600000023841858, 0.019999999552965164, 2.0299999713897705], 'TargetFovy': 50.529998779296875, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'AtVector': [-1.2799999713897705, 0.8999999761581421, 1.409999966621399], 'MoveTime': 90, 'IsWaitEnd': False, 'CameraCollisionMode': 0, 'Actor1ActorName': 'Enemy_Kohga_GolemRider', 'Actor1InstanceName': 'KohgaFinal', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Enemy_Kohga_GolemRider[KohgaFinal].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'kataosaeWara4', 'ForceFadeInFrame': 3.0})
    Enemy_Kohga_GolemRider[KohgaFinal].EventTalk({'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': 'Wait', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_OT_0019:Talk_0022', 'NotPlayLipSyncAnim': False, 'IsWaitEnd': True, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
    Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': False, 'ASCommand': 'LockOnWait', 'ClothWarpMode': 0})
}

void c07() {
    SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_AssassinBossTalk_00', 'IsUseSuspendFade': False})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-5.960000038146973, 17.81999969482422, -13.859999656677246], 'AtVector': [-3.200000047683716, 11.5, -7.159999847412109], 'TargetFovy': 39.29999923706055, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionMode': 1, 'Actor1ActorName': 'Enemy_Kohga_GolemRider', 'Actor1InstanceName': 'KohgaFinal', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Enemy_Kohga_GolemRider[KohgaFinal].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0, 'ASName': 'kataosaeWara3'})

    fork {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Dm_Obj_Kohga_Rocket.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True, 'IsAllSlot': True, 'ASName': 'frontDown1'})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    } {
        Enemy_Kohga_GolemRider[KohgaFinal].EventTalk({'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': 'Wait', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_OT_0019:Talk_0034', 'NotPlayLipSyncAnim': False, 'IsWaitEnd': True, 'EndDialogOption': 2, 'IsCloseDialog': True, 'IsNotOpenIfSkipedMostRecent': False})
    }

}

void c08() {

    fork {
        Dm_Obj_Kohga_Rocket.EventPlayAS({'Partial': '', 'ASName': 'launch', 'IsAnimeDriven': True, 'IsAllSlot': False, 'ForceFadeInFrame': 0.0, 'IsWaitEnd': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 180})

        fork {
            Dm_Obj_Kohga_Rocket.EventTriggerEmitXLink({'ELinkKey': 'Dm_OT_0019_Kohga_Rocket_Fire', 'SLinkKey': 'Dm_OT_0019_Kohga_Rocket_Fire'})
        } {
            GameSystemActor[FxWait].EventWait({'IsWaitEnd': True, 'Frames': 3})
            GameSystemActor[FxWait].EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_BuBuBu'})
            GameSystemActor[FxWait].EventWait({'IsWaitEnd': True, 'Frames': 30})
            GameSystemActor[FxWait].EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_DoDon'})
        }

    } {
        Enemy_Kohga_GolemRider[KohgaFinal].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ASName': 'michizure2', 'IsWaitEnd': False, 'IsAnimeDriven': True, 'ForceFadeInFrame': 0.0})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        Enemy_Kohga_GolemRider[KohgaFinal].EventTalk({'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': 'Wait', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_OT_0019:Talk_0027', 'NotPlayLipSyncAnim': False, 'IsWaitEnd': True, 'EndDialogOption': 3, 'IsCloseDialog': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'TargetActorName': 'Dm_Locator', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'TargetActorInstanceName': 'posKoga', 'IsLoop': False, 'SceneName': 'C08-0', 'IsWaitEnd': True, 'CalcUpInInterpolate': False})
    } {
        GameSystemActor[forSound].EventWait({'IsWaitEnd': True, 'Frames': 200})
        SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_AssassinBossTalk_01', 'CommandLife': 2, 'IsReleaseDucking': False})
    }

}

void c09() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'posKoga', 'PosVector': [-14.789999961853027, 18.770000457763672, -6.21999979019165], 'AtVector': [-7.610000133514404, 7.230000019073486, 4.360000133514404], 'TargetFovy': 70.5999984741211, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventTriggerRequestCameraShake({'Power': 5.0, 'Pattern': 4, 'ApplyType': 1, 'LoopEndCount': 100, 'IsRumbleController': False})
    } {
        Enemy_Kohga_GolemRider[KohgaFinal].EventTriggerModelBind({'RotOffset': [0.0, 0.0, 0.0], 'ActorName': 'Dm_Obj_Kohga_Rocket', 'BoneName': 'Kohga_Bind', 'InstanceName': '', 'TransOffset': [0.0, -1.399999976158142, -2.0]})
        Enemy_Kohga_GolemRider[KohgaFinal].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'michizure3', 'IsWaitEnd': False, 'ForceFadeInFrame': 0.0})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    } {
        Player.EventPlayerWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'posKoga', 'OffsetBase': 1, 'PositionOffset': [-2.0, 0.0, 15.0], 'YAngle': 180.0, 'UseDemoWait': True})
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'DemoSurprise', 'UseAnmDriven': True, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': True, 'KeepOneTimeAnm': True, 'ClothWarpMode': 0})
        Player.EventWait({'Frames': 30, 'IsWaitEnd': True})
        Player.EventTriggerPlayerLookAtObject({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1, 'ActorName': 'Enemy_Kohga_GolemRider', 'InstanceName': 'KohgaFinal'})
    } {
        Dm_Obj_Kohga_Rocket.EventPlayAS({'Partial': '', 'IsAnimeDriven': True, 'ASName': 'gakogako', 'IsAllSlot': False, 'ForceFadeInFrame': 0.0, 'IsWaitEnd': True})
    } {
        GameSystemActor[FxWait].EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_BuBuBu', 'Length': 4.0})
    } {
        Dm_Obj_Kohga_Rocket.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'Dm_OT_0019_Kohga_Rocket_FlyStart'})
        Dm_Obj_Kohga_Rocket.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'Dm_OT_0019_Kohga_Rocket_Flying'})
        SoundSystemActor.EventWait({'Frames': 33, 'IsWaitEnd': True})
        Enemy_Kohga_GolemRider[KohgaFinal].EventTriggerEmitXLink({'SLinkKey': 'Dm_Vo_Michizure3_00', 'ELinkKey': ''})
        SoundSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 4})
        Dm_Obj_Kohga_Rocket.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'Dm_OT_0019_Kohga_Rocket_C09_00_PassBy'})
    }

    EventCamera.EventTriggerRequestStopCameraShake({'DampEndFrame': 0.0})
}

void end() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'IsNow_KohgaFinal', 'Value': False})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'MinusYiga', 'StepName': 'Complete', 'IsWaitEnd': True})
}

void c10() {
    Dm_Obj_Kohga_Rocket.EventTriggerXLinkFadeByKey({'ELinkKey': 'Dm_OT_0019_Kohga_Rocket_Fire', 'IsKill': False, 'SLinkKey': ''})
    SoundSystemActor.EventTriggerForbidEmitIfOutsideView({'IsIgnoreLODResult': False})
    SoundSystemActor.EventSoundChangeListenerPreset({'ListenerPresetName': 'CameraFront_10m', 'FadeTime': 0.0})

    fork {
        Dm_Obj_Kohga_Rocket.EventPlayAS({'Partial': '', 'IsAnimeDriven': True, 'IsAllSlot': False, 'ASName': 'kaiten', 'ForceFadeInFrame': 0.0, 'IsWaitEnd': True})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'CameraName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'SceneName': 'C10-0', 'IsReferenceRootOnce': False, 'IsWaitEnd': False, 'IsIgnoreRootRot': False, 'InterpolateFrame': -1.0, 'IsLoop': False, 'TargetActorName': 'Enemy_Kohga_GolemRider', 'TargetActorInstanceName': 'KohgaFinal', 'CalcUpInInterpolate': False})
        Player.EventPlayerWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'posKoga', 'OffsetBase': 1, 'PositionOffset': [0.0, 0.0, 10.0], 'YAngle': -80.0, 'UseDemoWait': True})
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': False, 'ASCommand': 'LockOnWait', 'ClothWarpMode': 0})
    } {
        Enemy_Kohga_GolemRider[KohgaFinal].EventTalk({'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': 'Wait', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_OT_0019:Talk_0029', 'NotPlayLipSyncAnim': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 2, 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
    } {
        GameSystemActor[FxWait].EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_BuBuBu', 'Length': 5.0})
    } {
        Dm_Obj_Kohga_Rocket.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_OT_0019_Kohga_Rocket_Fire_C10'})
    }

    SoundSystemActor.EventTriggerCancelForbidEmitIfOutsideView()
    SoundSystemActor.EventSoundChangeListenerPreset({'ListenerPresetName': 'Normal', 'FadeTime': 0.0})
}

void c11() {

    fork {
        GameSystemActor[FxWait].EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_BuBuBu', 'Length': 4.0})
    } {
        EventCamera.EventTriggerRequestCameraShake({'Pattern': 4, 'ApplyType': 1, 'LoopEndCount': 100, 'Power': 2.0, 'IsRumbleController': False})
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'posKoga', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'IsLoop': False, 'SceneName': 'C11-1', 'IsWaitEnd': True, 'CalcUpInInterpolate': False})
    } {
        Dm_Obj_Kohga_Rocket.EventPlayAS({'Partial': '', 'IsAnimeDriven': True, 'IsWaitEnd': False, 'IsAllSlot': False, 'ASName': 'flyAway', 'ForceFadeInFrame': 0.0})
        Player.EventTriggerPlayerLookAtObject({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': 'KohgaFinal', 'TurnFaceControlType': 1, 'PosOffset': [20.0, 5.0, 10.0], 'ActorName': 'Enemy_Kohga_GolemRider'})
    } {
        Enemy_Kohga_GolemRider[KohgaFinal].EventTalk({'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': 'Wait', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_OT_0019:Talk_0030', 'NotPlayLipSyncAnim': False, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 2, 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
    } {
        SoundSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 36})
        Dm_Obj_Kohga_Rocket.EventTriggerEmitXLink({'SLinkKey': 'Dm_OT_0019_Kohga_Rocket_C11_00_Fire', 'ELinkKey': ''})
    }

    EventCamera.EventTriggerRequestStopCameraShake({'DampEndFrame': 0.0})
}

void c12() {
    SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_AssassinBossTalk_01', 'IsUseSuspendFade': False})
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Dm_Locator', 'AtVector': [0.10000000149011612, 20.0, 0.0], 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'Actor1InstanceName': 'posC12Cam', 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'PosVector': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 150})
    Dm_Obj_Kohga_Rocket.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'Dm_OT_0019_Kohga_Rocket_Flying'})
    Dm_Obj_Kohga_Rocket.EventGoOffstageForUser({'IsSleepXLink': False, 'IsWaitEnd': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
    Dm_Obj_Kohga_Rocket.EventTriggerEmitXLink({'ELinkKey': 'Dm_OT_0019_Kohga_Rocket_Shine', 'SLinkKey': 'Dm_OT_0019_Kohga_Rocket_Shine'})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'KohgaFinal', 'Value': 4})
    Player.EventPlayerWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'posKoga', 'OffsetBase': 1, 'PositionOffset': [0.0, 0.0, 13.0], 'YAngle': 0.0, 'UseDemoWait': True})
    Player.EventTriggerPlayerRequestLookAtTheFrontLock()
    Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': False, 'ASCommand': 'DemoWait', 'ClothWarpMode': 0})

    fork {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'RewardAppear_KohgaFinal'})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        TBox_Field_Enemy_Assassin[Reward_KohgaFinal].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': False, 'ExecuteSetSpeedZeroEveryFrame': True, 'IsRidingTargetGoOffstage': False})
        TBox_Field_Enemy_Assassin[Reward_KohgaFinal2].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': False, 'ExecuteSetSpeedZeroEveryFrame': True, 'IsRidingTargetGoOffstage': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
    }

}

void c14() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'posEnargyMat', 'TargetFovy': 34.20000076293945, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVector': [-2.869999885559082, 1.0700000524520874, -5.440000057220459], 'AtVector': [-0.5199999809265137, 0.6399999856948853, -1.0299999713897705], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})

    fork {

        fork {
            TBox_Field_Enemy_Assassin[Reward_KohgaFinal].EventTriggerEmitXLink({'ELinkKey': 'Dm_OT_0019_TreasureBox_Appear', 'SLinkKey': 'Dm_Appear_Assassin'})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 8})
            TBox_Field_Enemy_Assassin[Reward_KohgaFinal].EventDoNothing({'IsWaitEnd': True})
        } {
            GameSystemActor[FxWait].EventWait({'IsWaitEnd': True, 'Frames': 3})
            GameSystemActor[FxWait].EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_Bofuhn', 'Length': 0.0})
            GameSystemActor[FxWait].EventWait({'IsWaitEnd': True, 'Frames': 10})
            GameSystemActor[FxWait].EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_Bofuhn', 'Length': 0.0})
        }

    } {
        EventSystemActor.EventWait({'Frames': 5, 'IsWaitEnd': True})
        TBox_Field_Enemy_Assassin[Reward_KohgaFinal2].EventTriggerEmitXLink({'ELinkKey': 'Dm_OT_0019_TreasureBox_Appear', 'SLinkKey': 'Dm_Appear_Assassin'})
        EventSystemActor.EventWait({'Frames': 8, 'IsWaitEnd': True})
        TBox_Field_Enemy_Assassin[Reward_KohgaFinal2].EventDoNothing({'IsWaitEnd': True})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
}

void c15() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1InstanceName': '', 'PosVector': [-2.630000114440918, 1.1399999856948853, -1.9800000190734863], 'AtVector': [2.180000066757202, 0.9599999785423279, 5.690000057220459], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})
}

void Pre() {
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 0, 'CommandLife': 2, 'WithPlayableEvent': False, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False})
    GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'KohgaFinal', 'Value': 3})

    call Common.InitPlayStateTrigger({'IsUnequip': True, 'IsRidableGetOff': True})

    Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -76.0, 'Position': [-3510.241943359375, -311.1581115722656, -1846.6710205078125], 'UseDemoWait': True})
    Enemy_Kohga_GolemRider[KohgaFinal].EventTriggerParticipateEvent()
    DgnObj_RaumiLabo_A_03.EventTriggerParticipateEvent()
    Dm_Locator[Rope_Loc].EventDoNothing({'IsWaitEnd': True})
    DgnObj_RaumiLabo_A_06[Dm_Rope].EventTriggerModelBind({'ActorName': 'Dm_Locator', 'BoneName': 'Dm_Locator', 'RotOffset': [0.0, 0.0, 0.0], 'TransOffset': [0.0, 0.0, 0.0], 'InstanceName': 'Rope_Loc'})
    Dm_Obj_Kohga_Rocket.EventTriggerParticipateEvent()
    Npc_Zonau_Golem_Servant_Minus0005.EventTriggerParticipateEvent()
    Npc_Zonau_Golem_Servant_Minus0005.EventDoNothing({'IsWaitEnd': True})
    Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': False, 'ASCommand': 'DemoWait', 'ClothWarpMode': 0})
    Dm_Locator[posKoga].EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'ActorName': 'Player', 'OffsetBase': 1, 'InstanceName': '', 'YAngle': 180.0, 'PositionOffset': [0.0, 0.0, 13.0]})
    Dm_Locator[posEnargyMat].EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'OffsetBase': 1, 'ActorName': 'Player', 'InstanceName': '', 'PositionOffset': [0.0, 0.0, -13.0], 'YAngle': 180.0})
    Dm_Obj_Kohga_Rocket.EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'InstanceName': 'posKoga', 'ActorName': 'Dm_Locator', 'YAngle': 0.0, 'OffsetBase': 1, 'PositionOffset': [0.0, 8.199999809265137, -4.15310001373291]})
    Dm_Obj_Kohga_Rocket.EventPlayAS({'IsWaitEnd': True, 'ASName': 'appear', 'IsAnimeDriven': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
    Dm_Obj_Kohga_Rocket.EventGoOffstageForUser({'IsWaitEnd': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsSleepXLink': False, 'IsRidingTargetGoOffstage': False})
    Dm_Locator[posC12Cam].EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'posKoga', 'OffsetBase': 1, 'PositionOffset': [-28.649999618530273, 71.16000366210938, -56.7599983215332], 'YAngle': -64.0})
    Enemy_Kohga_GolemRider[KohgaFinal].EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'PositionOffset': [0.0, 0.0, 0.0], 'InstanceName': 'posKoga', 'OffsetBase': 1, 'YAngle': 0.0})
}

void c01() {
    Enemy_Kohga_GolemRider[KohgaFinal].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsWaitEnd': False, 'ASName': 'kataosae', 'IsAnimeDriven': True, 'ForceFadeInFrame': 0.0})
    EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-0.9599999785423279, 1.5499999523162842, 5.510000228881836], 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'TargetFovy': 55.0, 'MoveTime': 0, 'IsWaitEnd': True, 'AtVector': [1.0499999523162842, 1.399999976158142, -0.20999999344348907], 'CameraCollisionMode': 0, 'Actor1ActorName': 'Enemy_Kohga_GolemRider', 'Actor1InstanceName': 'KohgaFinal', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-0.9599999785423279, 1.5499999523162842, 5.510000228881836], 'AtVector': [0.8500000238418579, 1.4500000476837158, -0.3100000023841858], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': False, 'MoveTime': 150, 'CameraCollisionMode': 0, 'Actor1ActorName': 'Enemy_Kohga_GolemRider', 'Actor1InstanceName': 'KohgaFinal', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameSystemActor.EventEventFadeIn({'IsNoPlayAnime': False, 'Color': 0, 'Length': 1, 'IsWaitEnd': False})
    DgnObj_RaumiLabo_A_06[Dm_Rope].EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'Fence_Spark_Out'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    Enemy_Kohga_GolemRider[KohgaFinal].EventTalk({'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': 'Wait', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_OT_0019:Talk_0016', 'IsCloseDialog': False, 'IsWaitEnd': True, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Enemy_Kohga_GolemRider[KohgaFinal].EventTalk({'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': 'Wait', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_OT_0019:Talk_0025', 'IsWaitEnd': True, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': True, 'IsNotOpenIfSkipedMostRecent': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})

    fork {
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Camera_Sin00', 'Length': 0.699999988079071})
    } {
        Dm_Locator[Rope_Loc].EventPlayAS({'IsWaitEnd': True, 'ASName': 'C00-Dm_Locator-A-0', 'IsAnimeDriven': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
    } {
        DgnObj_RaumiLabo_A_06[Dm_Rope].EventTriggerEmitXLink({'SLinkKey': 'Fence_Down', 'ELinkKey': ''})
        DgnObj_RaumiLabo_A_06[Dm_Rope].EventTriggerXLinkFadeByKey({'ELinkKey': '', 'SLinkKey': 'Fence_Spark_Out', 'IsKill': False})
    }

    DgnObj_RaumiLabo_A_06[Dm_Rope].EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
}

void c02() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'Actor1ActorName': 'Player', 'PosVector': [3.0199999809265137, 1.3700000047683716, -2.140000104904175], 'AtVector': [-0.8100000023841858, 0.7599999904632568, 3.9700000286102295], 'TargetFovy': 50.099998474121094, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1InstanceName': '', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Enemy_Kohga_GolemRider[KohgaFinal].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsWaitEnd': False, 'ASName': 'kataosaeYokoB', 'IsAnimeDriven': False, 'ForceFadeInFrame': 30.0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
    Enemy_Kohga_GolemRider[KohgaFinal].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Dm_OT_0019:Talk_0017', 'NotPlayLipSyncAnim': False, 'IsCloseDialog': True, 'IsNotOpenIfSkipedMostRecent': False})
    Enemy_Kohga_GolemRider[KohgaFinal].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0, 'ASName': 'kataosae2'})
    Enemy_Kohga_GolemRider[KohgaFinal].EventWait({'IsWaitEnd': True, 'Frames': 52})

    fork {
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Doon'})
    } {
        Enemy_Kohga_GolemRider[KohgaFinal].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_OT_0019_Enm_Assassin_Senior_Angry'})
    }

    Enemy_Kohga_GolemRider[KohgaFinal].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsCloseDialog': False, 'MessageId': 'EventFlowMsg/Dm_OT_0019:Talk_0026', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Enemy_Kohga_GolemRider[KohgaFinal].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Dm_OT_0019:Talk_0018', 'NotPlayLipSyncAnim': False, 'IsCloseDialog': True, 'IsNotOpenIfSkipedMostRecent': False})
    Enemy_Kohga_GolemRider[KohgaFinal].EventTriggerXLinkFadeByKey({'SLinkKey': '', 'ELinkKey': 'Dm_OT_0019_Enm_Assassin_Senior_Angry', 'IsKill': False})
    Enemy_Kohga_GolemRider[KohgaFinal].EventPlayAS({'IsAnimeDriven': False, 'Partial': '', 'IsAllSlot': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0, 'ASName': 'kataosae4'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}

void EntryPoint0() {

    call Pre()


    call c01()


    call c02()


    call c03()


    call c04()


    call c06()


    call c07()


    call c08()


    call c09()


    call c10()


    call c11()


    call c12()


    call c14()


    call c15()


    call end()

}
