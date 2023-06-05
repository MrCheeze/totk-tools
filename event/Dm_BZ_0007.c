-------- EventFlow: Dm_BZ_0007 --------

Actor: SystemTextNPC
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventCloseMinusMenu', 'EventTriggerRequestAutoSave', 'EventTriggerEmphasizeMapIcon', 'EventShowMap']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventTriggerParticipateEvent', 'EventPlayerOnMotionTypeStatic', 'EventPlayerOffMotionTypeStatic']
queries: ['EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventTriggerSelectChallenge']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void EntryPoint0() {
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False})

    fork {
        SystemTextNPC.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Dm_BZ_0007:Dm_BZ_0007_Text_000_b', 'IsAnonymous': False, 'IsOverrideStyle': True, 'OverrideStyle': 4, 'IsPlayASAllSlot': False, 'EndDialogOption': 4, 'IsCloseDialog': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        SystemTextNPC.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': True, 'OverrideStyle': 4, 'MessageId': 'EventFlowMsg/Dm_BZ_0007:Dm_BZ_0007_Text_001_b', 'IsPlayASAllSlot': False, 'IsCloseDialog': False, 'EndDialogOption': 4, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        SystemTextNPC.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Dm_BZ_0007:Dm_BZ_0007_Text_002_b', 'IsAnonymous': False, 'IsOverrideStyle': True, 'OverrideStyle': 4, 'IsPlayASAllSlot': False, 'IsCloseDialog': False, 'EndDialogOption': 4, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        if !Player.EventQueryCheckPlayerState({'State': 5}) {
            if !Player.EventQueryCheckPlayerState({'State': 6}) {
                if !Player.EventQueryCheckPlayerState({'State': 3}) {
                    Event19:
                    Player.EventTriggerParticipateEvent()
                } else {
                    Player.EventPlayerOnMotionTypeStatic()
                }
            } else {
                goto Event19
            }
        } else {

            call Common.InitPlayState({'IsUnequip': True, 'IsRidableGetOff': True})

            Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'LookAround', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        }
    }

    ChallengeSystemActor.EventTriggerSelectChallenge({'ChallengeName': 'HyruleCastleIncident', 'IsRestoreWhenEventEnd': False})
    GameSystemActor.EventShowMap({'InShowIcon': True, 'CenterPos': [-254.0, 444.0, -980.0], 'IsShowPlayerNavi': True, 'IsShowChallenge': True, 'IsWaitEnd': True, 'ZoomLevel': 2})
    GameSystemActor.EventTriggerEmphasizeMapIcon({'TargetIconType': 10, 'TargetIconName': ''})
    SystemTextNPC.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': True, 'MessageId': 'EventFlowMsg/Dm_BZ_0007:Dm_BZ_0007_Text_003_b', 'IsPlayASAllSlot': False, 'OverrideStyle': 3, 'IsCloseDialog': False, 'EndDialogOption': 4, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    SystemTextNPC.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': True, 'MessageId': 'EventFlowMsg/Dm_BZ_0007:Dm_BZ_0007_Text_004_b', 'IsPlayASAllSlot': False, 'OverrideStyle': 3, 'IsCloseDialog': False, 'EndDialogOption': 4, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MainChallenge_BlackZeldaAppear_Castle'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
    GameSystemActor.EventCloseMinusMenu({'IsWaitEnd': True})
    Player.EventPlayerOffMotionTypeStatic()
    GameSystemActor.EventTriggerRequestAutoSave()
}
