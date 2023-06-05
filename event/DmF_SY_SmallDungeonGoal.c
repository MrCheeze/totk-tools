-------- EventFlow: DmF_SY_SmallDungeonGoal --------

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm', 'EventSoundRequestDucking', 'EventSoundStartSound', 'EventTriggerSoundIgnoreSceneChangeError', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTriggerSkipEnd', 'EventTriggerSkipAcceptStart']
queries: ['EventQueryIsEventSkipedMostRecent']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventTriggerPlayerRequestLookAtTheFrontLock', 'EventPlayerPlayASForFlowchart', 'EventTriggerPlayerLookAtObject', 'EventWait', 'EventGoOffstageForUser', 'EventPlayerWait', 'EventPlayerWarpToTargetActor', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey', 'EventTriggerRemoveBreakLifeAllAndHealMax']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': True, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/DmF_SY_SmallDungeonGoal/DmF_SY_SmallDungeonGoal_Link/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/DmF_SY_SmallDungeonGoal_Link.root.as', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerSetDisplayHeartGauge', 'EventTriggerSetDungeonClear', 'EventEventFadeOut', 'EventReserveBancChangeExitSmallDungeon', 'EventOpenMessageDungeon', 'EventTriggerForceCloseUIScreen', 'EventTriggerControllerRumble', 'EventDoNothing', 'EventWaitHeartGaugeStable']
queries: ['EventQueryIsClearDungeon', 'EventQueryTalkChoice2', 'EventQueryCheckCurrentBancWorkPath', 'EventQueryCheckIsLastDungeon', 'EventQuerySmallDungeonType']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: DgnObj_Hrl_GoalSystem_B_01
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayAS', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'EventMemberCreateMethod': 2, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/DmF_SY_SmallDungeonGoal/DmF_SY_SmallDungeonGoal_DgnObj_Small_GoalGate_01/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/DmF_SY_SmallDungeonGoal_DgnObj_Small_GoalGate_01.root.as', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: []
queries: ['EventQueryHavePlayedEvent', 'EventQueryIsGameDataBoolExp', 'EventQueryCheckIsGet']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: SystemTextNPC
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventTriggerProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Dm_Locator
entrypoint: None()
actions: ['EventWarpToTargetActor']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventEffectAddELinkHiddenSetting']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor[wait]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor[1]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void DmF_SY_SmallDungeonGoal() {
    if !GameSystemActor.EventQueryIsClearDungeon() {
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:Bgm下げ', 'DuckingName2': 'DmF:環境系SE下げ', 'DuckingName3': '', 'CommandLife': 0})
        SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceNumber': 2, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'MessageId': 'EventFlowMsg/DmF_SY_SmallDungeonGoal:talk00', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceCancelNo': 0, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {

            call SoundStop()

            Event131:

            call ReturnImaginaryPouch()


            call SoundErrorSuppress()

            GameSystemActor.EventReserveBancChangeExitSmallDungeon({'IsWaitEnd': True, 'BootEventName': 'DmF_SY_SmallDungeon5Out'})
        }
    } else {

        call SoundStop()

        if !GameSystemActor.EventQueryCheckCurrentBancWorkPath({'BancWorkPath': 'SmallDungeon/Dungeon060'}) {

            call Animation_01()

            Event136:
            GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
            GameSystemActor.EventTriggerSetDungeonClear()
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
            if !GameDataActor.EventQueryHavePlayedEvent({'EventName': 'Dm_OP_0033'}) {
                Event219:
                if !GameDataActor.EventQueryCheckIsGet({'ActorName': 'Obj_Battery_Get'}) {
                    Event210:
                    if !GameDataActor.EventQueryHavePlayedEvent({'EventName': 'SageOfSky_GetZonauMajic_Master_All'}) {
                        Event233:
                        if !GameSystemActor.EventQueryCheckCurrentBancWorkPath({'BancWorkPath': 'SmallDungeon/Dungeon063'}) {
                            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'MainChallenge_IsAfter_GoToBackToGolemInTemple_Exp'}) {
                                goto Event131
                            } else
                            if !GameDataActor.EventQueryHavePlayedEvent({'EventName': 'Clear4thDungeon'}) {
                                goto Event131
                            } else {

                                call ReturnImaginaryPouch()


                                call SoundErrorSuppress()

                                GameSystemActor.EventReserveBancChangeExitSmallDungeon({'IsWaitEnd': True, 'BootEventName': 'Clear4thDungeon'})
                            }
                        } else {
                            goto Event131
                        }
                    } else
                    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'FirstIsland_IsClearAllSmallDungeon'}) {

                        call ReturnImaginaryPouch()


                        call SoundErrorSuppress()

                        GameSystemActor.EventReserveBancChangeExitSmallDungeon({'IsWaitEnd': True, 'BootEventName': 'SageOfSky_GetZonauMajic_Master_All'})
                    } else
                    goto Event233
                } else
                if !GameSystemActor.EventQueryCheckCurrentBancWorkPath({'BancWorkPath': 'SmallDungeon/Dungeon060'}) {
                    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'FirstIsland_IsClearSmallDungeon60And61'}) {
                        Event181:

                        call ReturnImaginaryPouch()


                        call SoundErrorSuppress()

                        GameSystemActor.EventReserveBancChangeExitSmallDungeon({'IsWaitEnd': True, 'BootEventName': 'Golem_GiveBattery_ExitHand'})
                    } else
                    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'FirstIsland_IsClearSmallDungeon60And62'}) {
                        goto Event181
                    } else
                    goto Event210
                } else
                if !GameSystemActor.EventQueryCheckCurrentBancWorkPath({'BancWorkPath': 'SmallDungeon/Dungeon061'}) {
                    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'FirstIsland_IsClearSmallDungeon60And61'}) {
                        Event177:

                        call ReturnImaginaryPouch()


                        call SoundErrorSuppress()

                        GameSystemActor.EventReserveBancChangeExitSmallDungeon({'IsWaitEnd': True, 'BootEventName': 'Golem_GiveBattery_ExitToore'})
                    } else
                    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'FirstIsland_IsClearSmallDungeon61And62'}) {
                        goto Event177
                    } else
                    goto Event210
                } else
                if !GameSystemActor.EventQueryCheckCurrentBancWorkPath({'BancWorkPath': 'SmallDungeon/Dungeon062'}) {
                    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'FirstIsland_IsClearSmallDungeon60And62'}) {
                        Event150:

                        call ReturnImaginaryPouch()


                        call SoundErrorSuppress()

                        GameSystemActor.EventReserveBancChangeExitSmallDungeon({'IsWaitEnd': True, 'BootEventName': 'Golem_GiveBattery'})
                    } else
                    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'FirstIsland_IsClearSmallDungeon61And62'}) {
                        goto Event150
                    } else
                    goto Event210
                } else
                goto Event210
            } else
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'FirstIsland_IsClearAnySmallDungeon'}) {

                call ReturnImaginaryPouch()


                call SoundErrorSuppress()

                GameSystemActor.EventReserveBancChangeExitSmallDungeon({'IsWaitEnd': True, 'BootEventName': 'RaulAppear_Clear1stSmallDungeon'})
            } else
            goto Event219
        } else
        if !GameSystemActor.EventQueryCheckCurrentBancWorkPath({'BancWorkPath': 'SmallDungeon/Dungeon062'}) {

            call Animation_01()

            goto Event136
        } else
        if !GameSystemActor.EventQueryCheckCurrentBancWorkPath({'BancWorkPath': 'SmallDungeon/Dungeon061'}) {

            call Animation_01()

        } else {

            call Animation_04()

        }
        goto Event136
    }
}

