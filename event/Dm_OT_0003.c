-------- EventFlow: Dm_OT_0003 --------

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeIn']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: []
queries: ['EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerWarpToTargetActor', 'EventWarpOnGround', 'EventGoOffstageForUser']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundControlBGM', 'EventTriggerStartBgmSimple']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor[0]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Orchestra_M_00[DressFairy_03(Miroyan)]
entrypoint: DressFairy_03(Miroyan)
actions: ['EventGoOffstageForUser']
queries: []
params: None

Actor: Npc_Orchestra_W_00[DressFairy_03(Vioran)]
entrypoint: DressFairy_03(Vioran)
actions: ['EventWarpToTargetActor', 'EventPlayAS']
queries: []
params: None

Actor: Npc_Orchestra_M_00[DressFairy_01(Miroyan)]
entrypoint: DressFairy_01(Miroyan)
actions: []
queries: []
params: None

Actor: Npc_Orchestra_W_00[DressFairy_01(Vioran)]
entrypoint: DressFairy_01(Vioran)
actions: []
queries: []
params: None

Actor: Npc_Orchestra_M_H[DressFairy_01(Yuforu)]
entrypoint: DressFairy_01(Yuforu)
actions: []
queries: []
params: None

Actor: Npc_Orchestra_BT_F[DressFairy_01(Fei)]
entrypoint: DressFairy_01(Fei)
actions: []
queries: []
params: None

Actor: Npc_Orchestra_M_P[DressFairy_01(Bitu)]
entrypoint: DressFairy_01(Bitu)
actions: []
queries: []
params: None

Actor: Npc_Orchestra_M_00[DressFairy_00(Miroyan)]
entrypoint: DressFairy_00(Miroyan)
actions: []
queries: []
params: None

Actor: Npc_Orchestra_W_00[DressFairy_00(Vioran)]
entrypoint: DressFairy_00(Vioran)
actions: []
queries: []
params: None

Actor: Npc_Orchestra_M_P[DressFairy_00(Bitu)]
entrypoint: DressFairy_00(Bitu)
actions: []
queries: []
params: None

Actor: Npc_Orchestra_BT_F[DressFairy_00(Fei)]
entrypoint: DressFairy_00(Fei)
actions: []
queries: []
params: None

Actor: Npc_Orchestra_M_H[DressFairy_00(Yuforu)]
entrypoint: DressFairy_00(Yuforu)
actions: []
queries: []
params: None

Actor: Npc_Orchestra_M_00[DressFairy_02(Miroyan)]
entrypoint: DressFairy_02(Miroyan)
actions: []
queries: []
params: None

Actor: Npc_Orchestra_W_00[DressFairy_02(Vioran)]
entrypoint: DressFairy_02(Vioran)
actions: []
queries: []
params: None

Actor: Npc_Orchestra_BT_F[DressFairy_02(Fei)]
entrypoint: DressFairy_02(Fei)
actions: []
queries: []
params: None

Actor: Npc_Orchestra_M_H[DressFairy_02(Yuforu)]
entrypoint: DressFairy_02(Yuforu)
actions: []
queries: []
params: None

Actor: Npc_Orchestra_M_P[DressFairy_02(Bitu)]
entrypoint: DressFairy_02(Bitu)
actions: []
queries: []
params: None

Actor: Npc_Orchestra_BT_F[Entry_00(Fei)]
entrypoint: Entry_00(Fei)
actions: []
queries: []
params: None

Actor: Npc_Orchestra_M_H[Entry_00(Yuforu)]
entrypoint: Entry_00(Yuforu)
actions: []
queries: []
params: None

Actor: Npc_Orchestra_M_00[Entry_00(Miroyan)]
entrypoint: Entry_00(Miroyan)
actions: []
queries: []
params: None

Actor: Npc_Orchestra_W_00[Entry_00(Vioran_000)]
entrypoint: Entry_00(Vioran_000)
actions: []
queries: []
params: None

Actor: Npc_Orchestra_M_P[Entry_00(Bitu)]
entrypoint: Entry_00(Bitu)
actions: []
queries: []
params: None

Actor: Npc_Orchestra_BT_F[Entry_01(Fei)]
entrypoint: Entry_01(Fei)
actions: []
queries: []
params: None

Actor: Npc_Orchestra_M_P[Entry_01(Bitu)]
entrypoint: Entry_01(Bitu)
actions: []
queries: []
params: None

Actor: Npc_Orchestra_M_00[Entry_01(Miroyan)]
entrypoint: Entry_01(Miroyan)
actions: []
queries: []
params: None

Actor: Npc_Orchestra_W_00[Entry_01(Vioran_000)]
entrypoint: Entry_01(Vioran_000)
actions: []
queries: []
params: None

Actor: Npc_Orchestra_M_P[Entry_01(Yuforu)]
entrypoint: Entry_01(Yuforu)
actions: []
queries: []
params: None

Actor: Npc_Orchestra_M_H[Entry_02(Yuforu)]
entrypoint: Entry_02(Yuforu)
actions: []
queries: []
params: None

Actor: Npc_Orchestra_M_P[Entry_02(Bitu)]
entrypoint: Entry_02(Bitu)
actions: []
queries: []
params: None

Actor: Npc_Orchestra_M_00[Entry_02(Miroyan)]
entrypoint: Entry_02(Miroyan)
actions: []
queries: []
params: None

Actor: Npc_Orchestra_W_00[Entry_02(Vioran_000)]
entrypoint: Entry_02(Vioran_000)
actions: []
queries: []
params: None

Actor: Npc_Orchestra_M_P[Entry_02(Fei)]
entrypoint: Entry_02(Fei)
actions: []
queries: []
params: None

