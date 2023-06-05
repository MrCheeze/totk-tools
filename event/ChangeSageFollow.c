-------- EventFlow: ChangeSageFollow --------

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventWaitForDynamicSagePresence', 'EventTriggerRequestAutoSave', 'EventTriggerPlayerKeepRideOnGolem']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerUnequip', 'EventTriggerPlayerLookAtObject', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventPlayerWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'UseEventModelAnime': '', 'UseEventAS': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerCameraSavePoint', 'EventMoveCameraToSavePoint']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataEnum']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Zora_Prince_Sage[DynamicGenerateSage]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Npc_Goron_Yunbo_Sage[DynamicGenerateSage]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Npc_Tulin_Sage[DynamicGenerateSage]
entrypoint: None()
actions: ['EventNpcRitoLand']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Bow_Strong': '', 'EquipmentUser_Bow_Strong_EquipmentState': 0, 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Npc_Gerudo_Queen_Young[DynamicGenerateSage]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Npc_RaumiGolem_Sage[DynamicGenerateSage]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryInputSageType']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_EventStarter[JoinSage(Sage)]
entrypoint: JoinSage(Sage)
actions: ['EventNPCTurnToTarget', 'EventTalk', 'EventTriggerChangeEmotion']
queries: []
params: None

Actor: Npc_EventStarter[JoinSageWindSubFlow(Npc_Tulin_Sage)]
entrypoint: JoinSageWindSubFlow(Npc_Tulin_Sage)
actions: ['EventTalk']
queries: []
params: None

void JoinSageWater() {
    Event4:

    call JoinSage({'TargetSageActorName': 'Npc_Zora_Prince_Sage', 'TargetSageInstanceName': 'DynamicGenerateSage', 'MessageId01': 'EventFlowMsg/ChangeSageFollow:talk_03', 'MessageId02': 'EventFlowMsg/ChangeSageFollow:talk_04', 'SageType': 1, 'Sage': ActorIdentifier(name="Npc_Zora_Prince_Sage", sub_name="DynamicGenerateSage")})

    GameDataActor.EventTriggerSetGameDataEnum({'GameDataName': 'PlayerStatus.Companion.Water.JoiningCondition', 'Index': -1, 'Value': 'Joining'})

    call AutoSave()

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
}

void JoinWarpSageWater() {

    call WarpOut({'SageType': 1})

    goto Event4
}

void JoinSageWind() {
    Npc_Tulin_Sage[DynamicGenerateSage].EventNpcRitoLand({'IsWaitEnd': True, 'FlagOnly': True, 'FallSpped': 1.0, 'LandingHeight': 2.0, 'IsChangePhysicsSettingDynamic': False})
    Event96:

    call JoinSage({'TargetSageInstanceName': 'DynamicGenerateSage', 'TargetSageActorName': 'Npc_Tulin_Sage', 'MessageId01': 'EventFlowMsg/ChangeSageFollow:talk_13', 'MessageId02': 'EventFlowMsg/ChangeSageFollow:talk_13', 'SageType': 4, 'Sage': ActorIdentifier(name="Npc_Tulin_Sage", sub_name="DynamicGenerateSage")})

    GameDataActor.EventTriggerSetGameDataEnum({'Index': -1, 'GameDataName': 'PlayerStatus.Companion.Wind.JoiningCondition', 'Value': 'Joining'})

    call AutoSave()

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
}

void JoinWarpSageWind() {

    call WarpOut({'SageType': 4})

    goto Event96
}

void JoinSageFire() {
    Event6:

    call JoinSage({'TargetSageInstanceName': 'DynamicGenerateSage', 'TargetSageActorName': 'Npc_Goron_Yunbo_Sage', 'MessageId01': 'EventFlowMsg/ChangeSageFollow:talk_23', 'MessageId02': 'EventFlowMsg/ChangeSageFollow:talk_24', 'SageType': 2, 'Sage': ActorIdentifier(name="Npc_Goron_Yunbo_Sage", sub_name="DynamicGenerateSage")})

    GameDataActor.EventTriggerSetGameDataEnum({'Index': -1, 'GameDataName': 'PlayerStatus.Companion.Fire.JoiningCondition', 'Value': 'Joining'})

    call AutoSave()

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
}

void JoinWarpSageFire() {

    call WarpOut({'SageType': 2})

    goto Event6
}

void JoinSageElectric() {
    Event9:

    call JoinSage({'TargetSageInstanceName': 'DynamicGenerateSage', 'TargetSageActorName': 'Npc_Gerudo_Queen_Young', 'MessageId01': 'EventFlowMsg/ChangeSageFollow:talk_33', 'MessageId02': 'EventFlowMsg/ChangeSageFollow:talk_34', 'SageType': 3, 'Sage': ActorIdentifier(name="Npc_Gerudo_Queen_Young", sub_name="DynamicGenerateSage")})

    GameDataActor.EventTriggerSetGameDataEnum({'Index': -1, 'GameDataName': 'PlayerStatus.Companion.Electric.JoiningCondition', 'Value': 'Joining'})

    call AutoSave()

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
}

void JoinWarpSageElectric() {

    call WarpOut({'SageType': 3})

    goto Event9
}