void Ready() {

    fork {

        call Common.InitPlayStateTrigger({'IsUnequip': True, 'IsRidableGetOff': True})

    } {
        DgnObj_Hrl_GoalSystem_B_01.EventTriggerParticipateEvent()
    } {
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'DemoWait', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'ForceFadeFrame': 1.0, 'ClothWarpMode': 0})
    }


    fork {
        DgnObj_Hrl_GoalSystem_B_01.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'DmF_SY_SmallDungeonGoal_ZonauEnergy'})
    } {
        EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'DgnObj_Hrl_GoalSystem_B_01', 'KeyName': 'ZonauEnergy'})
    }

}

void C01-1() {
    DgnObj_Hrl_GoalSystem_B_01.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_SmallDungeonGoal_Authentication', 'SLinkKey': ''})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'Actor1InstanceName': '', 'Actor1ActorName': 'Player', 'PosVector': [-2.690000057220459, 0.9100000262260437, -2.140000104904175], 'AtVector': [-0.23000000417232513, 1.3799999952316284, 0.44999998807907104], 'TargetFovy': 50.400001525878906, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Player.EventPlayerWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'DgnObj_Hrl_GoalSystem_B_01', 'OffsetBase': 1, 'YAngle': 180.0, 'InstanceName': '', 'IsWaitEnd': False, 'PositionOffset': [0.0, 1.2000000476837158, 7.650000095367432], 'UseDemoWait': True})

        fork {
            Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': True, 'ASCommand': 'Touch', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            Player.EventPlayerPlayASForFlowchart({'ASCommand': 'DemoWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        } {
            EventSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 50})
            GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Byeen'})
        }

    } {
        DgnObj_Hrl_GoalSystem_B_01.EventPlayAS({'ASName': 'Start', 'Partial': '', 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0, 'IsAllSlot': True, 'IsWaitEnd': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 48})
        DgnObj_Hrl_GoalSystem_B_01.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'Dm_Zonau_Authentication'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 112})
    } {
        EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'DgnObj_Hrl_GoalSystem_B_01', 'KeyName': 'Active'})
    } {
        Dm_Locator.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'DgnObj_Hrl_GoalSystem_B_01', 'IsWaitEnd': True, 'InstanceName': '', 'OffsetBase': 0, 'YAngle': 0.0, 'PositionOffset': [0.0, 3.0, 0.0]})
    }

}

