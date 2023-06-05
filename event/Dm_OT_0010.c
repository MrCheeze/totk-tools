-------- EventFlow: Dm_OT_0010 --------

Actor: Enemy_Assassin_Senior[KohgaBegin]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventTalk', 'EventPlayAS', 'EventWait', 'EventWarpToTargetActor', 'EventTriggerModelBind', 'EventGoOffstageForUser', 'EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'UseEventModelAnime': 'Work/Model/Event/Dm_OT_0022/Dm_OT_0022_Enemy_Assassin_Boss/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_OT_0010.root.as', 'IsBindNearestActor': False}

Actor: Dm_Locator[posKoga]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor[WaitForBGM]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerWarpToTargetPosAndRot', 'EventPlayerPlayASForFlowchart', 'EventPlayerMove']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeIn', 'EventWait', 'EventCloseMessageDialog', 'EventTriggerControllerRumble', 'EventWaitResourceStableForTerrainAndCave', 'EventTraverseAroundAndWaitCreateActor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerSetGameDataInt']
queries: ['EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Dm_Obj_Kohga_Plane
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventGoOffstageForUser', 'EventWarpToTargetActor', 'EventPlayAS', 'EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_OT_0010/Dm_OT_0010_SpObj_LiftGeneratorWing_A/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_OT_0010_SpObj_LiftGeneratorWing_A.root.as', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStartBgmSimple', 'EventTriggerSoundStopBGM', 'EventSoundChangeListenerPreset']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: TBox_Field_Enemy_Assassin[Reward_KohgaBegin]
entrypoint: None()
actions: ['EventTriggerEmitXLink', 'EventDoNothing', 'EventGoOffstageForUser']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor[kohga]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void EntryPoint() {

    call Pre()


    call c01()


    call c02()


    call c03()


    call c04()


    call c06()


    call c07()


    call end()

}

void Pre() {
    GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'KohgaBegin', 'Index': -1, 'Value': 3})

    call Common.InitPlayStateTrigger({'IsUnequip': True, 'IsRidableGetOff': True})

    Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -47.88100051879883, 'Position': [-809.29248046875, -415.1897888183594, 1929.48095703125], 'UseDemoWait': True})
    Enemy_Assassin_Senior[KohgaBegin].EventTriggerParticipateEvent()
    Dm_Obj_Kohga_Plane.EventTriggerParticipateEvent()
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'RewardAppear_KohgaBegin', 'Index': -1, 'Value': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    TBox_Field_Enemy_Assassin[Reward_KohgaBegin].EventGoOffstageForUser({'IsWaitEnd': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsSleepXLink': False, 'IsRidingTargetGoOffstage': False})
    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'DemoWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    Dm_Locator[posKoga].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [-828.5087280273438, -417.7294921875, 1946.7950439453125], 'YAngle': 135.0})
    Enemy_Assassin_Senior[KohgaBegin].EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'PositionOffset': [0.0, 0.0, 0.0], 'OffsetBase': 1, 'InstanceName': 'posKoga', 'YAngle': -5.0})
    Dm_Obj_Kohga_Plane.EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'posKoga', 'OffsetBase': 1, 'YAngle': 177.0, 'PositionOffset': [0.44999998807907104, 0.800000011920929, -6.199999809265137]})
    Dm_Obj_Kohga_Plane.EventPlayAS({'ASName': 'stay', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    Dm_Obj_Kohga_Plane.EventGoOffstageForUser({'IsWaitEnd': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsSleepXLink': False, 'IsRidingTargetGoOffstage': False})
    GameSystemActor.EventWaitResourceStableForTerrainAndCave({'IsWaitEnd': True})
    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
}

void c01() {
    Enemy_Assassin_Senior[KohgaBegin].EventPlayAS({'IsAnimeDriven': False, 'Partial': '', 'IsAllSlot': False, 'IsWaitEnd': False, 'ASName': 'kataosae', 'ForceFadeInFrame': 0.0})
    EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'posKoga', 'PosVector': [-0.9599999785423279, 1.5499999523162842, 5.510000228881836], 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'TargetFovy': 55.0, 'MoveTime': 0, 'IsWaitEnd': True, 'AtVector': [1.0499999523162842, 1.399999976158142, -0.20999999344348907], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'posKoga', 'PosVector': [-0.9599999785423279, 1.5499999523162842, 5.510000228881836], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': False, 'AtVector': [0.8500000238418579, 1.4500000476837158, -0.46000000834465027], 'MoveTime': 210, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameSystemActor.EventEventFadeIn({'IsNoPlayAnime': False, 'Color': 0, 'Length': 1, 'IsWaitEnd': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_AssassinBossTalk_01', 'CommandLife': 2, 'IsReleaseDucking': False})
    Enemy_Assassin_Senior[KohgaBegin].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': 'Wait', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Dm_OT_0010:Talk_0001', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': True, 'IsNotOpenIfSkipedMostRecent': False})
}

void end() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'IsNow_KohgaAgain'})
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DeepHoleSurvey2_IsAfter_Ready_Exp'}) {
        if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DeepHoleSurvey2_IsAfter_Report_Exp'}) {
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'DeepHoleSurvey2', 'StepName': 'Report', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
        }
        Event25:
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'MinusYiga', 'StepName': 'BeginBeforeHint', 'IsWaitEnd': True})
    } else {
        goto Event25
    }
}

