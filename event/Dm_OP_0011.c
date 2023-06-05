-------- EventFlow: Dm_OP_0011 --------

Actor: EventSystemActor[0]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Dm_Locator[dm]
entrypoint: None()
actions: ['EventWarpToTargetActor']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerControllerRumble']
queries: ['EventQueryCheckCurrentBancWorkPath', 'EventQueryHaveOpenedActionGuide', 'EventQueryIsEnterDungeon']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataEnum']
queries: ['EventQueryHavePlayedEvent', 'EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventTriggerPlayerLookAtObject']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_OP_0011/Dm_OP_0011_Link/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_OP_0011.root.as', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 1, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraAnimationInstructionsForFlowchart', 'EventMoveToTargetPosCamera', 'EventTriggerCameraSavePoint', 'EventMoveCameraToSavePoint']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventAS': '', 'ExceptionalBindType': 3, 'UseEventModelAnime': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStartBgmSimple', 'EventSoundRequestDucking', 'EventSoundReleaseDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor[wait]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Raul_InDungeon
entrypoint: None()
actions: ['EventTriggerStartFadeOut', 'EventTalk', 'EventWarpToTargetActor', 'EventTriggerLookAtObject', 'EventGoOffstageForUser', 'EventPlayAS', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'Position': [0.0, -5.0, 2.5], 'IsBindNearestActor': False}

Actor: Dm_OP_0011_DgnObj_Small_floor01[060]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventGoOffstageForUser', 'EventWarpToTargetPosAndRot']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsWorld': True, 'Rotation': [0.0, 180.0, 0.0], 'IsGrounding': False, 'Position': [14.0, -19.0, 54.0], 'IsBindNearestActor': False}

Actor: Dm_OP_0011_DgnObj_Small_floor01[061]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventGoOffstageForUser', 'EventWarpToTargetPosAndRot']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsGrounding': False, 'Rotation': [0.0, -90.0, 0.0], 'IsWorld': True, 'Position': [58.0, -15.0, -43.0], 'IsBindNearestActor': False}

Actor: Dm_OP_0011_DgnObj_Small_floor01[062]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventGoOffstageForUser', 'EventWarpToTargetPosAndRot']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsGrounding': False, 'Rotation': [0.0, 180.0, 0.0], 'IsWorld': True, 'Position': [-20.0, -9.5, 73.5], 'IsBindNearestActor': False}

void Dm_OP_0011() {

    call Common.InitPlayState({'IsUnequip': True, 'IsRidableGetOff': True})


    call floor_create()

    EventCamera.EventTriggerCameraSavePoint()
    if !GameSystemActor.EventQueryCheckCurrentBancWorkPath({'BancWorkPath': 'SmallDungeon/Dungeon060'}) {

        call UltraHand()

        Event11:
        if !GameSystemActor.EventQueryHaveOpenedActionGuide({'ActionGuideType': 12}) {
            if !GameDataActor.EventQueryHavePlayedEvent({'EventName': 'DmF_SY_SmallDungeonGoal'})
            && GameSystemActor.EventQueryHaveOpenedActionGuide({'ActionGuideType': 5}) {

                call Common.OpenActionGuideScreen({'ActionGuideType': 5})

            }
        } else {

            call Common.OpenActionGuideScreen({'ActionGuideType': 12})

        }
    } else
    if !GameSystemActor.EventQueryCheckCurrentBancWorkPath({'BancWorkPath': 'SmallDungeon/Dungeon061'}) {

        call Toleroof()

        goto Event11
    } else
    if !GameSystemActor.EventQueryCheckCurrentBancWorkPath({'BancWorkPath': 'SmallDungeon/Dungeon062'}) {

        call Scrabuild()

        goto Event11
    }
}