void C03-1() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'Actor1InstanceName': '', 'Actor1ActorName': 'Player', 'PosVector': [0.0, 1.2100000381469727, -3.5299999713897705], 'AtVector': [0.0, 1.9500000476837158, -0.5099999904632568], 'TargetFovy': 53.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
    DgnObj_Hrl_GoalSystem_B_01.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'Open', 'ForceFadeInFrame': -1.0})
    DgnObj_Hrl_GoalSystem_B_01.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'DmF_SY_SmallDungeonGoal_Statue_Open'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    if !GameDataActor.EventQueryHavePlayedEvent({'EventName': 'DmF_SY_SmallDungeonGoal'}) {

        fork {
            Player.EventTriggerPlayerLookAtObject({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'InstanceName': '', 'Direction': 0.0, 'ActorName': 'Dm_Locator', 'PosOffset': [0.0, 5.0, 0.0], 'TurnFaceControlType': 1})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 70})
        } {
            DgnObj_Hrl_GoalSystem_B_01.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_SmallDungeonGoal_Statue_Open', 'SLinkKey': ''})
        } {
            EventSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 5})
            GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Middle', 'Length': 0.0})
        }

    } else {

        fork {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
            Player.EventPlayerPlayASForFlowchart({'IsAllSlot': False, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'Talk', 'IsWaitEnd': False, 'ClothWarpMode': 0})
            Player.EventPlayerPlayASForFlowchart({'IsAllSlot': False, 'UseAnmDriven': False, 'ASCommand': 'TalkSurprise', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ClothWarpMode': 0})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 62})

            fork {
                Player.EventPlayerPlayASForFlowchart({'ASCommand': 'DemoWait', 'IsAllSlot': False, 'UseAnmDriven': False, 'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': 30.0, 'ClothWarpMode': 0})
            } {
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 8})
            }

        } {
            DgnObj_Hrl_GoalSystem_B_01.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_SmallDungeonGoal_Statue_Open', 'SLinkKey': ''})
        } {
            EventSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 5})
            GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Middle', 'Length': 0.0})
        }

    }
}