Actor: Npc_Orchestra_M_00[Essential(Miroyan)]
entrypoint: Essential(Miroyan)
actions: ['EventWarpToTargetActor', 'EventPlayAS', 'EventTriggerChangeEmotion']
queries: []
params: None

Actor: Npc_Orchestra_M_00[Short_C01(Miroyan)]
entrypoint: Short_C01(Miroyan)
actions: ['EventTriggerChangeEmotion', 'EventPlayAS']
queries: []
params: None

Actor: Npc_Orchestra_W_00[Main_Player(Member)]
entrypoint: Main_Player(Member)
actions: ['EventWarpToTargetActor', 'EventPlayAS']
queries: []
params: None

Actor: Npc_Orchestra_M_H[Sub_Player1(Member)]
entrypoint: Sub_Player1(Member)
actions: ['EventWarpToTargetActor', 'EventPlayAS']
queries: []
params: None

Actor: Npc_Orchestra_M_H[Sub_Player2(Member)]
entrypoint: Sub_Player2(Member)
actions: ['EventWarpToTargetActor', 'EventPlayAS']
queries: []
params: None

Actor: Npc_Orchestra_W_00[Sub_Player0(Member)]
entrypoint: Sub_Player0(Member)
actions: ['EventWarpToTargetActor', 'EventPlayAS']
queries: []
params: None

Actor: Npc_Orchestra_M_00[Short_C02(Miroyan)]
entrypoint: Short_C02(Miroyan)
actions: ['EventTriggerChangeEmotion', 'EventPlayAS']
queries: []
params: None

Actor: Npc_Orchestra_M_00[Short_C03(Miroyan)]
entrypoint: Short_C03(Miroyan)
actions: ['EventGoOffstageForUser']
queries: []
params: None

Actor: Npc_Orchestra_M_00[Short_C04(Miroyan)]
entrypoint: Short_C04(Miroyan)
actions: ['EventPlayAS', 'EventTriggerChangeEmotion']
queries: []
params: None

Actor: Npc_Orchestra_M_00[Long_C01(Miroyan)]
entrypoint: Long_C01(Miroyan)
actions: ['EventTriggerChangeEmotion', 'EventPlayAS']
queries: []
params: None

Actor: Npc_Orchestra_M_00[Camera_Short(Miroyan)]
entrypoint: Camera_Short(Miroyan)
actions: []
queries: []
params: None

Actor: Npc_Orchestra_M_00[Camera_Long(Miroyan)]
entrypoint: Camera_Long(Miroyan)
actions: []
queries: []
params: None

Actor: Npc_Orchestra_M_P[Camera_Long(MainPlayer)]
entrypoint: Camera_Long(MainPlayer)
actions: []
queries: []
params: None

Actor: Npc_Orchestra_W_00[Camera_Long(Vioran_000)]
entrypoint: Camera_Long(Vioran_000)
actions: []
queries: []
params: None

Actor: Npc_Orchestra_M_P[Camera_Long(SubPlayer2)]
entrypoint: Camera_Long(SubPlayer2)
actions: []
queries: []
params: None

Actor: Npc_Orchestra_M_H[Camera_Long(Actor_Yuforu)]
entrypoint: Camera_Long(Actor_Yuforu)
actions: []
queries: []
params: None

Actor: Npc_Orchestra_M_P[Camera_Long(Actor_Bitu)]
entrypoint: Camera_Long(Actor_Bitu)
actions: []
queries: []
params: None

Actor: Npc_Orchestra_BT_F[Camera_Long(Actor_Fei)]
entrypoint: Camera_Long(Actor_Fei)
actions: []
queries: []
params: None

Actor: Npc_Orchestra_W_00[Long_C03(Vioran)]
entrypoint: Long_C03(Vioran)
actions: ['EventGoOffstageForUser']
queries: []
params: None

Actor: Npc_Orchestra_M_P[Long_C03(MainPlayer)]
entrypoint: Long_C03(MainPlayer)
actions: ['EventGoOffstageForUser']
queries: []
params: None

Actor: Npc_Orchestra_M_00[Long_C03(Miroyan)]
entrypoint: Long_C03(Miroyan)
actions: ['EventPlayAS', 'EventTriggerChangeEmotion']
queries: []
params: None

Actor: Npc_Orchestra_W_00[Long_C04(Vioran)]
entrypoint: Long_C04(Vioran)
actions: ['EventWait']
queries: []
params: None

Actor: Npc_Orchestra_M_P[Long_C04(MainPlayer)]
entrypoint: Long_C04(MainPlayer)
actions: ['EventWait']
queries: []
params: None

Actor: Npc_Orchestra_M_00[Long_C04(Miroyan)]
entrypoint: Long_C04(Miroyan)
actions: ['EventTriggerChangeEmotion', 'EventPlayAS']
queries: []
params: None

Actor: Npc_Orchestra_M_00_FairySiza[Long_C05(Miroyan)]
entrypoint: Long_C05(Miroyan)
actions: ['EventGoOffstageForUser']
queries: []
params: None

Actor: Npc_Orchestra_M_P[Long_C05(SubPlayer2)]
entrypoint: Long_C05(SubPlayer2)
actions: ['EventGoOffstageForUser']
queries: []
params: None

Actor: Npc_Orchestra_BT_F[Fei(Actor_Fei)]
entrypoint: Fei(Actor_Fei)
actions: []
queries: []
params: None

Actor: Npc_Orchestra_M_P[Fei(Actor_Bitu)]
entrypoint: Fei(Actor_Bitu)
actions: []
queries: []
params: None

