-------- EventFlow: Dm_OT_0012 --------

Actor: Enemy_Assassin_Senior[KohgaAgain]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventTalk', 'EventPlayAS', 'EventWarpToTargetActor', 'EventWait', 'EventTriggerModelBind', 'EventGoOffstageForUser', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'UseEventModelAnime': 'Work/Model/Event/Dm_OT_0022/Dm_OT_0022_Enemy_Assassin_Boss/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_OT_0010.root.as', 'EventMemberCreateMethod': 0, 'IsBindNearestActor': False}

Actor: Dm_Locator[posKoga]
entrypoint: None()
actions: ['EventWarpToTargetActor']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsBindNearestActor': False}

Actor: Dm_Locator[posEnargyMat]
entrypoint: None()
actions: ['EventWarpToTargetActor']
queries: []
params: {'IsWorld': False, 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'UseEventModelAnime': '', 'IsGrounding': False, 'IsBindNearestActor': False}

Actor: GameSystemActor[WaitForBGM]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerWarpToNearAnchor', 'EventPlayerTurnAndLook', 'EventPlayerPlayASForFlowchart', 'EventPlayerWarpToTargetActor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeIn', 'EventCloseMessageDialog', 'EventWait', 'EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataInt', 'EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Zonau_Golem_Servant_Minus0002
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventDoNothing']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundStopBGM', 'EventTriggerStartBgmSimple', 'EventSoundChangeListenerPreset']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: TBox_Field_Enemy_Assassin[Reward_KohgaAgain]
entrypoint: None()
actions: ['EventTriggerEmitXLink', 'EventDoNothing', 'EventGoOffstageForUser']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Dm_Obj_Kohga_Plane
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerParticipateEvent', 'EventGoOffstageForUser', 'EventWarpToTargetActor', 'EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_OT_0012/Dm_OT_0012_SpObj_LiftGeneratorWing_A/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_OT_0012_SpObj_LiftGeneratorWing_A.root.as', 'IsBindNearestActor': False}

void EntryPoint0() {

    call Pre()


    call c01()


    call c02()


    call c03A()


    call c03B()


    call c03C()


    call c03D()


    call c03E()


    call c04()


    call c05()


    call c07()


    call c08()


    call end()

}