void JoinSageSoul() {
    Event16:

    call JoinSage({'TargetSageInstanceName': 'DynamicGenerateSage', 'TargetSageActorName': 'Npc_RaumiGolem_Sage', 'MessageId01': 'EventFlowMsg/ChangeSageFollow:talk_43', 'MessageId02': 'EventFlowMsg/ChangeSageFollow:talk_44', 'SageType': 5, 'Sage': ActorIdentifier(name="Npc_RaumiGolem_Sage", sub_name="DynamicGenerateSage")})

    GameDataActor.EventTriggerSetGameDataEnum({'Index': -1, 'GameDataName': 'PlayerStatus.Companion.Soul.JoiningCondition', 'Value': 'Joining'})

    call AutoSave()

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
}

void JoinWarpSageSoul() {

    call WarpOut({'SageType': 5})

    goto Event16
}

void WarpOut() {
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'DmF_SY_WarpOut'})
    GameSystemActor.EventWaitForDynamicSagePresence({'IsWaitEnd': True, 'SageType': 'SageType'})
    Player.EventTriggerPlayerRequestLookAtTheFrontLock()
}

void JoinSage() {
    GameSystemActor.EventTriggerPlayerKeepRideOnGolem()

    fork {
        Npc_EventStarter[JoinSage(Sage)].EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        switch ChallengeSystemActor.EventQueryInputSageType({'SageType': 'SageType'}) {
          case [0, 1, 2, 3, 5]:
            Npc_EventStarter[JoinSage(Sage)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'MessageId01', 'NotPlayLipSyncAnim': False, 'IsNotBecomeSpeaker': True, 'IsNotOpenIfSkipedMostRecent': False})
          case 4:
            Npc_EventStarter[JoinSage(Sage)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsPlayASAllSlot': False, 'MessageId': 'MessageId01', 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotBecomeSpeaker': True, 'IsNotOpenIfSkipedMostRecent': False})
        }
    } {
        Player.EventPlayerWait({'IsWaitEnd': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
        Player.EventTriggerPlayerLookAtObject({'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'ActorName': 'TargetSageActorName', 'InstanceName': 'TargetSageInstanceName', 'TurnFaceControlType': 1})
        Player.EventPlayerUnequip({'IsWaitEnd': True})
    }

    EventCamera.EventTriggerCameraSavePoint()
    switch ChallengeSystemActor.EventQueryInputSageType({'SageType': 'SageType'}) {
      case 0:
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'TargetFovy': 50.0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'Actor1ActorName': 'TargetSageActorName', 'Actor1InstanceName': 'TargetSageInstanceName', 'PosVector': [2.5899999141693115, 2.2799999713897705, 3.9700000286102295], 'AtVector': [0.7200000286102295, 1.9500000476837158, 1.2400000095367432], 'LatShiftRange': 60.0, 'LongShiftRange': 180.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        Event93:
        Npc_EventStarter[JoinSage(Sage)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'MessageId02', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Event108:
        EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
        GameSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
        Npc_EventStarter[JoinSage(Sage)].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
      case [1, 2, 5]:
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'PosVector': [2.609999895095825, 2.2799999713897705, 3.740000009536743], 'AtVector': [0.699999988079071, 1.4800000190734863, 1.1299999952316284], 'TargetFovy': 50.0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'Actor1ActorName': 'TargetSageActorName', 'Actor1InstanceName': 'TargetSageInstanceName', 'LatShiftRange': 60.0, 'LongShiftRange': 180.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        goto Event93
      case 3:
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'PosVector': [2.609999895095825, 2.2799999713897705, 3.740000009536743], 'AtVector': [0.699999988079071, 1.4800000190734863, 1.1299999952316284], 'TargetFovy': 50.0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'Actor1ActorName': 'TargetSageActorName', 'Actor1InstanceName': 'TargetSageInstanceName', 'LatShiftRange': 60.0, 'LongShiftRange': 180.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'SageOfWind_JoiningByUnexpectedRoute', 'Index': -1}) {

            call JoinSageWindSubFlow({'Npc_Tulin_Sage': 'Sage'})

        } else {

            call JoinSageWindSubFlow({'Npc_Tulin_Sage': 'Sage'})

        }
        goto Event108
      case 4:
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'TargetFovy': 50.0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'Actor1ActorName': 'TargetSageActorName', 'Actor1InstanceName': 'TargetSageInstanceName', 'PosVector': [1.2899999618530273, 5.119999885559082, 4.639999866485596], 'AtVector': [-0.33000001311302185, 4.300000190734863, -0.9700000286102295], 'LatShiftRange': 60.0, 'LongShiftRange': 180.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        Npc_EventStarter[JoinSage(Sage)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsPlayASAllSlot': False, 'MessageId': 'MessageId02', 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event108
    }
}

void JoinSageWindSubFlow() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfWind_IsAfter_IpponSugi_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfWind_IsAfter_GetBack_Exp'}) {
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfWind_IsAfter_DefeatEnemy_Exp'}) {
                Event81:
                Npc_EventStarter[JoinSageWindSubFlow(Npc_Tulin_Sage)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/ChangeSageFollow:talk_14', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_EventStarter[JoinSageWindSubFlow(Npc_Tulin_Sage)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/ChangeSageFollow:talk_27', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
        } else {
            Npc_EventStarter[JoinSageWindSubFlow(Npc_Tulin_Sage)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/ChangeSageFollow:talk_18', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
    } else {
        goto Event81
    }
}

void AutoSave() {
    GameSystemActor.EventTriggerRequestAutoSave()
}
