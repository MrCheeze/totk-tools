-------- EventFlow: Dm_SY_0005 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm', 'EventTriggerStartBgmSimple', 'EventTriggerStartInGameBgm', 'EventSoundRequestDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeIn', 'EventEventFadeOut', 'EventTriggerControllerRumble', 'EventCloseMessageDialog']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: HorseGod001
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraAnimationInstructionsForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 3, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: TwnObj_FairySpring_E_01
entrypoint: None()
actions: ['EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey', 'EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor[wait1]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['EventTriggerSetDiffuseAttenuate']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: TwnObj_FairySpringClose_E_01
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor[0]
entrypoint: None()
actions: ['EventWait', 'EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventTriggerPlayerLookAtObject', 'EventPlayerWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: HorseGod001[DmF_SY_FairyUnlock_Malon(Npc_DressFairy_03)]
entrypoint: DmF_SY_FairyUnlock_Malon(Npc_DressFairy_03)
actions: ['EventTalk', 'EventPlayAS']
queries: []
params: None

Actor: TwnObj_FairySpringClose_E_01[DmF_SY_FairyUnlock_Malon(TwnObj_FairySpringClose_D_01)]
entrypoint: DmF_SY_FairyUnlock_Malon(TwnObj_FairySpringClose_D_01)
actions: ['EventPlayAS']
queries: []
params: None

Actor: TwnObj_FairySpring_E_01[DmF_SY_FairyUnlock_Malon(TwnObj_FairySpring_D_01)]
entrypoint: DmF_SY_FairyUnlock_Malon(TwnObj_FairySpring_D_01)
actions: []
queries: []
params: None

void EntryPoint0() {
    SoundSystemActor.EventTriggerStopInGameBgm({'WithPlayableEvent': True, 'FadeType': 1, 'IsImmediateOnAutoOff': False, 'CommandLife': 2, 'IsForceFadeTime': False})

    call DmF_SY_FairyUnlock_Malon({'Actor1ActorName': 'HorseGod001', 'TargetActorName': 'TwnObj_FairySpringClose_E_01', 'TargetActorName_000': 'TwnObj_FairySpring_E_01', 'Npc_DressFairy_03': ActorIdentifier(name="HorseGod001"), 'TwnObj_FairySpringClose_D_01': ActorIdentifier(name="TwnObj_FairySpringClose_E_01"), 'TwnObj_FairySpring_D_01': ActorIdentifier(name="TwnObj_FairySpring_E_01")})

    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'IsAppear_HorseGod'})
    TwnObj_FairySpring_E_01.EventTriggerParticipateEvent()
    Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': False, 'YAngle': -180.0, 'Position': [4295.0751953125, 257.4129943847656, -3211.7490234375], 'UseDemoWait': True})
    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'LockOnWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': True, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})
    TwnObj_FairySpring_E_01.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_SY_0005_FlowerOpen'})
    SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_Dm_SY_0005', 'CommandLife': 2, 'IsReleaseDucking': False})

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'TargetActorName': 'TwnObj_FairySpring_E_01', 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'IsReferenceRootOnce': False, 'SceneName': 'C01-1', 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        TwnObj_FairySpring_E_01.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_SY_0005_SplashOmen'})

        fork {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
        } {
            GameSystemActor.EventEventFadeIn({'IsNoPlayAnime': False, 'Color': 1, 'Length': 1, 'IsWaitEnd': False})
        }


        fork {
            HorseGod001.EventPlayAS({'ASName': 'Act_Appearance', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
            EventSystemActor.EventWait({'Frames': 290, 'IsWaitEnd': True})
            HorseGod001.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'Wait', 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
        } {
            EventSystemActor[wait1].EventWait({'Frames': 83, 'IsWaitEnd': True})
            Player.EventTriggerPlayerLookAtObject({'ActorName': 'HorseGod001', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 3, 'TurnFaceControlType': 1})
            GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Middle', 'Length': 0.0})
            EventWorldManagerController.EventTriggerSetDiffuseAttenuate({'MultiplyValue': 0.10000000149011612})
            EventSystemActor[wait1].EventWait({'Frames': 28, 'IsWaitEnd': True})
            GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Middle', 'Length': 0.0})
            EventSystemActor[wait1].EventWait({'Frames': 28, 'IsWaitEnd': True})
            EventSystemActor[wait1].EventWait({'Frames': 10, 'IsWaitEnd': True})
            GameSystemActor.EventTriggerControllerRumble({'Length': 4.0, 'RumbleCall': 'Middle'})
        }

    }

    TwnObj_FairySpring_E_01.EventTriggerXLinkFadeByKey({'SLinkKey': '', 'IsKill': False, 'ELinkKey': 'Dm_SY_0005_SplashOmen'})
    EventSystemActor.EventWait({'Frames': 10, 'IsWaitEnd': True})
    EventWorldManagerController.EventTriggerSetDiffuseAttenuate({'MultiplyValue': 1.0})
    SoundSystemActor.EventTriggerStartInGameBgm({'IsFadeIn': False, 'IsControlSpotBgm': True, 'WithPlayableEvent': True})
}