Actor: Npc_Orchestra_M_00_FairySiza[Long_C07(Miroyan)]
entrypoint: Long_C07(Miroyan)
actions: ['EventPlayAS', 'EventTriggerChangeEmotion']
queries: []
params: None

Actor: Npc_Orchestra_BT_F[Long_C07(Actor_Fei)]
entrypoint: Long_C07(Actor_Fei)
actions: []
queries: []
params: None

Actor: Npc_Orchestra_M_00_FairySiza[Long_C05-1(Miroyan)]
entrypoint: Long_C05-1(Miroyan)
actions: ['EventTriggerChangeEmotion', 'EventPlayAS']
queries: []
params: None

Actor: Npc_Orchestra_M_P[Long_C05-1(SubPlayer2)]
entrypoint: Long_C05-1(SubPlayer2)
actions: ['EventWait']
queries: []
params: None

Actor: Npc_Orchestra_M_00_FairySiza[Yuforu(Miroyan)]
entrypoint: Yuforu(Miroyan)
actions: ['EventGoOffstageForUser']
queries: []
params: None

Actor: Npc_Orchestra_M_H[Yuforu(Actor_Yuforu)]
entrypoint: Yuforu(Actor_Yuforu)
actions: []
queries: []
params: None

Actor: Npc_Orchestra_M_H[Bitu(Actor_Yuforu)]
entrypoint: Bitu(Actor_Yuforu)
actions: []
queries: []
params: None

Actor: Npc_Orchestra_M_P[Bitu(Actor_Bitu)]
entrypoint: Bitu(Actor_Bitu)
actions: []
queries: []
params: None

void DressFairy_03() {

    call Essential({'ActorName': 'ActorName', 'Miroyan': 'Miroyan'})

    Npc_Orchestra_W_00[DressFairy_03(Vioran)].EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'InstanceName': '', 'OffsetBase': 1, 'YAngle': 180.0, 'ActorName': 'ActorName', 'PositionOffset': [0.0, 1.600000023841858, 10.0]})
    Npc_Orchestra_W_00[DressFairy_03(Vioran)].EventPlayAS({'ASName': 'Act_Orchestra', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})

    call Short_C01({'Actor1ActorName': 'ActorName', 'Miroyan': 'Miroyan'})


    call Short_C02({'Actor1ActorName': 'ActorName', 'Miroyan': 'Miroyan'})


    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': '', 'CameraCollisionMode': 0, 'IsLinearMove': True, 'MoveTime': 0, 'IsWaitEnd': True, 'PosVector': [-1.8799999952316284, 4.090000152587891, 6.21999979019165], 'AtVector': [0.5799999833106995, 2.950000047683716, 11.430000305175781], 'TargetFovy': 20.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'ActorName', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': '', 'IsWaitEnd': False, 'CameraCollisionMode': 0, 'MoveTime': 200, 'IsLinearMove': True, 'PosVector': [-1.3200000524520874, 3.8299999237060547, 7.420000076293945], 'AtVector': [0.5799999833106995, 2.950000047683716, 11.430000305175781], 'TargetFovy': 20.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'ActorName', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_Orchestra_M_00[DressFairy_03(Miroyan)].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsPauseCloth': False, 'IsPauseHelperBone': False, 'IsPauseAS': False, 'IsDisableIK': False, 'IsRidingTargetGoOffstage': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 100})
    }


    call Short_C04({'ActorName': 'ActorName', 'Miroyan': 'Miroyan'})

}

void DressFairy_01() {

    call Essential({'ActorName': 'ActorName', 'Miroyan': 'Miroyan'})


    call Sub_Player0({'Member': 'Vioran', 'ActorName': 'ActorName'})


    call Main_Player({'Member': 'Yuforu', 'ActorName': 'ActorName'})

    SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 32})

    call Entry_01({'Fei': 'Fei', 'Bitu': 'Bitu', 'ActorName': 'ActorName', 'Miroyan': 'Miroyan', 'Vioran': 'Vioran_Cam', 'Vioran_InstanceName': 'Vioran_InstanceName', 'Vioran_000': 'Vioran', 'Yuforu': 'Yuforu', 'Yuforu_000': 'Yuforu_Cam', 'Yuforu_InstanceName': 'Yuforu_InstanceName', 'Bitu_000': 'Bitu_Cam', 'Bitu_InstanceName': 'Bitu_InstanceName', 'Fei_000': 'Fei_Cam', 'Fei_InstanceName': 'Fei_InstanceName'})

}

void DressFairy_00() {

    call Essential({'ActorName': 'ActorName', 'Miroyan': 'Miroyan'})


    call Sub_Player0({'Member': 'Vioran', 'ActorName': 'ActorName'})


    call Main_Player({'Member': 'Bitu', 'ActorName': 'ActorName'})

    SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 34})

    call Entry_00({'Fei': 'Fei', 'Yuforu': 'Yuforu', 'ActorName': 'ActorName', 'Miroyan': 'Miroyan', 'Vioran': 'Vioran_Cam', 'Vioran_InstanceName': 'Vioran_InstanceName', 'Vioran_000': 'Vioran', 'Bitu': 'Bitu', 'Yuforu_000': 'Yuforu_Cam', 'Yuforu_InstanceName': 'Yuforu_InstanceName', 'Bitu_000': 'Bitu_Cam', 'Bitu_InstanceName': 'Bitu_InstanceName', 'Fei_000': 'Fei_Cam', 'Fei_InstanceName': 'Fei_InstanceName'})

}