void Pre() {

    call Common.InitPlayStateTrigger({'IsUnequip': True, 'IsRidableGetOff': True})

    Player.EventPlayerWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'InstanceName': 'Player_KohgaAgainBattleEnd', 'UseDemoWait': True})
    Enemy_Assassin_Senior[KohgaAgain].EventTriggerParticipateEvent()
    Dm_Obj_Kohga_Plane.EventTriggerParticipateEvent()
    Npc_Zonau_Golem_Servant_Minus0002.EventTriggerParticipateEvent()
    Npc_Zonau_Golem_Servant_Minus0002.EventDoNothing({'IsWaitEnd': True})
    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'DemoWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    Dm_Locator[posKoga].EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'ActorName': 'Player', 'PositionOffset': [0.0, 0.019999999552965164, 14.0], 'InstanceName': '', 'OffsetBase': 1, 'YAngle': 180.0})
    Dm_Locator[posEnargyMat].EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'OffsetBase': 1, 'ActorName': 'Player', 'InstanceName': '', 'PositionOffset': [0.0, 0.019999999552965164, 14.0], 'YAngle': 0.0})
    Dm_Obj_Kohga_Plane.EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'posKoga', 'OffsetBase': 1, 'YAngle': 0.0, 'PositionOffset': [0.0, 0.0, -4.0]})
    Dm_Obj_Kohga_Plane.EventPlayAS({'ASName': 'stay', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    Dm_Obj_Kohga_Plane.EventGoOffstageForUser({'IsWaitEnd': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsSleepXLink': False, 'IsRidingTargetGoOffstage': False})
    Enemy_Assassin_Senior[KohgaAgain].EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'OffsetBase': 1, 'ActorName': 'Player', 'InstanceName': '', 'PositionOffset': [0.0, 0.019999999552965164, 14.0], 'YAngle': 175.0})
}

void c01() {
    Enemy_Assassin_Senior[KohgaAgain].EventPlayAS({'IsAnimeDriven': False, 'Partial': '', 'IsAllSlot': False, 'IsWaitEnd': False, 'ASName': 'kataosae', 'ForceFadeInFrame': 0.0})
    EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-0.9599999785423279, 1.5499999523162842, 5.510000228881836], 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'TargetFovy': 55.0, 'MoveTime': 0, 'IsWaitEnd': True, 'AtVector': [1.0499999523162842, 1.399999976158142, -0.20999999344348907], 'Actor1ActorName': 'Enemy_Assassin_Senior', 'Actor1InstanceName': 'KohgaAgain', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': False, 'PosVector': [-1.0, 1.5499999523162842, 5.360000133514404], 'AtVector': [0.8100000023841858, 1.4500000476837158, -0.46000000834465027], 'TargetFovy': 55.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'Enemy_Assassin_Senior', 'Actor1InstanceName': 'KohgaAgain', 'MoveTime': 210, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameSystemActor.EventEventFadeIn({'IsNoPlayAnime': False, 'Color': 0, 'Length': 1, 'IsWaitEnd': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_AssassinBossTalk_01', 'CommandLife': 2, 'IsReleaseDucking': False})
    Enemy_Assassin_Senior[KohgaAgain].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': 'Wait', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_OT_0012:Talk_0008', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Enemy_Assassin_Senior[KohgaAgain].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_OT_0012:Talk_0018', 'ASName': '', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void c02() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Enemy_Assassin_Senior', 'Actor1InstanceName': 'KohgaAgain', 'PosVector': [-1.4299999475479126, 2.130000114440918, 17.360000610351562], 'AtVector': [0.7599999904632568, 0.8500000238418579, 9.649999618530273], 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'TargetFovy': 37.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Enemy_Assassin_Senior[KohgaAgain].EventPlayAS({'ASName': 'yubisasi', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
    Enemy_Assassin_Senior[KohgaAgain].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': 'Wait', 'MessageId': 'EventFlowMsg/Dm_OT_0012:Talk_0009', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Enemy_Assassin_Senior[KohgaAgain].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0, 'ASName': 'kataosae2'})
    Enemy_Assassin_Senior[KohgaAgain].EventWait({'IsWaitEnd': True, 'Frames': 53})

    fork {
        Enemy_Assassin_Senior[KohgaAgain].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_OT_0012_Enm_Assassin_Senior_Angry'})
    } {
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Doon'})
    }

    Enemy_Assassin_Senior[KohgaAgain].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': 'Wait', 'MessageId': 'EventFlowMsg/Dm_OT_0012:Talk_0011', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Enemy_Assassin_Senior[KohgaAgain].EventTriggerXLinkFadeByKey({'SLinkKey': '', 'ELinkKey': 'Dm_OT_0012_Enm_Assassin_Senior_Angry', 'IsKill': False})
}

void c03A() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [0.6200000047683716, 1.7799999713897705, 5.869999885559082], 'AtVector': [0.03999999910593033, 1.9299999475479126, 0.23000000417232513], 'TargetFovy': 22.600000381469727, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'Enemy_Assassin_Senior', 'Actor1InstanceName': 'KohgaAgain', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Enemy_Assassin_Senior[KohgaAgain].EventPlayAS({'ASName': 'yubisasi', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
    Enemy_Assassin_Senior[KohgaAgain].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': 'Wait', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_OT_0012:Talk_0010', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void c04() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'TargetFovy': 37.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'posKoga', 'PosVector': [0.0, 2.430000066757202, 7.800000190734863], 'AtVector': [0.0, 2.0199999809265137, 2.6600000858306885], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': False, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 30, 'TargetFovy': 50.0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'posKoga', 'CameraCollisionMode': 0, 'PosVector': [0.0, 2.430000066757202, 8.0], 'AtVector': [0.0, 1.350000023841858, 3.0], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Enemy_Assassin_Senior[KohgaAgain].EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'OffsetBase': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'posKoga', 'PositionOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})
        Enemy_Assassin_Senior[KohgaAgain].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'udehirogetonormalwait', 'ForceFadeInFrame': -1.0})
    }

    Enemy_Assassin_Senior[KohgaAgain].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': 'Wait', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_OT_0012:Talk_0017', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Enemy_Assassin_Senior[KohgaAgain].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': 'Wait', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_OT_0012:Talk_0020', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'MoveTime': 20, 'StartAccelerateRate': 0.20000000298023224, 'IsWaitEnd': False, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'posKoga', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'AtVector': [0.0, 2.200000047683716, 3.0], 'PosVector': [0.0, 2.299999952316284, 8.0], 'TargetFovy': 35.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Enemy_Assassin_Senior[KohgaAgain].EventPlayAS({'IsAnimeDriven': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'ASName': 'jyutsu'})
        Enemy_Assassin_Senior[KohgaAgain].EventWait({'IsWaitEnd': True, 'Frames': 30})
        Enemy_Assassin_Senior[KohgaAgain].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_OT_0012_Enm_Assassin_Senior_Magic'})
        Enemy_Assassin_Senior[KohgaAgain].EventWait({'IsWaitEnd': True, 'Frames': 60})

        fork {
            Dm_Obj_Kohga_Plane.EventTriggerEmitXLink({'ELinkKey': 'Dm_OT_0012_Kohga_Plane_Appear', 'SLinkKey': 'Dm_OT_0010_Kohga_Plane_Appear'})
        } {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 3})
            GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_DoDon'})
        }

        Enemy_Assassin_Senior[KohgaAgain].EventWait({'IsWaitEnd': True, 'Frames': 10})
        Dm_Obj_Kohga_Plane.EventPlayAS({'ASName': 'stay', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        Enemy_Assassin_Senior[KohgaAgain].EventWait({'IsWaitEnd': True, 'Frames': 20})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
    Enemy_Assassin_Senior[KohgaAgain].EventPlayAS({'IsAnimeDriven': False, 'Partial': '', 'IsAllSlot': False, 'ASName': 'Teleport', 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False})
    Enemy_Assassin_Senior[KohgaAgain].EventWait({'IsWaitEnd': True, 'Frames': 8})

    fork {
        Enemy_Assassin_Senior[KohgaAgain].EventTriggerEmitXLink({'ELinkKey': 'Dm_OT_0012_Enm_Assassin_Senior_Disappear', 'SLinkKey': 'Dm_DoronDisappear'})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 3})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_Bofuhn', 'Length': 0.0})
    }

    Enemy_Assassin_Senior[KohgaAgain].EventWait({'IsWaitEnd': True, 'Frames': 3})
    Enemy_Assassin_Senior[KohgaAgain].EventTriggerModelBind({'RotOffset': [0.0, 0.0, 0.0], 'TransOffset': [0.0, 0.0, 0.0], 'ActorName': 'Dm_Obj_Kohga_Plane', 'BoneName': 'Root_Stand', 'InstanceName': ''})
    Enemy_Assassin_Senior[KohgaAgain].EventGoOffstageForUser({'IsWaitEnd': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsSleepXLink': False, 'IsRidingTargetGoOffstage': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})

    fork {
        Enemy_Assassin_Senior[KohgaAgain].EventTriggerEmitXLink({'ELinkKey': 'Dm_OT_0012_Enm_Assassin_Senior_Appear', 'SLinkKey': 'Dm_DoronAppear'})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 3})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_Bofuhn', 'Length': 0.0})
    }

    Enemy_Assassin_Senior[KohgaAgain].EventPlayAS({'IsAnimeDriven': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'ASName': 'RideWait_Dm_OT_0010'})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    Player.EventPlayerWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'posKoga', 'OffsetBase': 1, 'YAngle': 180.0, 'PositionOffset': [1.0, -0.019999999552965164, 14.0], 'UseDemoWait': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}