void DmF_SY_FairyUnlock_Malon() {
    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'LockOnWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': True, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'IsWaitEnd': False, 'CameraName': '', 'IsIgnoreRootRot': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsReferenceRootOnce': True, 'InterpolateFrame': 0.0, 'IsLoop': False, 'SceneName': 'C01-0', 'TargetActorName': 'TargetActorName', 'CalcUpInInterpolate': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})

        fork {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 140})
            SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:WorldSEミュート(フェード普通)', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
            GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 1, 'Color': 1})
        } {
            HorseGod001[DmF_SY_FairyUnlock_Malon(Npc_DressFairy_03)].EventTalk({'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/TwnObj_FairySpringClose_E_01:Talk_0009', 'IsWaitEnd': True, 'IsCloseDialog': False, 'EndDialogOption': 2, 'IsAnonymous': True, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': 'Act_Wait', 'IsNotOpenIfSkipedMostRecent': False})
            HorseGod001[DmF_SY_FairyUnlock_Malon(Npc_DressFairy_03)].EventTalk({'IsAnimeDriven': False, 'IsWaitEnd': True, 'IsCloseDialog': False, 'EndDialogOption': 2, 'IsAnonymous': True, 'MessageId': 'EventFlowMsg/TwnObj_FairySpringClose_E_01:Talk_0004', 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': 'Act_Wait', 'IsNotOpenIfSkipedMostRecent': False})
            HorseGod001[DmF_SY_FairyUnlock_Malon(Npc_DressFairy_03)].EventTalk({'IsAnimeDriven': False, 'IsWaitEnd': True, 'IsCloseDialog': False, 'EndDialogOption': 2, 'IsAnonymous': True, 'MessageId': 'EventFlowMsg/TwnObj_FairySpringClose_E_01:Talk_0008', 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': 'Act_Wait', 'IsNotOpenIfSkipedMostRecent': False})
        }

        GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
    } {
        TwnObj_FairySpringClose_E_01[DmF_SY_FairyUnlock_Malon(TwnObj_FairySpringClose_D_01)].EventPlayAS({'SlotIdx': 0, 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Act_Open', 'Partial': '', 'DefaultMorphFrame': 0.0, 'ForceFadeInFrame': -1.0})
    } {
        GameSystemActor[0].EventWait({'IsWaitEnd': True, 'Frames': 145})
        GameSystemActor[0].EventTriggerControllerRumble({'RumbleCall': 'Large', 'Length': 1.0})
    }

    HorseGod001[DmF_SY_FairyUnlock_Malon(Npc_DressFairy_03)].EventPlayAS({'IsWaitEnd': False, 'SlotIdx': 0, 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'Act_Wait', 'Partial': '', 'DefaultMorphFrame': 0.0, 'ForceFadeInFrame': -1.0})
}