void UltraHand() {

    call Intro()


    fork {

        call LookArm()


        call Surprize()


        fork {

            call UnlockAbility()


            fork {
                Player.EventTriggerEmitXLink({'SLinkKey': 'Dm_GetZonauMagic_ArmEffectImpact', 'ELinkKey': 'Dm_OP_0011_AbilityGet_Ultrahand'})
            } {
                EventSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 6})
                GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Don'})
            }

        } {
            EventSystemActor[0].EventWait({'IsWaitEnd': True, 'Frames': 260})
        }


        call AfterUnlockAbility()


        call GetPouchContent.GetPouchContentByActorName({'ActorName': 'Obj_UltraHand', 'IsSuccess': True})


        call SoundControlDuckEnd()

        GameDataActor.EventTriggerSetGameDataEnum({'GameDataName': 'PlayerStatus.CurrentSpecialPower', 'Value': 'UltraHand', 'Index': -1})
    } {
        Dm_OP_0011_DgnObj_Small_floor01[060].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [14.0, -18.0, 54.0], 'YAngle': 180.0})
    }


    fork {

        call ArmDown()

    } {
        Dm_OP_0011_DgnObj_Small_floor01[060].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }

    Npc_Raul_InDungeon.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'EndDialogOption': 3, 'IsOverrideStyle': True, 'OverrideStyle': 3, 'MessageId': 'EventFlowMsg/Dm_OP_0011:Dm_OP_0011_Text_005_b', 'IsCloseDialog': False, 'IsPlayASAllSlot': False, 'ASName': '', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Raul_InDungeon.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsOverrideStyle': True, 'OverrideStyle': 3, 'MessageId': 'EventFlowMsg/Dm_OP_0011:Dm_OP_0011_Text_006_b', 'IsPlayASAllSlot': False, 'ASName': '', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

    call Describe()

    Npc_Raul_InDungeon.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsOverrideStyle': True, 'OverrideStyle': 3, 'MessageId': 'EventFlowMsg/Dm_OP_0011:Dm_OP_0011_Text_007_b', 'IsPlayASAllSlot': False, 'ASName': '', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Raul_InDungeon.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsOverrideStyle': True, 'OverrideStyle': 3, 'MessageId': 'EventFlowMsg/Dm_OP_0011:Dm_OP_0011_Text_008_b', 'IsPlayASAllSlot': False, 'ASName': '', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    if GameSystemActor.EventQueryIsEnterDungeon() {

        call Vanish()

    }

    call End()

}

void Toleroof() {

    call Intro()


    fork {

        call LookArm()


        call Surprize()


        fork {

            call UnlockAbility()


            fork {
                Player.EventTriggerEmitXLink({'SLinkKey': 'Dm_GetZonauMagic_ArmEffectImpact', 'ELinkKey': 'Dm_OP_0011_AbilityGet_Tooreroof'})
            } {
                EventSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 6})
                GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Don'})
            }

        } {
            EventSystemActor[0].EventWait({'IsWaitEnd': True, 'Frames': 260})
        }


        call AfterUnlockAbility()


        call GetPouchContent.GetPouchContentByActorName({'ActorName': 'Obj_Tooreroof', 'IsSuccess': True})


        call SoundControlDuckEnd()

        GameDataActor.EventTriggerSetGameDataEnum({'GameDataName': 'PlayerStatus.CurrentSpecialPower', 'Index': -1, 'Value': 'CeilingClipper'})
    } {
        Dm_OP_0011_DgnObj_Small_floor01[061].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [58.0, -14.0, -43.0], 'YAngle': -90.0})
    }


    fork {

        call ArmDown()

    } {
        Dm_OP_0011_DgnObj_Small_floor01[061].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }

    Npc_Raul_InDungeon.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsOverrideStyle': True, 'OverrideStyle': 3, 'MessageId': 'EventFlowMsg/Dm_OP_0011:Dm_OP_0011_Text_010_b', 'IsPlayASAllSlot': False, 'ASName': '', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Raul_InDungeon.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsOverrideStyle': True, 'OverrideStyle': 3, 'MessageId': 'EventFlowMsg/Dm_OP_0011:Dm_OP_0011_Text_011_b', 'IsPlayASAllSlot': False, 'ASName': '', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

    call Describe()

    Npc_Raul_InDungeon.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsOverrideStyle': True, 'OverrideStyle': 3, 'MessageId': 'EventFlowMsg/Dm_OP_0011:Dm_OP_0011_Text_012_b', 'IsPlayASAllSlot': False, 'ASName': '', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Raul_InDungeon.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsOverrideStyle': True, 'OverrideStyle': 3, 'MessageId': 'EventFlowMsg/Dm_OP_0011:Dm_OP_0011_Text_013_b', 'IsPlayASAllSlot': False, 'ASName': '', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    if GameSystemActor.EventQueryIsEnterDungeon() {

        call Vanish()

    }

    call End()

}

