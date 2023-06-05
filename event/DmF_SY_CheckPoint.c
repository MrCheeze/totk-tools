-------- EventFlow: DmF_SY_CheckPoint --------

Actor: GameSystemActor[Pad]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventWait', 'EventTriggerSendKeepStateMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventTriggerRemoveBreakLifeAll', 'EventTriggerPlayerLookAtObject', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventPlayerWarpToStarterLinkAnchor', 'EventPlayerSetHeadArmorInvisible', 'EventWarpOnGround']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/DmF_SY_CheckPoint/DmF_SY_CheckPoint_Link/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/DmF_SY_CheckPoint_Link.root.as', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: FldObj_MinusFieldCheckPoint_A_01
entrypoint: None()
actions: ['EventDoNothing', 'EventPlayAS', 'EventTriggerSetOpenOwnGameData', 'EventTriggerShowUndergroundMaskOpen', 'EventTriggerControlPointLight', 'EventTriggerParticipateEvent', 'EventTriggerCheckPointSetIsDisplayFoliage', 'EventTriggerEmitXLink', 'EventTriggerRequestExecuteUpdateMinusFieldMapMask', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: DgnObj_WarpPoint_Zonau_A_04
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventCloseMinusMenu', 'EventTriggerRequestAutoSave', 'EventTriggerSetDisplayHeartGauge', 'EventEventFadeOut', 'EventEventFadeIn', 'EventTriggerDestroyPrevMinusMapMask', 'EventWaitHeartGaugeStable', 'EventTriggerSetMessageLogDisableSectionStart', 'EventTriggerSetMessageLogDisableSectionEnd', 'EventCloseMessageDialog']
queries: ['EventQueryIsOpenAllCheckPoint']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTriggerSkipAcceptStart', 'EventTriggerSkipEnd']
queries: ['EventQueryIsEventSkipedMostRecent']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventRequestActor
entrypoint: None()
actions: ['EventTriggerSetEventBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundStartSound', 'EventSoundRequestDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: MinusMenuSystemTextNPC
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryHavePlayedEvent']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SystemTextNPC
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor[1]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventEffectAddELinkHiddenSetting']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void EntryPoint0() {
    if !GameDataActor.EventQueryHavePlayedEvent({'EventName': 'DmF_SY_CheckPoint'}) {

        call Ready()

        EventSystemActor.EventTriggerSkipAcceptStart({'SpecialEventActionType': 3})

        call C01()


        call C02()


        call C03()


        call C04()


        call Pad_On_Link()

        EventSystemActor.EventTriggerSkipEnd({'SpecialEventActionType': 4, 'BlackInSkipEnd': False})
        if !EventSystemActor.EventQueryIsEventSkipedMostRecent() {
            GameSystemActor.EventEventFadeIn({'Color': 1, 'IsNoPlayAnime': True, 'Length': 0, 'IsWaitEnd': True})
        }

        call Pad_On()

        Event96:

        call Map_Open()


        call Pad_Off()


        call End()

    } else {

        call Ready()


        call C01()


        call C02()


        call C03()


        call C04()


        call Pad_On_Link()


        call Pad_On()

        goto Event96
    }
}

void C01() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'MoveTime': 0, 'IsWaitEnd': True, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [-2.2300000190734863, 0.8899999856948853, -6.340000152587891], 'AtVector': [-0.8500000238418579, 2.0399999618530273, -2.369999885559082], 'TargetFovy': 50.099998474121094, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventWait({'IsWaitEnd': True, 'Frames': 75})
        FldObj_MinusFieldCheckPoint_A_01.EventPlayAS({'IsAnimeDriven': False, 'IsAllSlot': False, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'ASName': 'OnWait_After'})
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': True, 'IsLinearMove': False, 'CameraCollisionMode': 0, 'MoveTotargetPosType': 1, 'MoveTime': 117, 'Actor1ActorName': 'Player', 'PosVector': [-2.2300000190734863, 0.8899999856948853, -6.340000152587891], 'AtVector': [-1.5399999618530273, 4.679999828338623, -4.300000190734863], 'TargetFovy': 50.099998474121094, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Player.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'InstanceName': '', 'ActorName': 'StartPos', 'NotChangeRot': True, 'UseDemoWait': True})
        Player.EventWarpOnGround({'IsWaitEnd': True, 'IsIncludeWater': True, 'OffsetY': 0.0, 'UseDemoWait': True})
        Player.EventTriggerPlayerLookAtObject({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'PosOffset': [0.0, 6.0, 0.0], 'ActorName': '', 'Target': 2, 'TurnFaceControlType': 1})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'DemoWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': 25.0, 'IsAllSlot': True, 'ASCommand': 'Link_Hand_Up', 'IsWaitEnd': False, 'ClothWarpMode': 0})
    } {
        FldObj_MinusFieldCheckPoint_A_01.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_CheckPoint_Obj_MinusFieldCheckPoint_Authentication', 'SLinkKey': 'Dm_Zonau_Authentication'})
    } {
        EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'FldObj_MinusFieldCheckPoint_A_01', 'KeyName': 'AuthenticationMark'})
    }

}