void DressFairy_02() {

    call Essential({'ActorName': 'ActorName', 'Miroyan': 'Miroyan'})


    call Sub_Player0({'Member': 'Vioran', 'ActorName': 'ActorName'})


    call Main_Player({'Member': 'Fei', 'ActorName': 'ActorName'})

    SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 33})

    call Entry_02({'Yuforu': 'Yuforu', 'Bitu': 'Bitu', 'ActorName': 'ActorName', 'Miroyan': 'Miroyan', 'Vioran': 'Vioran_Cam', 'Vioran_InstanceName': 'Vioran_InstanceName', 'Vioran_000': 'Vioran', 'Fei': 'Fei', 'Yuforu_000': 'Yuforu_Cam', 'Yuforu_InstanceName': 'Yuforu_InstanceName', 'Bitu_000': 'Bitu_Cam', 'Bitu_InstanceName': 'Bitu_InstanceName', 'Fei_000': 'Fei_Cam', 'Fei_InstanceName': 'Fei_InstanceName'})

}

void Entry_00() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Orchestra03_IsCompleted_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Orchestra04_IsCompleted_Exp'}) {

            call Sub_Player1({'Member': 'Fei', 'ActorName': 'ActorName'})

            SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 33})

            call Sub_Player2({'Member': 'Yuforu', 'ActorName': 'ActorName'})

            SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 32})

            call Camera_Long({'ActorName': 'ActorName', 'Miroyan': 'Miroyan', 'Vioran': 'Vioran', 'Vioran_InstanceName': 'Vioran_InstanceName', 'Vioran_000': 'Vioran_000', 'MainPlayer': 'Bitu', 'Yuforu': 'Yuforu_000', 'Yuforu_InstanceName': 'Yuforu_InstanceName', 'Bitu': 'Bitu_000', 'Bitu_InstanceName': 'Bitu_InstanceName', 'Fei': 'Fei_000', 'Fei_InstanceName': 'Fei_InstanceName', 'SubPlayer2': 'Yuforu', 'Actor_Yuforu': 'Yuforu', 'Actor_Bitu': 'Bitu', 'Actor_Fei': 'Fei'})

        } else {

            call Sub_Player1({'Member': 'Fei', 'ActorName': 'ActorName'})

            SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 33})
            Event115:

            call Camera_Short({'ActorName': 'ActorName', 'Miroyan': 'Miroyan'})

        }
    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Orchestra04_IsCompleted_Exp'}) {

        call Sub_Player1({'Member': 'Yuforu', 'ActorName': 'ActorName'})

        SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 32})
        goto Event115
    } else {
        goto Event115
    }
}

void Entry_01() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Orchestra03_IsCompleted_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Orchestra02_IsCompleted_Exp'}) {

            call Sub_Player1({'Member': 'Fei', 'ActorName': 'ActorName'})

            SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 33})

            call Sub_Player2({'Member': 'Bitu', 'ActorName': 'ActorName'})

            SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 34})

            call Camera_Long({'ActorName': 'ActorName', 'Miroyan': 'Miroyan', 'Vioran': 'Vioran', 'Vioran_InstanceName': 'Vioran_InstanceName', 'Vioran_000': 'Vioran_000', 'MainPlayer': 'Yuforu', 'Yuforu': 'Yuforu_000', 'Yuforu_InstanceName': 'Yuforu_InstanceName', 'Bitu': 'Bitu_000', 'Bitu_InstanceName': 'Bitu_InstanceName', 'Fei': 'Fei_000', 'Fei_InstanceName': 'Fei_InstanceName', 'SubPlayer2': 'Bitu', 'Actor_Yuforu': 'Yuforu', 'Actor_Bitu': 'Bitu', 'Actor_Fei': 'Fei'})

        } else {

            call Sub_Player1({'Member': 'Fei', 'ActorName': 'ActorName'})

            SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 33})
            Event130:

            call Camera_Short({'ActorName': 'ActorName', 'Miroyan': 'Miroyan'})

        }
    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Orchestra02_IsCompleted_Exp'}) {

        call Sub_Player1({'Member': 'Bitu', 'ActorName': 'ActorName'})

        SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 34})
        goto Event130
    } else {
        goto Event130
    }
}

void Entry_02() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Orchestra04_IsCompleted_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Orchestra02_IsCompleted_Exp'}) {

            call Sub_Player1({'Member': 'Yuforu', 'ActorName': 'ActorName'})

            SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 32})

            call Sub_Player2({'Member': 'Bitu', 'ActorName': 'ActorName'})

            SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 34})

            call Camera_Long({'ActorName': 'ActorName', 'Miroyan': 'Miroyan', 'Vioran': 'Vioran', 'Vioran_InstanceName': 'Vioran_InstanceName', 'Vioran_000': 'Vioran_000', 'MainPlayer': 'Fei', 'Yuforu': 'Yuforu_000', 'Yuforu_InstanceName': 'Yuforu_InstanceName', 'Bitu': 'Bitu_000', 'Bitu_InstanceName': 'Bitu_InstanceName', 'Fei': 'Fei_000', 'Fei_InstanceName': 'Fei_InstanceName', 'SubPlayer2': 'Bitu', 'Actor_Yuforu': 'Yuforu', 'Actor_Bitu': 'Bitu', 'Actor_Fei': 'Fei'})

        } else {

            call Sub_Player1({'Member': 'Yuforu', 'ActorName': 'ActorName'})

            SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 32})
            Event134:

            call Camera_Short({'ActorName': 'ActorName', 'Miroyan': 'Miroyan'})

        }
    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Orchestra02_IsCompleted_Exp'}) {

        call Sub_Player1({'Member': 'Bitu', 'ActorName': 'ActorName'})

        SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 34})
        goto Event134
    } else {
        goto Event134
    }
}