void Scrabuild() {

    call Intro()


    fork {

        call LookArm()


        call Surprize()


        fork {

            call UnlockAbility()


            fork {
                Player.EventTriggerEmitXLink({'SLinkKey': 'Dm_GetZonauMagic_ArmEffectImpact', 'ELinkKey': 'Dm_OP_0011_AbilityGet_Scrabuild'})
            } {
                EventSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 6})
                GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Don'})
            }

        } {
            EventSystemActor[0].EventWait({'IsWaitEnd': True, 'Frames': 260})
        }


        call AfterUnlockAbility()


        call GetPouchContent.GetPouchContentByActorName({'ActorName': 'Obj_OneTouchBond', 'IsSuccess': True})


        call SoundControlDuckEnd()

        GameDataActor.EventTriggerSetGameDataEnum({'GameDataName': 'PlayerStatus.CurrentSpecialPower', 'Index': -1, 'Value': 'OneTouchBond'})
    } {
        Dm_OP_0011_DgnObj_Small_floor01[062].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [-20.0, -8.5, 73.5], 'YAngle': 180.0})
    }


    fork {

        call ArmDown()

    } {
        Dm_OP_0011_DgnObj_Small_floor01[062].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }

    Npc_Raul_InDungeon.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsOverrideStyle': True, 'OverrideStyle': 3, 'MessageId': 'EventFlowMsg/Dm_OP_0011:Dm_OP_0011_Text_015_b', 'IsPlayASAllSlot': False, 'ASName': '', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Raul_InDungeon.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsOverrideStyle': True, 'OverrideStyle': 3, 'MessageId': 'EventFlowMsg/Dm_OP_0011:Dm_OP_0011_Text_016_b', 'IsPlayASAllSlot': False, 'ASName': '', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

    call Describe()

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Dungeon062_GetStartSword', 'Index': -1}) {
        Npc_Raul_InDungeon.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsOverrideStyle': True, 'OverrideStyle': 3, 'IsPlayASAllSlot': False, 'ASName': '', 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Dm_OP_0011:Dm_OP_0011_Text_017_b_00', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_Raul_InDungeon.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsOverrideStyle': True, 'OverrideStyle': 3, 'MessageId': 'EventFlowMsg/Dm_OP_0011:Dm_OP_0011_Text_017_b', 'IsPlayASAllSlot': False, 'ASName': '', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
    Npc_Raul_InDungeon.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsOverrideStyle': True, 'OverrideStyle': 3, 'MessageId': 'EventFlowMsg/Dm_OP_0011:Dm_OP_0011_Text_019_b', 'IsPlayASAllSlot': False, 'ASName': '', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    if GameSystemActor.EventQueryIsEnterDungeon() {

        call Vanish()

    }

    call End()

}