void C04() {

    fork {
        EventSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 32})
        EventRequestActor.EventTriggerSetEventBool({'Bool': True})
        DgnObj_WarpPoint_Zonau_A_04.EventPlayAS({'ASName': 'On', 'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsAllSlot': False, 'Partial': '', 'ForceFadeInFrame': -1.0})
        EventSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 15})
        DgnObj_WarpPoint_Zonau_A_04.EventPlayAS({'ASName': 'OnWait', 'IsWaitEnd': False, 'IsAnimeDriven': False, 'IsAllSlot': False, 'Partial': '', 'ForceFadeInFrame': 30.0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 46})
        Player.EventTriggerPlayerLookAtObject({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 3, 'TurnFaceControlType': 1, 'ActorName': 'DgnObj_WarpPoint_Zonau_A_04', 'PosOffset': [0.0, 1.0, 0.0]})
    } {
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsWaitEnd': True, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'FldObj_MinusFieldCheckPoint_A_01', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EndRecelerateRate': 0.0, 'MoveTime': 0, 'StartAccelerateRate': 1.0, 'TargetFovy': 60.0, 'PosVector': [-1.225000023841858, 3.072000026702881, 12.585000038146973], 'AtVector': [0.11699999868869781, 6.77400016784668, -1.277999997138977], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventWait({'IsWaitEnd': True, 'Frames': 133})
    } {
        FldObj_MinusFieldCheckPoint_A_01.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_CheckPoint_Obj_MinusFieldCheckPoint_Transcription', 'SLinkKey': 'DmF_SY_CheckPoint_Obj_MinusFieldCheckPoint_Transcription'})
    }

}

void Map_Open() {
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 85})
    GameSystemActor.EventTriggerSetMessageLogDisableSectionStart()
    MinusMenuSystemTextNPC.EventTalk({'ChoiceNumber': 0, 'ASName': '', 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/DmF_SY_CheckPoint:Text_00', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'EndDialogOption': 3, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': True, 'IsCloseDialog': True, 'IsWaitEnd': True, 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventTriggerSetMessageLogDisableSectionEnd()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': False})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [0.0, 1.7999999523162842, -5.300000190734863], 'AtVector': [0.0, 1.7999999523162842, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})

    fork {
        GameSystemActor.EventCloseMinusMenu({'IsWaitEnd': True})
    } {
        Player.EventPlayerSetHeadArmorInvisible({'Flag': True})
    }

}

void Pad_Off() {

    fork {
        GameSystemActor[Pad].EventWait({'IsWaitEnd': True, 'Frames': 18})
    } {
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'LookPadOff', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'DemoWait', 'IsWaitEnd': False, 'ClothWarpMode': 0})
    }

}