void GetUI() {
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})

    call GetPouchContent.GetPouchContentByActorName({'ActorName': 'Obj_DungeonClearSeal', 'IsSuccess': True})

    GameSystemActor.EventTriggerSetDisplayHeartGauge({'IsDisplayHeartGauge': True, 'IsDisplayHeartGaugeExtra': False, 'IsDisplayAtLT': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    Player.EventTriggerRemoveBreakLifeAllAndHealMax()
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    GameSystemActor.EventWaitHeartGaugeStable({'IsWaitEnd': True})
}

void C06() {
    DgnObj_Hrl_GoalSystem_B_01.EventTriggerXLinkFadeByKey({'ELinkKey': 'DmF_SY_SmallDungeonGoal_Statue_Open', 'SLinkKey': '', 'IsKill': False})
    DgnObj_Hrl_GoalSystem_B_01.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_SmallDungeonGoal_Blessing', 'SLinkKey': ''})
    SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Zonau_Light_Converge', 'IsIgnoreDucking': False})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'Actor1InstanceName': '', 'Actor1ActorName': 'Player', 'PosVector': [-2.609999895095825, 2.5799999237060547, 3.950000047683716], 'AtVector': [-0.6899999976158142, 3.4600000381469727, 5.309999942779541], 'TargetFovy': 52.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 125})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'Actor1InstanceName': '', 'MoveTime': 120, 'IsWaitEnd': True, 'Actor1ActorName': 'Player', 'PosVector': [-2.2300000190734863, 3.299999952316284, 3.5199999809265137], 'AtVector': [-0.10000000149011612, 1.75, 1.5299999713897705], 'TargetFovy': 53.099998474121094, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': True, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        if !GameDataActor.EventQueryHavePlayedEvent({'EventName': 'DmF_SY_SmallDungeonGoal'}) {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
            Player.EventPlayerPlayASForFlowchart({'IsAllSlot': True, 'ForceFadeFrame': 0.0, 'IsWaitEnd': False, 'UseAnmDriven': False, 'ASCommand': 'Look-02', 'KeepOneTimeAnm': False, 'ClothWarpMode': 0})
        } else {
            Player.EventPlayerPlayASForFlowchart({'IsAllSlot': True, 'ForceFadeFrame': 0.0, 'IsWaitEnd': False, 'UseAnmDriven': False, 'ASCommand': 'Look-01', 'KeepOneTimeAnm': False, 'ClothWarpMode': 0})
        }
    } {
        EventSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 1})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_GoroGoro'})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
}

void Animation_01() {

    call Ready()


    call C01-1()


    call C02-1()


    call C03-1()

    Event145:

    call C04()


    call C05()


    call C06()


    call C07()


    call C08()


    call C09()


    call C10()

}