void c03() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'posKoga', 'TargetFovy': 22.600000381469727, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVector': [-0.25, 2.5199999809265137, 6.03000020980835], 'AtVector': [-0.05000000074505806, 1.9299999475479126, 0.38999998569488525], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Enemy_Assassin_Senior[KohgaBegin].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': 'Wait', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_OT_0010:Talk_0004', 'IsCloseDialog': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'posKoga', 'TargetFovy': 22.600000381469727, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': False, 'MoveTime': 90, 'PosVector': [-0.25, 2.5199999809265137, 6.03000020980835], 'AtVector': [-0.05000000074505806, 2.049999952316284, 0.38999998569488525], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Enemy_Assassin_Senior[KohgaBegin].EventPlayAS({'ASName': 'udehiroge', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
    Enemy_Assassin_Senior[KohgaBegin].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': 'Wait', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_OT_0010:Talk_0005', 'NotPlayLipSyncAnim': False, 'IsCloseDialog': True, 'IsNotOpenIfSkipedMostRecent': False})
    Enemy_Assassin_Senior[KohgaBegin].EventPlayAS({'ASName': 'udegumi', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
    Enemy_Assassin_Senior[KohgaBegin].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0, 'ASName': 'udegumi02'})
    Enemy_Assassin_Senior[KohgaBegin].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': 'Wait', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_OT_0010:Talk_0006', 'IsCloseDialog': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void c02() {
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'posKoga', 'TargetFovy': 35.599998474121094, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-3.4200000762939453, 4.75, 24.899999618530273], 'AtVector': [-0.6600000262260437, 2.9600000381469727, 18.899999618530273], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Player.EventPlayerMove({'WorldPosX': 0.0, 'WorldPosY': 0.0, 'WorldPosZ': 0.0, 'WorldPos': [-812.0, -415.19000244140625, 1931.800048828125], 'DecSpeedDistance': 1.0, 'IsWaitEnd': True, 'MoveSpeed': 0.699999988079071})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    Enemy_Assassin_Senior[KohgaBegin].EventPlayAS({'ASName': 'yubisasi', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
    Enemy_Assassin_Senior[KohgaBegin].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': 'Wait', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_OT_0010:Talk_0003', 'IsCloseDialog': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void c04() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'posKoga', 'PosVector': [-0.20000000298023224, 1.340000033378601, 5.550000190734863], 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'TargetFovy': 50.0, 'AtVector': [0.0, 1.4900000095367432, 0.38999998569488525], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Enemy_Assassin_Senior[KohgaBegin].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'udehirogetonormalwait', 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False})
    Enemy_Assassin_Senior[KohgaBegin].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': 'Wait', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_OT_0010:Talk_0007', 'IsCloseDialog': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Enemy_Assassin_Senior[KohgaBegin].EventPlayAS({'ASName': 'udehiroge', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
    Enemy_Assassin_Senior[KohgaBegin].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': 'Wait', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_OT_0010:Talk_0008', 'NotPlayLipSyncAnim': False, 'IsCloseDialog': True, 'IsNotOpenIfSkipedMostRecent': False})
    Enemy_Assassin_Senior[KohgaBegin].EventPlayAS({'IsAnimeDriven': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'ASName': 'jyutsu'})
    Enemy_Assassin_Senior[KohgaBegin].EventWait({'IsWaitEnd': True, 'Frames': 30})
    Enemy_Assassin_Senior[KohgaBegin].EventTriggerEmitXLink({'ELinkKey': 'Dm_OT_0010_Enm_Assassin_Senior_Magic', 'SLinkKey': ''})
    Enemy_Assassin_Senior[KohgaBegin].EventWait({'IsWaitEnd': True, 'Frames': 60})

    fork {
        Dm_Obj_Kohga_Plane.EventTriggerEmitXLink({'ELinkKey': 'Dm_OT_0010_Kohga_Plane_Appear', 'SLinkKey': 'Dm_OT_0010_Kohga_Plane_Appear'})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 3})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_DoDon'})
    }

    Enemy_Assassin_Senior[KohgaBegin].EventWait({'IsWaitEnd': True, 'Frames': 10})
    Dm_Obj_Kohga_Plane.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True, 'ASName': 'stay', 'IsWaitEnd': False})
    Enemy_Assassin_Senior[KohgaBegin].EventWait({'IsWaitEnd': True, 'Frames': 20})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
    Enemy_Assassin_Senior[KohgaBegin].EventPlayAS({'IsAnimeDriven': False, 'Partial': '', 'IsAllSlot': False, 'ASName': 'Teleport', 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False})
    Enemy_Assassin_Senior[KohgaBegin].EventWait({'IsWaitEnd': True, 'Frames': 8})

    fork {
        Enemy_Assassin_Senior[KohgaBegin].EventTriggerEmitXLink({'ELinkKey': 'Dm_OT_0010_Enm_Assassin_Senior_Disappear', 'SLinkKey': 'Dm_DoronDisappear'})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 3})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_Bofuhn', 'Length': 0.0})
    }

    Enemy_Assassin_Senior[KohgaBegin].EventWait({'IsWaitEnd': True, 'Frames': 3})
    Enemy_Assassin_Senior[KohgaBegin].EventTriggerModelBind({'RotOffset': [0.0, 0.0, 0.0], 'TransOffset': [0.0, 0.0, 0.0], 'ActorName': 'Dm_Obj_Kohga_Plane', 'BoneName': 'Root_Stand', 'InstanceName': ''})
    Enemy_Assassin_Senior[KohgaBegin].EventGoOffstageForUser({'IsWaitEnd': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsSleepXLink': False, 'IsRidingTargetGoOffstage': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})

    fork {
        Enemy_Assassin_Senior[KohgaBegin].EventTriggerEmitXLink({'ELinkKey': 'Dm_OT_0010_Enm_Assassin_Senior_Appear', 'SLinkKey': 'Dm_DoronAppear'})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 3})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_Bofuhn', 'Length': 0.0})
    }

    Enemy_Assassin_Senior[KohgaBegin].EventPlayAS({'IsAnimeDriven': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'ASName': 'RideWait_Dm_OT_0010'})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'posKoga', 'PosVector': [-0.20000000298023224, 1.340000033378601, 5.550000190734863], 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'TargetFovy': 35.0, 'MoveTime': 210, 'AtVector': [0.0, 2.0, 0.38999998569488525], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Dm_Obj_Kohga_Plane.EventTriggerEmitXLink({'ELinkKey': 'Dm_OT_0010_Kohga_Plane_Wind', 'SLinkKey': 'Dm_OT_0010_Kohga_Plane_Wind'})
        Dm_Obj_Kohga_Plane.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True, 'ASName': 'fly', 'IsWaitEnd': False})
        GameSystemActor[kohga].EventWait({'IsWaitEnd': True, 'Frames': 310})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        Dm_Obj_Kohga_Plane.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'Dm_OT_0010_Kohga_Plane_Stick_On'})
        Enemy_Assassin_Senior[KohgaBegin].EventTalk({'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': 'Wait', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Dm_OT_0010:Talk_0002', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 2, 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': False})
    } {
        GameSystemActor[WaitForBGM].EventWait({'IsWaitEnd': True, 'Frames': 35})
        SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_AssassinBossTalk_01', 'IsUseSuspendFade': False})
        SoundSystemActor.EventSoundChangeListenerPreset({'ListenerPresetName': 'CameraFront_10m', 'FadeTime': 2.0})
        GameSystemActor[WaitForBGM].EventWait({'IsWaitEnd': True, 'Frames': 60})
        SoundSystemActor.EventSoundChangeListenerPreset({'ListenerPresetName': 'CameraFront_30m', 'FadeTime': 2.5})
        GameSystemActor[WaitForBGM].EventWait({'IsWaitEnd': True, 'Frames': 75})
        SoundSystemActor.EventSoundChangeListenerPreset({'ListenerPresetName': 'CameraFront_70m', 'FadeTime': 1.5})
    }

}

void c06() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': '', 'Actor1ActorName': 'Player', 'PosVector': [1.8300000429153442, 2.130000114440918, -0.23000000417232513], 'AtVector': [-0.019999999552965164, 0.5199999809265137, 4.010000228881836], 'TargetFovy': 39.400001525878906, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    SoundSystemActor.EventSoundChangeListenerPreset({'ListenerPresetName': 'Normal', 'FadeTime': 0.10000000149011612})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})

    fork {
        TBox_Field_Enemy_Assassin[Reward_KohgaBegin].EventTriggerEmitXLink({'ELinkKey': 'Dm_OT_0010_TreasureBox_Appear', 'SLinkKey': 'Dm_Appear_Assassin'})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 3})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_Bofuhn', 'Length': 0.0})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 8})
    TBox_Field_Enemy_Assassin[Reward_KohgaBegin].EventDoNothing({'IsWaitEnd': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'KohgaBegin', 'Index': -1, 'Value': 4})
}

void c07() {
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'PosVector': [2.0, 2.180000066757202, -3.2799999713897705], 'AtVector': [0.8399999737739563, 1.399999976158142, 0.30000001192092896], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Minus_IsActivateCharaDirectory_Kohga', 'Value': True})
}