void Break_Heal() {
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    GameSystemActor.EventTriggerSetDisplayHeartGauge({'IsDisplayHeartGaugeExtra': True, 'IsDisplayHeartGauge': True, 'IsDisplayAtLT': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    Player.EventTriggerRemoveBreakLifeAll()
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    GameSystemActor.EventWaitHeartGaugeStable({'IsWaitEnd': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}

void Ready() {
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:Bgmミュート(フェード普通)', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})

    fork {

        call Common.InitPlayStateTrigger({'IsUnequip': True, 'IsRidableGetOff': True})

    } {
        FldObj_MinusFieldCheckPoint_A_01.EventTriggerParticipateEvent()
        FldObj_MinusFieldCheckPoint_A_01.EventDoNothing({'IsWaitEnd': False})
    }

}

void Pad_On() {

    fork {
        FldObj_MinusFieldCheckPoint_A_01.EventTriggerShowUndergroundMaskOpen()
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        SoundSystemActor.EventSoundStartSound({'IsIgnoreDucking': True, 'SLinkKey': 'Dm_UnderGroundMapDownload'})
    }

}

void C03() {
    GameSystemActor.EventEventFadeOut({'Color': 1, 'Length': 2, 'IsWaitEnd': True, 'IsNoPlayAnime': False})
    FldObj_MinusFieldCheckPoint_A_01.EventTriggerRequestExecuteUpdateMinusFieldMapMask()
    FldObj_MinusFieldCheckPoint_A_01.EventPlayAS({'ASName': 'OpenWait', 'IsWaitEnd': False, 'IsAnimeDriven': False, 'IsAllSlot': False, 'Partial': '', 'ForceFadeInFrame': -1.0})
    FldObj_MinusFieldCheckPoint_A_01.EventTriggerCheckPointSetIsDisplayFoliage({'value': True})
    FldObj_MinusFieldCheckPoint_A_01.EventTriggerXLinkFadeByKey({'SLinkKey': '', 'ELinkKey': 'DmF_SY_CheckPoint_Obj_MinusFieldCheckPoint_LightRipples', 'IsKill': False})
    FldObj_MinusFieldCheckPoint_A_01.EventTriggerXLinkFadeByKey({'ELinkKey': 'DmF_SY_CheckPoint_Obj_MinusFieldCheckPoint_DarkRevesal', 'SLinkKey': '', 'IsKill': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 7})

    fork {
        GameSystemActor.EventEventFadeIn({'Color': 1, 'Length': 2, 'IsNoPlayAnime': False, 'IsWaitEnd': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 150})
    } {
        FldObj_MinusFieldCheckPoint_A_01.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'DmF_SY_CheckPoint_Obj_MinusFieldCheckPoint_LightRipples_After'})
    }

}

void C02() {
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 34})

    fork {

        fork {
            EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'MoveTime': 0, 'IsWaitEnd': True, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'FldObj_MinusFieldCheckPoint_A_01', 'PosVector': [-15.270000457763672, 29.959999084472656, 21.469999313354492], 'AtVector': [-13.829999923706055, 35.400001525878906, 19.600000381469727], 'TargetFovy': 48.20000076293945, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            EventCamera.EventWait({'IsWaitEnd': True, 'Frames': 59})
            EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsWaitEnd': True, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 135, 'Actor1ActorName': 'FldObj_MinusFieldCheckPoint_A_01', 'PosVector': [-2.5999999046325684, 23.06999969482422, 27.280000686645508], 'AtVector': [-1.9800000190734863, 23.459999084472656, 21.399999618530273], 'TargetFovy': 48.20000076293945, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EndRecelerateRate': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            EventCamera.EventWait({'IsWaitEnd': True, 'Frames': 115})
            EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsWaitEnd': True, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'FldObj_MinusFieldCheckPoint_A_01', 'PosVector': [6.210000038146973, 19.610000610351562, 27.280000686645508], 'AtVector': [5.119999885559082, 16.309999465942383, 22.479999542236328], 'TargetFovy': 48.20000076293945, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EndRecelerateRate': 0.0, 'StartAccelerateRate': 0.10000000149011612, 'MoveTime': 77, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        } {
            Player.EventPlayerPlayASForFlowchart({'ASCommand': 'DemoWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            Player.EventTriggerPlayerRequestLookAtTheFrontLock()
        }

    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        FldObj_MinusFieldCheckPoint_A_01.EventPlayAS({'IsAnimeDriven': False, 'IsAllSlot': False, 'Partial': '', 'ForceFadeInFrame': -1.0, 'ASName': 'Root_Open', 'IsWaitEnd': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 164})

        fork {
            FldObj_MinusFieldCheckPoint_A_01.EventPlayAS({'IsAnimeDriven': False, 'IsAllSlot': False, 'Partial': '', 'ForceFadeInFrame': -1.0, 'ASName': 'Open', 'IsWaitEnd': False})
        } {
            FldObj_MinusFieldCheckPoint_A_01.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_CheckPoint_Obj_MinusFieldCheckPoint_Flash', 'SLinkKey': 'DmF_SY_CheckPoint_Obj_MinusFieldCheckPoint_Flash'})
        }

        FldObj_MinusFieldCheckPoint_A_01.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_CheckPoint_Obj_MinusFieldCheckPoint_DarkRevesal', 'SLinkKey': ''})
        FldObj_MinusFieldCheckPoint_A_01.EventTriggerSetOpenOwnGameData()
        FldObj_MinusFieldCheckPoint_A_01.EventTriggerControlPointLight({'IsEnable': True})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 106})
        FldObj_MinusFieldCheckPoint_A_01.EventPlayAS({'IsAnimeDriven': False, 'IsAllSlot': False, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'ASName': 'Root_Open_2nd'})
        EventSystemActor.EventWait({'IsWaitEnd': False, 'Frames': 58})
    }

    FldObj_MinusFieldCheckPoint_A_01.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'DmF_SY_CheckPoint_Obj_MinusFieldCheckPoint_LightRipples'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 96})
}