void Blueprint() {

    call Arm_Blueprint()


    call LookArm()


    call Surprize()


    fork {

        call UnlockAbility()


        fork {
            Player.EventTriggerEmitXLink({'SLinkKey': 'Dm_GetZonauMagic_ArmEffectImpact', 'ELinkKey': 'Dm_OT_0022_AbilityGet_Blueprint'})
        } {
            EventSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 6})
            GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Don'})
        }

    } {
        EventSystemActor[0].EventWait({'IsWaitEnd': True, 'Frames': 260})
    }


    call AfterUnlockAbility()


    call GetPouchContent.GetPouchContentByActorName({'ActorName': 'Obj_AutoBuilder', 'IsSuccess': True})


    call SoundControlDuckEnd()

    GameDataActor.EventTriggerSetGameDataEnum({'GameDataName': 'PlayerStatus.CurrentSpecialPower', 'Index': -1, 'Value': 'AutoBuilder'})
}

void LookArm() {
    EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': False, 'RootType': 3, 'TargetActorName': 'Player', 'SceneName': 'LookArm', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
    SoundSystemActor.EventSoundRequestDucking({'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0, 'DuckingName': 'DmF:WorldSEミュート(フェード長い)'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    Player.EventTriggerEmitXLink({'SLinkKey': 'Dm_GetZonauMagic_ArmEffectStart', 'ELinkKey': ''})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}

void UnlockAbility() {
    EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'TargetActorName': 'Player', 'SceneName': 'Arm', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsWaitEnd': False, 'InterpolateFrame': 0.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
    SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_GetSpecialPower_Intro', 'CommandLife': 2, 'IsReleaseDucking': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 244})
    Player.EventTriggerXLinkFadeByKey({'IsKill': False, 'SLinkKey': 'Dm_GetZonauMagic_ArmEffectStart', 'ELinkKey': 'Dm_OP_0011_AbilityGetStart'})
}

void Intro() {
    Dm_Locator[dm].EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Player', 'OffsetBase': 1, 'PositionOffset': [0.0, 2.5, 0.0], 'IsWaitEnd': True, 'InstanceName': '', 'YAngle': 0.0})
    Player.EventTriggerPlayerRequestLookAtTheFrontLock()
    if !GameSystemActor.EventQueryIsEnterDungeon() {

        call Intro_ReEntry()

        Event50:
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': True, 'IsWaitEnd': False, 'ASCommand': 'ArmUp', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 25})
    } else {
        Npc_Raul_InDungeon.EventTriggerStartFadeOut({'FadeFrame': 1})
        Npc_Raul_InDungeon.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0, 'ASName': 'Appear_Loop'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        Npc_Raul_InDungeon.EventWarpToTargetActor({'IsWaitEnd': False, 'YAngle': 180.0, 'InstanceName': '', 'OffsetBase': 1, 'TargetActorKind': 1, 'ActorName': 'Player', 'PositionOffset': [0.0, 0.0, 3.0]})
        Npc_Raul_InDungeon.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'IsAllSlot': True, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'DemoWait', 'ClothWarpMode': 0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Player.EventTriggerPlayerLookAtObject({'Target': 3, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1, 'ActorName': 'Npc_Raul_InDungeon'})
        if !GameDataActor.EventQueryHavePlayedEvent({'EventName': 'Dm_OP_0011'}) {

            call Intro_2nd()

        } else {

            call Intro_1st()

        }
        goto Event50
    }
}

void Surprize() {
    Player.EventTriggerEmitXLink({'ELinkKey': 'Dm_OP_0011_AbilityGetStart', 'SLinkKey': ''})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    if !GameDataActor.EventQueryHavePlayedEvent({'EventName': 'Dm_OP_0011'}) {
        Event49:
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    } else {
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsWaitEnd': False, 'ASCommand': 'Surprise', 'IsAllSlot': True, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        Player.EventTriggerEmitXLink({'SLinkKey': 'PV722_00', 'ELinkKey': ''})
        goto Event49
    }
}

void ArmDown() {
    if !GameDataActor.EventQueryHavePlayedEvent({'EventName': 'Dm_OP_0011'}) {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': False, 'RootType': 3, 'TargetActorName': 'Player', 'SceneName': 'LookArm', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
    } else {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'Actor1ActorName': 'Player', 'PosVector': [-1.5399999618530273, 0.38999998569488525, -1.840000033378601], 'AtVector': [0.7599999904632568, 2.359999895095825, 2.75], 'TargetFovy': 30.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'ASCommand': 'ArmDown', 'IsAllSlot': True, 'IsWaitEnd': True, 'KeepOneTimeAnm': True, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': True, 'IsWaitEnd': False, 'ASCommand': 'DemoWait', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    }
}

void AfterUnlockAbility() {
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 70})
    Player.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'Dm_GetZonauMagic_IntoHand'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Middle'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 110})
}

void Arm_Blueprint() {
    EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'LightStart', 'IsWaitEnd': False, 'TargetActorName': 'Player', 'RootType': 3, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
    Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': True, 'IsWaitEnd': False, 'ASCommand': 'ArmUp', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
}

void Vanish() {
    if GameDataActor.EventQueryHavePlayedEvent({'EventName': 'Dm_OP_0011'}) {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'TargetFovy': 20.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVector': [1.0700000524520874, 2.1600000858306885, 3.2899999618530273], 'AtVector': [-0.1899999976158142, 2.9100000858306885, 0.2800000011920929], 'Actor1ActorName': 'Npc_Raul_InDungeon', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    }
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Npc_Raul_InDungeon.EventTriggerXLinkFadeByKey({'SLinkKey': 'Dm_Soul_loop', 'ELinkKey': '', 'IsKill': False})
    Npc_Raul_InDungeon.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'DisAppaer', 'IsAllSlot': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
    Npc_Raul_InDungeon.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Player.EventTriggerPlayerRequestLookAtTheFrontLock()
}

void Intro_ReEntry() {
    EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': False, 'RootType': 3, 'TargetActorName': 'Player', 'SceneName': 'LookArm', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
}

void Intro_1st() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'TargetFovy': 20.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVector': [1.0700000524520874, 2.1600000858306885, 3.2899999618530273], 'AtVector': [-0.1899999976158142, 2.9100000858306885, 0.2800000011920929], 'Actor1ActorName': 'Npc_Raul_InDungeon', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'IsAllSlot': True, 'UseAnmDriven': False, 'ASCommand': 'DemoWait', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})

    call RaulIn()

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    Npc_Raul_InDungeon.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': True, 'OverrideStyle': 3, 'MessageId': 'EventFlowMsg/Dm_OP_0011:Dm_OP_0011_Text_000_b', 'IsPlayASAllSlot': False, 'ASName': '', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Raul_InDungeon.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': True, 'OverrideStyle': 3, 'MessageId': 'EventFlowMsg/Dm_OP_0011:Dm_OP_0011_Text_001_b', 'IsPlayASAllSlot': False, 'ASName': '', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Raul_InDungeon.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': True, 'OverrideStyle': 3, 'MessageId': 'EventFlowMsg/Dm_OP_0011:Dm_OP_0011_Text_002_b', 'IsPlayASAllSlot': False, 'ASName': '', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'Actor1ActorName': 'Player', 'PosVector': [-1.5399999618530273, 0.38999998569488525, -1.840000033378601], 'AtVector': [0.7599999904632568, 2.359999895095825, 2.75], 'TargetFovy': 30.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Npc_Raul_InDungeon.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': True, 'OverrideStyle': 3, 'MessageId': 'EventFlowMsg/Dm_OP_0011:Dm_OP_0011_Text_003_b', 'IsPlayASAllSlot': False, 'ASName': '', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void Intro_2nd() {
    if !GameSystemActor.EventQueryCheckCurrentBancWorkPath({'BancWorkPath': 'SmallDungeon/Dungeon061'}) {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'MoveTime': 0, 'Actor1ActorName': 'Player', 'PosVector': [-4.059999942779541, 0.47999998927116394, -2.569999933242798], 'AtVector': [0.5799999833106995, 1.7000000476837158, 2.0299999713897705], 'TargetFovy': 33.400001525878906, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1InstanceName': '', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        Event47:

        call RaulIn()

        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'IsAllSlot': True, 'UseAnmDriven': False, 'ASCommand': 'DemoWait', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        Npc_Raul_InDungeon.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': True, 'OverrideStyle': 3, 'IsPlayASAllSlot': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Dm_OP_0011:Dm_OP_0011_Text_003_b_00', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else
    if GameSystemActor.EventQueryCheckCurrentBancWorkPath({'BancWorkPath': 'SmallDungeon/Dungeon062'}) in [0, 1] {
        EventCamera.EventMoveToTargetPosCamera({'CameraCollisionMode': 0, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [-4.71999979019165, 1.2300000190734863, 1.7400000095367432], 'AtVector': [-0.30000001192092896, 1.6399999856948853, 1.5499999523162842], 'TargetFovy': 43.400001525878906, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1InstanceName': '', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        goto Event47
    }
}

void End() {
    EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
}

void Describe() {
    if !GameDataActor.EventQueryHavePlayedEvent({'EventName': 'Dm_OP_0011'})
    && GameSystemActor.EventQueryIsEnterDungeon() {
        if !GameSystemActor.EventQueryCheckCurrentBancWorkPath({'BancWorkPath': 'SmallDungeon/Dungeon061'}) {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'MoveTime': 0, 'Actor1ActorName': 'Player', 'PosVector': [-4.059999942779541, 0.47999998927116394, -2.569999933242798], 'AtVector': [0.5799999833106995, 1.7000000476837158, 2.0299999713897705], 'TargetFovy': 33.400001525878906, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1InstanceName': '', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            Event233:
            Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'ASCommand': 'ArmDown', 'IsAllSlot': True, 'IsWaitEnd': True, 'KeepOneTimeAnm': True, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': True, 'IsWaitEnd': False, 'ASCommand': 'DemoWait', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        } else
        if GameSystemActor.EventQueryCheckCurrentBancWorkPath({'BancWorkPath': 'SmallDungeon/Dungeon062'}) in [0, 1] {
            EventCamera.EventMoveToTargetPosCamera({'CameraCollisionMode': 0, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [-4.71999979019165, 1.2300000190734863, 1.7400000095367432], 'AtVector': [-0.30000001192092896, 1.6399999856948853, 1.5499999523162842], 'TargetFovy': 43.400001525878906, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1InstanceName': '', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            goto Event233
        }
    }
}

void RaulIn() {
    Npc_Raul_InDungeon.EventTriggerEmitXLink({'SLinkKey': 'Dm_Soul_loop', 'ELinkKey': ''})
    Npc_Raul_InDungeon.EventPlayAS({'Partial': '', 'IsAnimeDriven': False, 'ASName': 'Appaer', 'IsWaitEnd': True, 'ForceFadeInFrame': 0.0, 'IsAllSlot': False})
    Npc_Raul_InDungeon.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'TalkWait'})
}

void SoundControlDuckEnd() {
    SoundSystemActor.EventSoundReleaseDucking({'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False, 'DuckingName': 'DmF:WorldSEミュート(フェード長い)'})
}

void floor_create() {

    fork {
        Dm_OP_0011_DgnObj_Small_floor01[060].EventTriggerParticipateEvent()
        Dm_OP_0011_DgnObj_Small_floor01[060].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Dm_OP_0011_DgnObj_Small_floor01[061].EventTriggerParticipateEvent()
        Dm_OP_0011_DgnObj_Small_floor01[061].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Dm_OP_0011_DgnObj_Small_floor01[062].EventTriggerParticipateEvent()
        Dm_OP_0011_DgnObj_Small_floor01[062].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }

}