void c05() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'posKoga', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVector': [1.899999976158142, 0.9399999976158142, 6.429999828338623], 'AtVector': [1.0499999523162842, 1.7599999904632568, 11.010000228881836], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'posKoga', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': False, 'TargetFovy': 40.0, 'MoveTime': 190, 'StartAccelerateRate': 0.10000000149011612, 'PosVector': [1.899999976158142, 0.9399999976158142, 6.429999828338623], 'AtVector': [1.0499999523162842, 1.7999999523162842, 11.010000228881836], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})

        fork {
            GameSystemActor[WaitForBGM].EventWait({'IsWaitEnd': True, 'Frames': 20})
            SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_AssassinBossTalk_01', 'IsUseSuspendFade': False})
            GameSystemActor[WaitForBGM].EventWait({'IsWaitEnd': True, 'Frames': 30})
            SoundSystemActor.EventSoundChangeListenerPreset({'ListenerPresetName': 'CameraFront_10m', 'FadeTime': 1.0})
            GameSystemActor[WaitForBGM].EventWait({'IsWaitEnd': True, 'Frames': 30})
            SoundSystemActor.EventSoundChangeListenerPreset({'ListenerPresetName': 'CameraFront_24m', 'FadeTime': 1.0})
            GameSystemActor[WaitForBGM].EventWait({'IsWaitEnd': True, 'Frames': 30})
            SoundSystemActor.EventSoundChangeListenerPreset({'ListenerPresetName': 'CameraFront_70m', 'FadeTime': 3.5})
        } {
            Player.EventPlayerTurnAndLook({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'ActorName': 'Enemy_Assassin_Senior', 'InstanceName': 'KohgaAgain', 'IsWaitEnd': False, 'TurnFaceControlType': 1, 'PosOffset': [0.0, 5.0, 0.0], 'Direction': 20.0, 'KeepTalkWait': True, 'OffsetBase': 0})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
            Player.EventPlayerTurnAndLook({'Target': 3, 'TurnFaceControlType': 0, 'WorldPos': [0.0, 0.0, 0.0], 'IsWaitEnd': False, 'ActorName': 'Enemy_Assassin_Senior', 'InstanceName': 'KohgaAgain', 'PosOffset': [0.0, 20.0, 0.0], 'Direction': 20.0, 'KeepTalkWait': True, 'OffsetBase': 0})
            Player.EventPlayerTurnAndLook({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'ActorName': 'Enemy_Assassin_Senior', 'InstanceName': 'KohgaAgain', 'IsWaitEnd': False, 'TurnFaceControlType': 1, 'PosOffset': [0.0, 5.0, 0.0], 'Direction': 20.0, 'KeepTalkWait': True, 'OffsetBase': 0})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
        } {
            Enemy_Assassin_Senior[KohgaAgain].EventTalk({'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': 'Wait', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'MessageId': 'EventFlowMsg/Dm_OT_0012:Talk_0012', 'NotPlayLipSyncAnim': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 2, 'IsNotOpenIfSkipedMostRecent': False})
            GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
        }

    } {
        Dm_Obj_Kohga_Plane.EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'posKoga', 'OffsetBase': 1, 'YAngle': 0.0, 'PositionOffset': [1.0, 0.0, 1.0]})
        Dm_Obj_Kohga_Plane.EventTriggerEmitXLink({'ELinkKey': 'Dm_OT_0012_Kohga_Plane_Wind', 'SLinkKey': 'Dm_OT_0010_Kohga_Plane_Wind'})
        Dm_Obj_Kohga_Plane.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': True, 'ASName': 'fly', 'ForceFadeInFrame': 0.0})
    }

}