void Essential() {
    Npc_Orchestra_M_00[Essential(Miroyan)].EventWarpToTargetActor({'IsWaitEnd': True, 'OffsetBase': 1, 'InstanceName': '', 'YAngle': 0.0, 'TargetActorKind': 1, 'ActorName': 'ActorName', 'PositionOffset': [0.0, 2.450000047683716, 8.5]})
    Npc_Orchestra_M_00[Essential(Miroyan)].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Act_Orchestra_Default'})
    Npc_Orchestra_M_00[Essential(Miroyan)].EventTriggerChangeEmotion({'IsActFaceOnly': True, 'EmotionType': 0})
    Player.EventPlayerWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'OffsetBase': 1, 'YAngle': 180.0, 'InstanceName': '', 'ActorName': 'ActorName', 'PositionOffset': [-3.0, 2.450000047683716, 23.0], 'UseDemoWait': True})
    Player.EventWarpOnGround({'IsWaitEnd': True, 'IsIncludeWater': True, 'OffsetY': 0.0, 'UseDemoWait': True})

    call Common.InitPlayState({'IsUnequip': True, 'IsRidableGetOff': True})

    Player.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
}

void Short_C01() {
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 80})
    EventCamera.EventMoveToTargetPosCamera({'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'AtVector': [0.0, 3.4000000953674316, 6.690000057220459], 'PosVector': [-7.269999980926514, 14.020000457763672, 17.190000534057617], 'Actor1InstanceName': '', 'Actor1ActorName': 'Actor1ActorName', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})

    fork {
        GameSystemActor.EventEventFadeIn({'IsNoPlayAnime': False, 'Color': 0, 'Length': 1, 'IsWaitEnd': False})
        EventCamera.EventMoveToTargetPosCamera({'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsLinearMove': True, 'IsWaitEnd': False, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'AtVector': [0.0, 3.4000000953674316, 6.690000057220459], 'PosVector': [6.440000057220459, 14.020000457763672, 17.6200008392334], 'Actor1InstanceName': '', 'MoveTime': 400, 'Actor1ActorName': 'Actor1ActorName', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 200})
    } {
        SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_Dm_OT_0003', 'IsReleaseDucking': False, 'CommandLife': 2})
    } {
        Npc_Orchestra_M_00[Short_C01(Miroyan)].EventTriggerChangeEmotion({'IsActFaceOnly': True, 'EmotionType': 1})
        EventSystemActor[0].EventWait({'IsWaitEnd': True, 'Frames': 40})
        Npc_Orchestra_M_00[Short_C01(Miroyan)].EventTriggerChangeEmotion({'IsActFaceOnly': True, 'EmotionType': 0})
        Npc_Orchestra_M_00[Short_C01(Miroyan)].EventPlayAS({'ASName': 'Act_Orchestra_Random_A', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        Npc_Orchestra_M_00[Short_C01(Miroyan)].EventPlayAS({'ASName': 'Act_Orchestra_Default', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0})
        Npc_Orchestra_M_00[Short_C01(Miroyan)].EventTriggerChangeEmotion({'IsActFaceOnly': True, 'EmotionType': 1})
    }

}

void Main_Player() {
    Npc_Orchestra_W_00[Main_Player(Member)].EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'InstanceName': '', 'OffsetBase': 1, 'ActorName': 'ActorName', 'YAngle': 200.0, 'PositionOffset': [0.949999988079071, 1.2999999523162842, 10.0]})
    Npc_Orchestra_W_00[Main_Player(Member)].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAnimeDriven': False, 'ASName': 'C01-Act_Orchestra_Main', 'ForceFadeInFrame': -1.0, 'IsAllSlot': True})
}

void Sub_Player1() {
    Npc_Orchestra_M_H[Sub_Player1(Member)].EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'InstanceName': '', 'OffsetBase': 1, 'ActorName': 'ActorName', 'PositionOffset': [1.4199999570846558, 0.44999998807907104, 11.475000381469727], 'YAngle': 197.0})
    Npc_Orchestra_M_H[Sub_Player1(Member)].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAnimeDriven': False, 'ASName': 'C01-Act_Orchestra_Sub1', 'ForceFadeInFrame': -1.0, 'IsAllSlot': True})
}

void Sub_Player2() {
    Npc_Orchestra_M_H[Sub_Player2(Member)].EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'InstanceName': '', 'OffsetBase': 1, 'ActorName': 'ActorName', 'YAngle': 140.0, 'PositionOffset': [-1.5499999523162842, 0.6200000047683716, 11.199999809265137]})
    Npc_Orchestra_M_H[Sub_Player2(Member)].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAnimeDriven': False, 'ASName': 'C01-Act_Orchestra_Sub2', 'ForceFadeInFrame': -1.0, 'IsAllSlot': True})
}

void Sub_Player0() {
    Npc_Orchestra_W_00[Sub_Player0(Member)].EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'InstanceName': '', 'OffsetBase': 1, 'ActorName': 'ActorName', 'YAngle': 160.0, 'PositionOffset': [-0.800000011920929, 1.600000023841858, 10.0]})
    Npc_Orchestra_W_00[Sub_Player0(Member)].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C01-Act_Orchestra_Main'})
}