void C07() {
    DgnObj_Hrl_GoalSystem_B_01.EventTriggerXLinkFadeByKey({'SLinkKey': '', 'ELinkKey': 'DmF_SY_SmallDungeonGoal_Blessing', 'IsKill': False})
    DgnObj_Hrl_GoalSystem_B_01.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_SmallDungeonGoal_Blessing_Get', 'SLinkKey': ''})

    fork {
        if !GameDataActor.EventQueryHavePlayedEvent({'EventName': 'DmF_SY_SmallDungeonGoal'}) {
            Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': True, 'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'ASCommand': 'Get-02', 'ForceFadeFrame': 40.0, 'ClothWarpMode': 0})
        } else {
            Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': True, 'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'ASCommand': 'Get-01', 'ForceFadeFrame': 15.0, 'ClothWarpMode': 0})
        }
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Zonau_Absorb', 'IsIgnoreDucking': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'Actor1ActorName': 'Player', 'PosVector': [-0.9900000095367432, 2.190000057220459, 1.75], 'AtVector': [0.27000001072883606, 1.2100000381469727, 0.07000000029802322], 'TargetFovy': 35.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        EventSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 135})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Middle', 'Length': 0.0})
    }

    Player.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'DmF_SY_SmallDungeonGoal_Player_Purification'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 155})

    fork {
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Zonau_Exorcise', 'IsIgnoreDucking': False})
    } {
        EventSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 3})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Small', 'Length': 0.30000001192092896})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 126})
    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'DemoWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': 30.0, 'ClothWarpMode': 0})
    EventSystemActor.EventTriggerSkipEnd({'SpecialEventActionType': 4, 'BlackInSkipEnd': False})
    DgnObj_Hrl_GoalSystem_B_01.EventTriggerXLinkFadeByKey({'SLinkKey': '', 'ELinkKey': 'DmF_SY_SmallDungeonGoal_Blessing_Get', 'IsKill': False})
    Player.EventTriggerXLinkFadeByKey({'SLinkKey': '', 'IsKill': False, 'ELinkKey': 'DmF_SY_SmallDungeonGoal_Player_Purification'})
}

void C08() {
    if !EventSystemActor.EventQueryIsEventSkipedMostRecent() {
        GameSystemActor.EventDoNothing({'IsWaitEnd': True})
        GameSystemActor.EventTriggerForceCloseUIScreen({'ForceCloseScreen': 0})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'Actor1InstanceName': '', 'Actor1ActorName': 'Player', 'PosVector': [0.0, 0.41999998688697815, -6.730000019073486], 'AtVector': [0.0, 2.490000009536743, 0.029999999329447746], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        Player.EventTriggerPlayerLookAtObject({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'DgnObj_Hrl_GoalSystem_B_01', 'InstanceName': '', 'PosOffset': [0.0, 5.0, 0.0], 'TurnFaceControlType': 1})

        call GetUI()

        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    } else {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'Actor1InstanceName': '', 'Actor1ActorName': 'Player', 'PosVector': [0.0, 0.41999998688697815, -6.730000019073486], 'AtVector': [0.0, 2.490000009536743, 0.029999999329447746], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})

        fork {

            call GetUI()

        } {
            Player.EventTriggerPlayerLookAtObject({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'DgnObj_Hrl_GoalSystem_B_01', 'InstanceName': '', 'PosOffset': [0.0, 5.0, 0.0], 'TurnFaceControlType': 1})
        }

        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})
    }
}

void C09() {
    if !GameSystemActor.EventQueryCheckIsLastDungeon() {

        fork {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'Actor1InstanceName': '', 'Actor1ActorName': 'Player', 'PosVector': [0.009999999776482582, 2.0, 2.7799999713897705], 'AtVector': [0.009999999776482582, 2.609999895095825, 4.789999961853027], 'TargetFovy': 50.04999923706055, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            Player.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
            EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'IsLinearMove': True, 'Actor1InstanceName': '', 'IsWaitEnd': True, 'Actor1ActorName': 'Player', 'PosVector': [0.009999999776482582, 1.590000033378601, 1.5700000524520874], 'AtVector': [0.009999999776482582, 2.569999933242798, 4.800000190734863], 'TargetFovy': 50.04999923706055, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 565, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        } {
            GameSystemActor.EventOpenMessageDungeon({'IsWithAncientGlyph': True, 'MessageID': 'EventFlowMsg/DmF_SY_SmallDungeonGoal:talk10', 'IsWaitEnd': True, 'IsUnder': True})
            GameSystemActor.EventOpenMessageDungeon({'IsWithAncientGlyph': True, 'MessageID': 'EventFlowMsg/DmF_SY_SmallDungeonGoal:talk11', 'IsWaitEnd': True, 'IsUnder': True})
            ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'CDungeon_AllDone', 'StepName': 'RewardAppeared'})
        }

    } else
    if !GameDataActor.EventQueryHavePlayedEvent({'EventName': 'DmF_SY_SmallDungeonGoal'}) {
        EventSystemActor.EventTriggerSkipAcceptStart({'SpecialEventActionType': 3})
    }
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'Actor1InstanceName': '', 'Actor1ActorName': 'Player', 'PosVector': [0.009999999776482582, 2.0, 2.7799999713897705], 'AtVector': [0.009999999776482582, 2.609999895095825, 4.789999961853027], 'TargetFovy': 50.04999923706055, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})

    fork {
        GameSystemActor.EventOpenMessageDungeon({'MessageID': 'EventFlowMsg/DmF_SY_SmallDungeonGoal:talk03', 'IsWithAncientGlyph': True, 'IsWaitEnd': True, 'IsUnder': True})
    } {
        Player.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'MoveTime': 240, 'IsLinearMove': True, 'Actor1InstanceName': '', 'Actor1ActorName': 'Player', 'PosVector': [0.009999999776482582, 1.590000033378601, 1.5700000524520874], 'AtVector': [0.009999999776482582, 2.569999933242798, 4.800000190734863], 'TargetFovy': 50.04999923706055, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    }

}