void c07() {
    SoundSystemActor.EventSoundChangeListenerPreset({'ListenerPresetName': 'Normal', 'FadeTime': 0.029999999329447746})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'posEnargyMat', 'PosVector': [1.8600000143051147, 1.6699999570846558, -5.679999828338623], 'AtVector': [0.0, 0.6499999761581421, 0.0], 'TargetFovy': 32.20000076293945, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'RewardAppear_KohgaAgain'})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    TBox_Field_Enemy_Assassin[Reward_KohgaAgain].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': False, 'ExecuteSetSpeedZeroEveryFrame': True, 'IsRidingTargetGoOffstage': False})

    fork {
        TBox_Field_Enemy_Assassin[Reward_KohgaAgain].EventTriggerEmitXLink({'ELinkKey': 'Dm_OT_0012_TreasureBox_Appear', 'SLinkKey': 'Dm_Appear_Assassin'})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 3})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_Bofuhn', 'Length': 0.0})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 8})
    TBox_Field_Enemy_Assassin[Reward_KohgaAgain].EventDoNothing({'IsWaitEnd': True})

    fork {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'KohgaAgain', 'Value': 4})
    } {
        Player.EventPlayerWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'posKoga', 'OffsetBase': 1, 'PositionOffset': [0.0, -0.019999999552965164, 14.0], 'YAngle': 180.0, 'UseDemoWait': True})
        Player.EventPlayerTurnAndLook({'Target': 3, 'TurnFaceControlType': 0, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'TBox_Field_Enemy_Assassin', 'IsWaitEnd': True, 'InstanceName': 'Reward_KohgaAgain', 'KeepTalkWait': True, 'OffsetBase': 0})
    }

}