void Short_C02() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': '', 'CameraCollisionMode': 0, 'IsLinearMove': True, 'MoveTime': 0, 'IsWaitEnd': True, 'PosVector': [1.9199999570846558, 7.03000020980835, 12.800000190734863], 'AtVector': [0.03999999910593033, 3.25, 8.699999809265137], 'TargetFovy': 25.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'Actor1ActorName', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': '', 'IsWaitEnd': False, 'CameraCollisionMode': 0, 'MoveTime': 200, 'IsLinearMove': True, 'PosVector': [3.509999990463257, 7.03000020980835, 11.569999694824219], 'AtVector': [0.03999999910593033, 3.25, 8.699999809265137], 'TargetFovy': 25.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'Actor1ActorName', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 100})
    } {
        Npc_Orchestra_M_00[Short_C02(Miroyan)].EventTriggerChangeEmotion({'IsActFaceOnly': True, 'EmotionType': 0})
        Npc_Orchestra_M_00[Short_C02(Miroyan)].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Act_Orchestra_Random_B', 'IsWaitEnd': True})
        Npc_Orchestra_M_00[Short_C02(Miroyan)].EventPlayAS({'ASName': 'Act_Orchestra_Default', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0})
        Npc_Orchestra_M_00[Short_C02(Miroyan)].EventTriggerChangeEmotion({'IsActFaceOnly': True, 'EmotionType': 1})
    }

}

void Short_C03() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'PosVector': [1.409999966621399, 5.349999904632568, 4.269999980926514], 'AtVector': [-0.3400000035762787, 2.2100000381469727, 11.300000190734863], 'TargetFovy': 20.799999237060547, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'Actor1ActorName', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'IsLinearMove': True, 'MoveTime': 200, 'IsWaitEnd': False, 'PosVector': [1.1699999570846558, 4.909999847412109, 5.260000228881836], 'AtVector': [-0.3400000035762787, 2.2100000381469727, 11.300000190734863], 'TargetFovy': 20.799999237060547, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'Actor1ActorName', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 100})
    } {
        Npc_Orchestra_M_00[Short_C03(Miroyan)].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsPauseCloth': False, 'IsPauseHelperBone': False, 'IsPauseAS': False, 'IsDisableIK': False, 'IsRidingTargetGoOffstage': False})
    }

}

void Short_C04() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'ActorName', 'CameraCollisionMode': 0, 'PosVector': [0.0, 2.380000114440918, 15.960000038146973], 'AtVector': [0.0, 3.930000066757202, 6.340000152587891], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 200, 'CameraCollisionMode': 0, 'MoveTotargetPosType': 1, 'StartAccelerateRate': 0.5, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': False, 'Actor1ActorName': 'ActorName', 'PosVector': [0.0, 0.9800000190734863, 22.06999969482422], 'AtVector': [0.0, 5.590000152587891, 5.639999866485596], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 200})
    } {
        Npc_Orchestra_M_00[Short_C04(Miroyan)].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Act_Orchestra_Default'})
        Npc_Orchestra_M_00[Short_C04(Miroyan)].EventTriggerChangeEmotion({'IsActFaceOnly': True, 'EmotionType': 1})
        EventSystemActor[0].EventWait({'IsWaitEnd': True, 'Frames': 100})
        Npc_Orchestra_M_00[Short_C04(Miroyan)].EventTriggerChangeEmotion({'IsActFaceOnly': True, 'EmotionType': 0})
        Npc_Orchestra_M_00[Short_C04(Miroyan)].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Act_Orchestra_Random_B', 'IsWaitEnd': True})
        Npc_Orchestra_M_00[Short_C04(Miroyan)].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Act_Orchestra_Default'})
        Npc_Orchestra_M_00[Short_C04(Miroyan)].EventTriggerChangeEmotion({'IsActFaceOnly': True, 'EmotionType': 1})
    }

}