void C10() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'Actor1InstanceName': '', 'Actor1ActorName': 'Player', 'PosVector': [0.0, 0.4300000071525574, -5.46999979019165], 'AtVector': [0.019999999552965164, 2.119999885559082, -0.11999999731779099], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'MoveTime': 340, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'Actor1InstanceName': '', 'IsWaitEnd': False, 'StartAccelerateRate': 0.5, 'Actor1ActorName': 'Player', 'PosVector': [0.0, -0.10999999940395355, -7.190000057220459], 'AtVector': [0.019999999552965164, 2.119999885559082, -0.11999999731779099], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        DgnObj_Hrl_GoalSystem_B_01.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'End', 'ForceFadeInFrame': 0.0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 140})
        DgnObj_Hrl_GoalSystem_B_01.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAnimeDriven': False, 'ASName': 'End_Off', 'IsAllSlot': True, 'ForceFadeInFrame': 30.0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})
    } {
        Player.EventWait({'IsWaitEnd': True, 'Frames': 0})
        EventSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 30})
        DgnObj_Hrl_GoalSystem_B_01.EventTriggerXLinkFadeByKey({'SLinkKey': '', 'ELinkKey': 'DmF_SY_SmallDungeonGoal_ZonauEnergy', 'IsKill': False})
    } {
        SoundSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 33})
        DgnObj_Hrl_GoalSystem_B_01.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'DmF_SY_SmallDungeonGoal_Pillar_FallDown'})
    }

    EventSystemActor.EventTriggerSkipEnd({'SpecialEventActionType': 4, 'BlackInSkipEnd': False})
    if !EventSystemActor.EventQueryIsEventSkipedMostRecent() {
        GameSystemActor.EventDoNothing({'IsWaitEnd': True})
        GameSystemActor.EventTriggerForceCloseUIScreen({'ForceCloseScreen': 0})
        GameSystemActor.EventEventFadeOut({'IsNoPlayAnime': True, 'IsWaitEnd': True, 'Color': 0, 'Length': 1})
    }
}