void Pad_On_Link() {
    Player.EventTriggerPlayerRequestLookAtTheFrontLock()
    EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'MoveTime': 0, 'IsWaitEnd': True, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [-3.009999990463257, 1.9199999570846558, -1.7999999523162842], 'AtVector': [0.5400000214576721, 0.8100000023841858, 0.46000000834465027], 'TargetFovy': 35.400001525878906, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'LookPad', 'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})

    fork {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

        fork {
            EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'TargetFovy': 36.400001525878906, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'AtVector': [-0.006000000052154064, 0.47999998927116394, 0.5600000023841858], 'PosVector': [-0.006000000052154064, 1.5299999713897705, 0.11999999731779099], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        } {
            Player.EventPlayerSetHeadArmorInvisible({'Flag': False})
        }

    } {
        GameSystemActor[Pad].EventWait({'IsWaitEnd': True, 'Frames': 16})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 12})
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'TargetFovy': 36.400001525878906, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 8, 'CameraCollisionLookAtActor': 0, 'PosVector': [-0.006000000052154064, 1.409999966621399, 0.17399999499320984], 'AtVector': [-0.006000000052154064, 0.47999998927116394, 0.5540000200271606], 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
}

void End() {
    if !GameSystemActor.EventQueryIsOpenAllCheckPoint() {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsGetReward_CheckPoint', 'Index': -1}) {
            Event55:

            call Break_Heal()

            GameSystemActor.EventTriggerRequestAutoSave()
            GameSystemActor.EventTriggerDestroyPrevMinusMapMask()
        } else {
            SystemTextNPC.EventTalk({'MessageId': 'EventFlowMsg/DmF_SY_CheckPoint:Text_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Obj_CheckPointHonor_00'})

            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'IsGetReward_CheckPoint'})
            goto Event55
        }
    } else {
        goto Event55
    }
}