void Long_C01() {
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 80})
    EventCamera.EventMoveToTargetPosCamera({'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'AtVector': [0.0, 3.4000000953674316, 6.690000057220459], 'PosVector': [-7.269999980926514, 14.020000457763672, 17.190000534057617], 'Actor1InstanceName': '', 'Actor1ActorName': 'ActorName', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})

    fork {
        GameSystemActor.EventEventFadeIn({'IsNoPlayAnime': False, 'Color': 0, 'Length': 1, 'IsWaitEnd': False})
        EventCamera.EventMoveToTargetPosCamera({'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsLinearMove': True, 'IsWaitEnd': False, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'AtVector': [0.0, 3.4000000953674316, 6.690000057220459], 'PosVector': [6.440000057220459, 14.020000457763672, 17.6200008392334], 'Actor1InstanceName': '', 'MoveTime': 400, 'Actor1ActorName': 'ActorName', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 200})
    } {
        SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_Dm_OT_0003', 'IsReleaseDucking': False, 'CommandLife': 2})
    } {
        Npc_Orchestra_M_00[Long_C01(Miroyan)].EventTriggerChangeEmotion({'IsActFaceOnly': True, 'EmotionType': 1})
        EventSystemActor[0].EventWait({'IsWaitEnd': True, 'Frames': 40})
        Npc_Orchestra_M_00[Long_C01(Miroyan)].EventTriggerChangeEmotion({'IsActFaceOnly': True, 'EmotionType': 0})
        Npc_Orchestra_M_00[Long_C01(Miroyan)].EventPlayAS({'ASName': 'Act_Orchestra_Random_A', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        Npc_Orchestra_M_00[Long_C01(Miroyan)].EventPlayAS({'ASName': 'Act_Orchestra_Default', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0})
        Npc_Orchestra_M_00[Long_C01(Miroyan)].EventTriggerChangeEmotion({'IsActFaceOnly': True, 'EmotionType': 1})
    }

}

void Camera_Short() {

    call Short_C01({'Actor1ActorName': 'ActorName', 'Miroyan': 'Miroyan'})


    call Short_C02({'Actor1ActorName': 'ActorName', 'Miroyan': 'Miroyan'})


    call Short_C03({'Actor1ActorName': 'ActorName', 'Miroyan': 'Miroyan'})


    call Short_C04({'ActorName': 'ActorName', 'Miroyan': 'Miroyan'})

}

void Camera_Long() {

    call Long_C01({'ActorName': 'ActorName', 'Miroyan': 'Miroyan'})


    call Long_C03({'ActorName': 'ActorName', 'MainPlayer': 'MainPlayer', 'Vioran': 'Vioran_000', 'Miroyan': 'Miroyan'})


    call Long_C04({'ActorName': 'ActorName', 'Vioran': 'Vioran_000', 'MainPlayer': 'MainPlayer', 'Miroyan': 'Miroyan'})


    call Long_C05({'Vioran': 'Vioran', 'Vioran_InstanceName': 'Vioran_InstanceName', 'Miroyan': 'Miroyan', 'SubPlayer2': 'SubPlayer2'})


    call Long_C05-1({'ActorName': 'ActorName', 'Miroyan': 'Miroyan', 'SubPlayer2': 'SubPlayer2'})


    call Yuforu({'Yuforu': 'Yuforu', 'Yuforu_InstanceName': 'Yuforu_InstanceName', 'Miroyan': 'Miroyan', 'Actor_Yuforu': 'Actor_Yuforu'})


    call Bitu({'Bitu': 'Bitu', 'Bitu_InstanceName': 'Bitu_InstanceName', 'Actor_Yuforu': 'Actor_Yuforu', 'Actor_Bitu': 'Actor_Bitu'})


    call Fei({'Fei': 'Fei', 'Fei_InstanceName': 'Fei_InstanceName', 'Actor_Fei': 'Actor_Fei', 'Actor_Bitu': 'Actor_Bitu'})


    call Long_C07({'ActorName': 'ActorName', 'Miroyan': 'Miroyan', 'Actor_Fei': 'Actor_Fei'})

}

void Long_C03() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-0.009999999776482582, 5.059999942779541, 12.710000038146973], 'AtVector': [-0.009999999776482582, 2.9800000190734863, 7.730000019073486], 'TargetFovy': 20.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'ActorName', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 100})
    } {
        Npc_Orchestra_W_00[Long_C03(Vioran)].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsPauseCloth': False, 'IsPauseHelperBone': False, 'IsPauseAS': False, 'IsDisableIK': False, 'IsRidingTargetGoOffstage': False})
    } {
        Npc_Orchestra_M_P[Long_C03(MainPlayer)].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsPauseCloth': False, 'IsPauseHelperBone': False, 'IsPauseAS': False, 'IsDisableIK': False, 'IsRidingTargetGoOffstage': False})
    } {
        Npc_Orchestra_M_00[Long_C03(Miroyan)].EventPlayAS({'ASName': 'Act_Orchestra_Default', 'ForceFadeInFrame': 0.0, 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False})
        Npc_Orchestra_M_00[Long_C03(Miroyan)].EventTriggerChangeEmotion({'IsActFaceOnly': True, 'EmotionType': 1})
    }

}

void Long_C04() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'PosVector': [-0.5400000214576721, 3.509999990463257, 15.029999732971191], 'AtVector': [0.07999999821186066, 2.3399999141693115, 10.449999809265137], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'ActorName', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'PosVector': [1.2100000381469727, 3.509999990463257, 14.930000305175781], 'AtVector': [0.07999999821186066, 2.3399999141693115, 10.449999809265137], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'IsLinearMove': True, 'Actor1ActorName': 'ActorName', 'MoveTime': 120, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_Orchestra_W_00[Long_C04(Vioran)].EventWait({'Frames': 1, 'IsWaitEnd': True})
    } {
        Npc_Orchestra_M_P[Long_C04(MainPlayer)].EventWait({'Frames': 1, 'IsWaitEnd': True})
    } {
        EventSystemActor[0].EventWait({'IsWaitEnd': True, 'Frames': 40})
        Npc_Orchestra_M_00[Long_C04(Miroyan)].EventTriggerChangeEmotion({'IsActFaceOnly': True, 'EmotionType': 0})
        Npc_Orchestra_M_00[Long_C04(Miroyan)].EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Act_Orchestra_Random_B'})
        Npc_Orchestra_M_00[Long_C04(Miroyan)].EventPlayAS({'ASName': 'Act_Orchestra_Default', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0})
        Npc_Orchestra_M_00[Long_C04(Miroyan)].EventTriggerChangeEmotion({'IsActFaceOnly': True, 'EmotionType': 1})
    }

}

void Long_C05() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'TargetFovy': 20.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionMode': 0, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Vioran', 'Actor1InstanceName': 'Vioran_InstanceName', 'PosVector': [-1.2300000190734863, 1.899999976158142, 3.5399999618530273], 'AtVector': [0.25, 1.7899999618530273, 0.33000001311302185], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'TargetFovy': 20.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionMode': 0, 'IsLinearMove': True, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 130, 'Actor1ActorName': 'Vioran', 'Actor1InstanceName': 'Vioran_InstanceName', 'PosVector': [-0.8999999761581421, 1.8700000047683716, 2.8399999141693115], 'AtVector': [0.25, 1.7899999618530273, 0.33000001311302185], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_Orchestra_M_00_FairySiza[Long_C05(Miroyan)].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsPauseCloth': False, 'IsPauseHelperBone': False, 'IsPauseAS': False, 'IsDisableIK': False, 'IsRidingTargetGoOffstage': False})
    } {
        Npc_Orchestra_M_P[Long_C05(SubPlayer2)].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsPauseCloth': False, 'IsPauseHelperBone': False, 'IsPauseAS': False, 'IsDisableIK': False, 'IsRidingTargetGoOffstage': False})
    }

}