void c08() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [2.630000114440918, 1.9299999475479126, -2.559999942779541], 'AtVector': [0.029999999329447746, 0.9300000071525574, 2.549999952316284], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
}

void end() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'IsNow_KohgaAgain', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'IsNow_KohgaContinue'})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'MinusYiga', 'StepName': 'Again', 'IsWaitEnd': True})
}

void c03B() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Enemy_Assassin_Senior', 'Actor1InstanceName': 'KohgaAgain', 'PosVector': [-2.3299999237060547, 0.18000000715255737, 2.4700000286102295], 'AtVector': [-0.5299999713897705, 1.3799999952316284, 0.8799999952316284], 'TargetFovy': 43.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Enemy_Assassin_Senior[KohgaAgain].EventPlayAS({'ASName': 'yubisasi', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
    Enemy_Assassin_Senior[KohgaAgain].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': 'Wait', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_OT_0012:Talk_0013', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void c03C() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Enemy_Assassin_Senior', 'Actor1InstanceName': 'KohgaAgain', 'PosVector': [-0.6399999856948853, 3.3399999141693115, 5.960000038146973], 'AtVector': [0.4300000071525574, 1.809999942779541, 1.2999999523162842], 'TargetFovy': 33.29999923706055, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Enemy_Assassin_Senior[KohgaAgain].EventPlayAS({'ASName': 'yubisasi', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
    Enemy_Assassin_Senior[KohgaAgain].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': 'Wait', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_OT_0012:Talk_0014', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void c03D() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Enemy_Assassin_Senior', 'Actor1InstanceName': 'KohgaAgain', 'PosVector': [0.33000001311302185, 1.350000023841858, 3.119999885559082], 'AtVector': [-0.15000000596046448, 2.819999933242798, -1.5700000524520874], 'TargetFovy': 40.400001525878906, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Enemy_Assassin_Senior[KohgaAgain].EventPlayAS({'ASName': 'udehiroge', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
    Enemy_Assassin_Senior[KohgaAgain].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': 'Wait', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_OT_0012:Talk_0015', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void c03E() {
    EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': False, 'PosVector': [0.6200000047683716, 1.7799999713897705, 5.869999885559082], 'AtVector': [0.03999999910593033, 1.9299999475479126, 0.23000000417232513], 'TargetFovy': 22.600000381469727, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'Enemy_Assassin_Senior', 'Actor1InstanceName': 'KohgaAgain', 'MoveTime': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Enemy_Assassin_Senior[KohgaAgain].EventPlayAS({'ASName': 'udegumi', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
    Enemy_Assassin_Senior[KohgaAgain].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': 'Wait', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_OT_0012:Talk_0016', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Enemy_Assassin_Senior[KohgaAgain].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': 'Wait', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_OT_0012:Talk_0019', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}
