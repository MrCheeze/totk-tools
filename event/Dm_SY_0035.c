-------- EventFlow: Dm_SY_0035 --------

Actor: Sage_EventStarter
entrypoint: None()
actions: []
queries: ['EventQueryOwnSageType']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTriggerRequestAutoSave']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_SY_0035/Dm_SY_0035_Link/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_SY_0035_Link.root.as', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: PlayerRaulHand
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'UseEventModelAnime': '', 'EventMemberCreateMethod': 2, 'UseEventAS': 'Work/AS/Root/Event/Dm_SY_0035_Link_RaulSkin_RightHand.root.as', 'IsGrounding': False, 'IsWorld': False, 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: SystemTextNPC
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void EntryPoint0() {

    call Init()

    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0})
    switch Sage_EventStarter.EventQueryOwnSageType() {
      case 0:
        PlayerRaulHand.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'SageEmm_Spirit'})
        Player.EventTriggerEmitXLink({'ELinkKey': 'Dm_SY_0035_FollowSphere_GoOut_Water', 'SLinkKey': 'SageRingShine_0'})

        call C01()

        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'PlayerStatus.Companion.Water.IsPlayedSoulSageFirstAppearanceEvent', 'Index': -1, 'Value': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 12})
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'IsIgnoreAtVectorReferenceActorRot': True, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'Actor1ActorName': 'Sage_Soul_Zora', 'IsAtVectorReferenceActorPosOnce': False, 'IsWaitEnd': False, 'PosVector': [3.312000036239624, 3.1419999599456787, 5.040999889373779], 'AtVector': [0.2849999964237213, 2.114000082015991, 0.03200000151991844], 'CameraCollisionMode': 1, 'LatShiftRange': 60.0, 'LongShiftRange': 180.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        SystemTextNPC.EventTalk({'MessageId': 'EventFlowMsg/Dm_SY_0035:Dm_SY_0035_01', 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})

        call AutoSave()

      case 1:
        PlayerRaulHand.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'SageEmm_Fire'})
        Player.EventTriggerEmitXLink({'ELinkKey': 'Dm_SY_0035_FollowSphere_GoOut_Fire', 'SLinkKey': 'SageRingShine_0'})

        call C01()

        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'PlayerStatus.Companion.Fire.IsPlayedSoulSageFirstAppearanceEvent', 'Index': -1, 'Value': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 12})
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'IsIgnoreAtVectorReferenceActorRot': True, 'PosVectorSetType': 3, 'Actor1ActorName': 'Sage_Soul_Goron', 'IsWaitEnd': False, 'PosVector': [0.7020000219345093, 3.497999906539917, 5.72599983215332], 'AtVectorSetType': 2, 'AtVector': [0.20100000500679016, 1.7430000305175781, 0.07100000232458115], 'CameraCollisionMode': 1, 'LatShiftRange': 60.0, 'LongShiftRange': 180.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        SystemTextNPC.EventTalk({'IsCloseDialog': False, 'EndDialogOption': 3, 'MessageId': 'EventFlowMsg/Dm_SY_0035:Dm_SY_0035_02', 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})

        call AutoSave()

      case 2:
        PlayerRaulHand.EventPlayAS({'ASName': 'SageEmm_Thunder', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        Player.EventTriggerEmitXLink({'ELinkKey': 'Dm_SY_0035_FollowSphere_GoOut_Thunder', 'SLinkKey': 'SageRingShine_0'})

        call C01()

        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'PlayerStatus.Companion.Electric.IsPlayedSoulSageFirstAppearanceEvent', 'Index': -1, 'Value': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 12})
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'Actor1ActorName': 'Sage_Soul_Gerudo', 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': False, 'PosVector': [0.9359999895095825, 2.072999954223633, 3.572000026702881], 'AtVector': [-0.2879999876022339, 0.7680000066757202, -2.0940001010894775], 'CameraCollisionMode': 1, 'LatShiftRange': 60.0, 'LongShiftRange': 180.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        SystemTextNPC.EventTalk({'IsCloseDialog': False, 'EndDialogOption': 3, 'MessageId': 'EventFlowMsg/Dm_SY_0035:Dm_SY_0035_03', 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})

        call AutoSave()

      case 3:
        PlayerRaulHand.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'SageEmm_Wind'})
        Player.EventTriggerEmitXLink({'ELinkKey': 'Dm_SY_0035_FollowSphere_GoOut_Wind', 'SLinkKey': 'SageRingShine_0'})

        call C01()

        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'PlayerStatus.Companion.Wind.IsPlayedSoulSageFirstAppearanceEvent', 'Index': -1, 'Value': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 12})
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'Actor1ActorName': 'Sage_Soul_Rito', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsWaitEnd': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVector': [0.10499999672174454, 1.909000039100647, 4.625], 'AtVector': [0.20499999821186066, 0.9229999780654907, -1.2339999675750732], 'CameraCollisionMode': 1, 'LatShiftRange': 60.0, 'LongShiftRange': 180.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        SystemTextNPC.EventTalk({'IsCloseDialog': False, 'EndDialogOption': 3, 'MessageId': 'EventFlowMsg/Dm_SY_0035:Dm_SY_0035_04', 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})

        call AutoSave()

      case 4:
        PlayerRaulHand.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'SageEmm_Spirit'})
        Player.EventTriggerEmitXLink({'ELinkKey': 'Dm_SY_0035_FollowSphere_GoOut_Spirit', 'SLinkKey': 'SageRingShine_0'})

        call C01()

        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'PlayerStatus.Companion.Soul.IsPlayedSoulSageFirstAppearanceEvent', 'Index': -1, 'Value': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 12})
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'IsIgnoreAtVectorReferenceActorRot': True, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'Actor1ActorName': 'Sage_Soul_Zonau', 'IsWaitEnd': False, 'PosVector': [0.800000011920929, 2.9830000400543213, 7.4629998207092285], 'AtVector': [0.1899999976158142, 3.069000005722046, 1.5529999732971191], 'CameraCollisionMode': 1, 'LatShiftRange': 60.0, 'LongShiftRange': 180.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        SystemTextNPC.EventTalk({'IsCloseDialog': False, 'EndDialogOption': 3, 'MessageId': 'EventFlowMsg/Dm_SY_0035:Dm_SY_0035_05', 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})

        call AutoSave()

    }
}

void Init() {

    call Common.InitPlayState({'IsUnequip': True, 'IsRidableGetOff': True})

    Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'DemoWait', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}

void C01() {
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})

    fork {
        Player.EventPlayerPlayASForFlowchart({'IsAllSlot': True, 'UseAnmDriven': False, 'KeepOneTimeAnm': True, 'ASCommand': 'C01', 'ForceFadeFrame': 10.0, 'IsWaitEnd': False, 'ClothWarpMode': 0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'Actor1ActorName': 'Player', 'PosVector': [-0.7900000214576721, 1.8200000524520874, 1.9199999570846558], 'AtVector': [-0.05000000074505806, 1.3200000524520874, 0.30000001192092896], 'TargetFovy': 20.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 45.0, 'LongShiftRange': 120.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
    }

}

void AutoSave() {
    GameSystemActor.EventTriggerRequestAutoSave()
}
