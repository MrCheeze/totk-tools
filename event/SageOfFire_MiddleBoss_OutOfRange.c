-------- EventFlow: SageOfFire_MiddleBoss_OutOfRange --------

Actor: Player
entrypoint: None()
actions: ['EventPlayerHorseGetOff', 'EventPlayerWarpToStarterLinkAnchor', 'EventPlayerClimbOff']
queries: ['EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerSendReserveCameraResetMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn', 'EventRequestSageSkillCancel', 'EventTraverseAroundAndWaitCreateActor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Goron_Yunbo_Sage[DynamicGenerateSage]
entrypoint: None()
actions: ['EventTalk', 'EventSageWarpToStarterLinkAnchor', 'EventTriggerBecomeSpeaker', 'EventNPCTurnToTarget', 'EventPlayAS', 'EventUnequipWeapon']
queries: ['EventQueryCheckIsSageRiding']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'TextureReplaceType': 0, 'IsBindNearestActor': False}

void EntryPoint0() {

    call Common.AirStartUP_Player()

    switch Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventQueryCheckIsSageRiding() {
      case [0, 1]:
        Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventUnequipWeapon({'IsWaitEnd': True})
        if !Player.EventQueryCheckPlayerState({'State': 5}) {
            Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            Event5:
            Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/SageOfFire:talk157', 'IsNotOpenIfSkipedMostRecent': False})
            Event6:
            GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
            Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
            Player.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'StartPos', 'IsWaitEnd': True, 'InstanceName': 'Player_RestartMiddleBoss', 'NotChangeRot': False, 'UseDemoWait': True})
            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'GoronMiddleBoss_AirPlaneReset'})
            EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0})
            GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
            Player.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'StartPos', 'IsWaitEnd': True, 'InstanceName': 'Player_RestartMiddleBoss', 'NotChangeRot': False, 'UseDemoWait': True})
            Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventSageWarpToStarterLinkAnchor({'IsWaitEnd': True, 'InstanceName': 'Yunbo_RestartMiddleBoss', 'ActorName': 'DestinationAnchor', 'NotChangeRot': False})
            GameSystemActor.EventRequestSageSkillCancel({'IsWaitEnd': True})
            Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventPlayAS({'ASName': 'BeforeBattleWait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
            GameSystemActor.EventEventFadeIn({'IsNoPlayAnime': False, 'Color': 0, 'Length': 1, 'IsWaitEnd': False})
        } else
        if Player.EventQueryCheckPlayerState({'State': 6}) {
            Player.EventPlayerClimbOff({'IsWaitEnd': True})
        }
        Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventTriggerBecomeSpeaker()

        call InitTalk.InitTalkExceptCameraOnEvent({'Arg_Turn': 3, 'Self': ActorIdentifier(name="Npc_Goron_Yunbo_Sage", sub_name="DynamicGenerateSage")})

        goto Event5
      case 2:
        Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventSageWarpToStarterLinkAnchor({'IsWaitEnd': True, 'InstanceName': 'Yunbo_RestartMiddleBoss', 'ActorName': 'DestinationAnchor', 'NotChangeRot': False})
        Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/SageOfFire:talk157', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event6
    }
}