void Fei() {
    EventCamera.EventMoveToTargetPosCamera({'CameraCollisionMode': 0, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'Fei', 'Actor1InstanceName': 'Fei_InstanceName', 'PosVector': [-1.6799999475479126, 1.3600000143051147, 1.1399999856948853], 'AtVector': [-0.03999999910593033, 1.0499999523162842, -0.029999999329447746], 'TargetFovy': 32.5, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventCamera.EventMoveToTargetPosCamera({'IsLinearMove': True, 'CameraCollisionMode': 0, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 90, 'Actor1ActorName': 'Fei', 'Actor1InstanceName': 'Fei_InstanceName', 'PosVector': [-1.4600000381469727, 1.3200000524520874, 0.9800000190734863], 'AtVector': [-0.03999999910593033, 1.0499999523162842, -0.029999999329447746], 'TargetFovy': 32.5, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void Long_C07() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionMode': 0, 'Actor1ActorName': 'ActorName', 'AtVector': [0.0, 3.930000066757202, 6.340000152587891], 'PosVector': [0.0, 2.380000114440918, 15.960000038146973], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 200, 'CameraCollisionMode': 0, 'MoveTotargetPosType': 1, 'StartAccelerateRate': 0.5, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': False, 'Actor1ActorName': 'ActorName', 'AtVector': [0.0, 5.590000152587891, 5.639999866485596], 'PosVector': [0.0, 0.9800000190734863, 22.06999969482422], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 200})
    } {
        Npc_Orchestra_M_00_FairySiza[Long_C07(Miroyan)].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Act_Orchestra_Default'})
        Npc_Orchestra_M_00_FairySiza[Long_C07(Miroyan)].EventTriggerChangeEmotion({'IsActFaceOnly': True, 'EmotionType': 1})
        EventSystemActor[0].EventWait({'IsWaitEnd': True, 'Frames': 100})
        Npc_Orchestra_M_00_FairySiza[Long_C07(Miroyan)].EventTriggerChangeEmotion({'IsActFaceOnly': True, 'EmotionType': 0})
        Npc_Orchestra_M_00_FairySiza[Long_C07(Miroyan)].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Act_Orchestra_Random_B', 'IsWaitEnd': True})
        Npc_Orchestra_M_00_FairySiza[Long_C07(Miroyan)].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Act_Orchestra_Default'})
        Npc_Orchestra_M_00_FairySiza[Long_C07(Miroyan)].EventTriggerChangeEmotion({'IsActFaceOnly': True, 'EmotionType': 1})
    }

}

void Long_C05-1() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'ActorName', 'TargetFovy': 31.799999237060547, 'PosVector': [3.609999895095825, 5.320000171661377, 5.909999847412109], 'AtVector': [0.9100000262260437, 3.2899999618530273, 8.90999984741211], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'CameraCollisionMode': 0, 'MoveTime': 140, 'IsLinearMove': True, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'ActorName', 'TargetFovy': 31.799999237060547, 'PosVector': [3.990000009536743, 4.880000114440918, 6.46999979019165], 'AtVector': [1.2899999618530273, 2.8499999046325684, 9.479999542236328], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_Orchestra_M_00_FairySiza[Long_C05-1(Miroyan)].EventTriggerChangeEmotion({'IsActFaceOnly': True, 'EmotionType': 0})
        Npc_Orchestra_M_00_FairySiza[Long_C05-1(Miroyan)].EventPlayAS({'ASName': 'Act_Orchestra_Random_A', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        Npc_Orchestra_M_00_FairySiza[Long_C05-1(Miroyan)].EventPlayAS({'ASName': 'Act_Orchestra_Default', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0})
        Npc_Orchestra_M_00_FairySiza[Long_C05-1(Miroyan)].EventTriggerChangeEmotion({'IsActFaceOnly': True, 'EmotionType': 1})
    } {
        Npc_Orchestra_M_P[Long_C05-1(SubPlayer2)].EventWait({'IsWaitEnd': True, 'Frames': 1})
    }

}

void Yuforu() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'CameraCollisionMode': 0, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-3.4800000190734863, 2.130000114440918, 1.0499999523162842], 'AtVector': [0.20000000298023224, 1.7100000381469727, 0.3100000023841858], 'TargetFovy': 25.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'Yuforu', 'Actor1InstanceName': 'Yuforu_InstanceName', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'MoveTime': 90, 'CameraCollisionMode': 0, 'IsLinearMove': True, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-2.8399999141693115, 2.049999952316284, 0.9300000071525574], 'AtVector': [0.20000000298023224, 1.7100000381469727, 0.3100000023841858], 'TargetFovy': 25.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'Yuforu', 'Actor1InstanceName': 'Yuforu_InstanceName', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_Orchestra_M_00_FairySiza[Yuforu(Miroyan)].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsPauseCloth': False, 'IsPauseHelperBone': False, 'IsPauseAS': False, 'IsDisableIK': False, 'IsRidingTargetGoOffstage': False})
    }

}

void Bitu() {
    EventCamera.EventMoveToTargetPosCamera({'CameraCollisionMode': 0, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-1.840000033378601, 1.8200000524520874, 1.409999966621399], 'AtVector': [0.09000000357627869, 1.6299999952316284, 0.12999999523162842], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'Bitu', 'Actor1InstanceName': 'Bitu_InstanceName', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventCamera.EventMoveToTargetPosCamera({'CameraCollisionMode': 0, 'IsLinearMove': True, 'MoveTime': 90, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-1.4299999475479126, 1.7799999713897705, 1.1399999856948853], 'AtVector': [0.09000000357627869, 1.6299999952316284, 0.12999999523162842], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1InstanceName': 'Bitu_InstanceName', 'Actor1ActorName': 'Bitu', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}