void C01-4() {
    DgnObj_Hrl_GoalSystem_B_01.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_SmallDungeonGoal_Authentication', 'SLinkKey': ''})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'Actor1InstanceName': '', 'Actor1ActorName': 'Player', 'PosVector': [-2.690000057220459, 0.9100000262260437, -2.140000104904175], 'AtVector': [-0.23000000417232513, 1.3799999952316284, 0.44999998807907104], 'TargetFovy': 50.400001525878906, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Player.EventPlayerWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'DgnObj_Hrl_GoalSystem_B_01', 'OffsetBase': 1, 'YAngle': 180.0, 'InstanceName': '', 'IsWaitEnd': False, 'PositionOffset': [0.0, 1.2000000476837158, 7.650000095367432], 'UseDemoWait': True})

        fork {
            Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': True, 'ASCommand': 'Touch', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            Player.EventPlayerPlayASForFlowchart({'ASCommand': 'DemoWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        } {
            EventSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 50})
            GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Byeen'})
        }

    } {
        DgnObj_Hrl_GoalSystem_B_01.EventPlayAS({'ASName': 'Start', 'Partial': '', 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0, 'IsWaitEnd': False, 'IsAllSlot': True})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 48})
        DgnObj_Hrl_GoalSystem_B_01.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'Dm_Zonau_Authentication'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 112})
    } {
        EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'DgnObj_Hrl_GoalSystem_B_01', 'KeyName': 'Active'})
    } {
        Dm_Locator.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'DgnObj_Hrl_GoalSystem_B_01', 'IsWaitEnd': True, 'InstanceName': '', 'OffsetBase': 0, 'YAngle': 0.0, 'PositionOffset': [0.0, 3.0, 0.0]})
    }

    EventSystemActor.EventTriggerSkipAcceptStart({'SpecialEventActionType': 3})
}

void C03-4() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'Actor1InstanceName': '', 'Actor1ActorName': 'Player', 'PosVector': [0.0, 1.2100000381469727, -3.5299999713897705], 'AtVector': [0.0, 1.9500000476837158, -0.5099999904632568], 'TargetFovy': 53.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
    DgnObj_Hrl_GoalSystem_B_01.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'Open', 'ForceFadeInFrame': -1.0})

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        Player.EventTriggerPlayerLookAtObject({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'InstanceName': '', 'Direction': 0.0, 'ActorName': 'Dm_Locator', 'PosOffset': [0.0, 5.0, 0.0], 'TurnFaceControlType': 1})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})
    } {
        DgnObj_Hrl_GoalSystem_B_01.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'DmF_SY_SmallDungeonGoal_Statue_Open'})
        EventSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 10})

        fork {
            DgnObj_Hrl_GoalSystem_B_01.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_SmallDungeonGoal_Statue_Open', 'SLinkKey': ''})
        } {
            EventSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 5})
            GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Middle', 'Length': 0.0})
        }

    }


    fork {
        GameSystemActor.EventOpenMessageDungeon({'MessageID': 'EventFlowMsg/DmF_SY_SmallDungeonGoal:talk01', 'IsWithAncientGlyph': True, 'IsWaitEnd': True, 'IsUnder': True})
    } {
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'Actor1InstanceName': '', 'IsWaitEnd': False, 'MoveTime': 240, 'Actor1ActorName': 'Player', 'PosVector': [0.0, 1.4199999570846558, -2.6600000858306885], 'AtVector': [0.0, 1.909999966621399, -0.6899999976158142], 'TargetFovy': 53.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EndRecelerateRate': 0.20000000298023224, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    }

}

void C04() {
    if !GameDataActor.EventQueryHavePlayedEvent({'EventName': 'DmF_SY_SmallDungeonGoal'}) {
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'Actor1InstanceName': '', 'MoveTime': 0, 'IsWaitEnd': True, 'Actor1ActorName': 'Player', 'PosVector': [-1.590000033378601, 2.490000009536743, 3.5199999809265137], 'AtVector': [0.11999999731779099, 4.210000038146973, 7.849999904632568], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsLinearMove': True, 'StartAccelerateRate': 0.10000000149011612, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'Actor1InstanceName': '', 'Actor1ActorName': 'Player', 'PosVector': [-0.3199999928474426, 2.609999895095825, 3.299999952316284], 'AtVector': [0.009999999776482582, 4.239999771118164, 7.820000171661377], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': False, 'IsLinearMove': True, 'EndRecelerateRate': 0.0, 'StartAccelerateRate': 0.10000000149011612, 'MoveTime': 320, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        Event143:
        Player.EventPlayerWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'DgnObj_Hrl_GoalSystem_B_01', 'OffsetBase': 1, 'YAngle': 180.0, 'InstanceName': '', 'PositionOffset': [0.0, 1.1799999475479126, 7.949999809265137], 'IsWaitEnd': False, 'UseDemoWait': True})
        Player.EventPlayerWait({'IsWaitEnd': False})
        Player.EventTriggerPlayerLookAtObject({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'InstanceName': '', 'Direction': 0.0, 'ActorName': 'Dm_Locator', 'PosOffset': [0.0, 6.0, 0.0], 'TurnFaceControlType': 1})
        switch GameSystemActor.EventQuerySmallDungeonType() {
          case [0, 1, 2]:
            GameSystemActor.EventOpenMessageDungeon({'IsWithAncientGlyph': True, 'IsWaitEnd': True, 'MessageID': 'EventFlowMsg/DmF_SY_SmallDungeonGoal:talk06', 'IsUnder': True})
          case 3:
            GameSystemActor.EventOpenMessageDungeon({'IsWithAncientGlyph': True, 'IsWaitEnd': True, 'IsUnder': True, 'MessageID': 'EventFlowMsg/DmF_SY_SmallDungeonGoal:talk08'})
        }
    } else {
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'Actor1InstanceName': '', 'MoveTime': 0, 'IsWaitEnd': True, 'Actor1ActorName': 'Player', 'PosVector': [-1.590000033378601, 2.490000009536743, 3.5199999809265137], 'AtVector': [0.11999999731779099, 4.210000038146973, 7.849999904632568], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'Actor1InstanceName': '', 'Actor1ActorName': 'Player', 'PosVector': [-0.3199999928474426, 2.609999895095825, 3.299999952316284], 'AtVector': [0.009999999776482582, 4.239999771118164, 7.820000171661377], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': False, 'StartAccelerateRate': 0.0, 'IsLinearMove': False, 'MoveTime': 300, 'EndRecelerateRate': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        goto Event143
    }
}

void C05() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'Actor1InstanceName': '', 'Actor1ActorName': 'Player', 'PosVector': [-2.4600000381469727, -0.1899999976158142, -6.170000076293945], 'AtVector': [-1.7100000381469727, 0.7300000190734863, -2.7899999618530273], 'TargetFovy': 20.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})

    fork {
        GameSystemActor.EventOpenMessageDungeon({'IsWaitEnd': True, 'IsWithAncientGlyph': True, 'MessageID': 'EventFlowMsg/DmF_SY_SmallDungeonGoal:talk02', 'IsUnder': True})
    } {
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'Actor1InstanceName': '', 'MoveTime': 240, 'Actor1ActorName': 'Player', 'PosVector': [-2.059999942779541, 0.7300000190734863, -5.360000133514404], 'AtVector': [-1.559999942779541, 1.4199999570846558, -2.4700000286102295], 'TargetFovy': 20.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': False, 'StartAccelerateRate': 0.10000000149011612, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    }

    Player.EventTriggerPlayerRequestLookAtTheFrontLock()
}

void Animation_04() {

    call Ready()


    call C01-4()


    call C03-4()

    goto Event145
}

void C02-1() {
    if !GameDataActor.EventQueryHavePlayedEvent({'EventName': 'DmF_SY_SmallDungeonGoal'}) {
        EventSystemActor.EventTriggerSkipAcceptStart({'SpecialEventActionType': 3})
    }
}

void ReturnImaginaryPouch() {
    if GameSystemActor.EventQuerySmallDungeonType() {

        call ChangePouch.ReturnNoVoice()

    }
}

void SoundStop() {
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'IsImmediateOnAutoOff': False, 'WithPlayableEvent': True, 'IsForceFadeTime': True, 'CommandLife': 2})
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:WorldSEミュート(フェード普通)', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
}

void SoundErrorSuppress() {
    SoundSystemActor.EventTriggerSoundIgnoreSceneChangeError()
}
