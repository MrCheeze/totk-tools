-------- EventFlow: DmF_SY_Cooking --------

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventPlayerCook', 'EventPlayerWait', 'EventPlayerOnMotionTypeStatic', 'EventPlayerOffMotionTypeStatic']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTriggerSkipAcceptStart', 'EventTriggerSkipEnd']
queries: ['EventQueryIsEventSkipedMostRecent']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: CookSet_EventStarter
entrypoint: None()
actions: ['EventTriggerCooking', 'EventPlayAS', 'EventTriggerRemoveAS', 'EventSetCookingCarryBoxInfo', 'EventTriggerClearCarryBoxDependency', 'EventPlayCookingAS', 'EventPlayPreCookingAS', 'EventWait']
queries: ['EventQueryCookingResultChoice']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventOpenInstantTips']
queries: ['EventQueryIsFirstCook']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventChangeTemporarilyToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundRequestDucking', 'EventTriggerStartBgmSimple', 'EventSoundStartSound', 'EventSoundReleaseDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void DmF_SY_Cooking() {
    EventCamera.EventChangeTemporarilyToPlayerCamera({'EnableControle': True, 'IsWaitEnd': False})
    SoundSystemActor.EventSoundRequestDucking({'DuckingName3': '', 'CommandLife': 0, 'DuckingName': 'DmF:Bgmミュート(フェード普通)', 'DuckingName2': 'DmF:WorldSEミュート(フェード普通)'})
    CookSet_EventStarter.EventTriggerCooking()
    CookSet_EventStarter.EventSetCookingCarryBoxInfo({'IsWaitEnd': True})
    CookSet_EventStarter.EventPlayAS({'IsWaitEnd': False, 'ASName': 'ResetCooking', 'Partial': 'Cooking', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    CookSet_EventStarter.EventPlayAS({'Partial': 'CookingFairy', 'ASName': 'ResetCookingFairy', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    CookSet_EventStarter.EventWait({'Frames': 1, 'IsWaitEnd': True})

    fork {
        switch CookSet_EventStarter.EventQueryCookingResultChoice() {
          case 0:

            fork {
                Player.EventPlayerCook({'IsWaitEnd': True})
                Player.EventPlayerOnMotionTypeStatic()
                Player.EventPlayerPlayASForFlowchart({'ASCommand': 'GetCookingVeryGood', 'UseAnmDriven': False, 'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsAllSlot': True, 'ClothWarpMode': 0})
            } {
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 24})
                SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_CookingGreat', 'CommandLife': 2, 'IsReleaseDucking': False})
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 150})
                SoundSystemActor.EventSoundStartSound({'SLinkKey': 'BGM_CookingGreat_Finish', 'IsIgnoreDucking': False})
            } {
                CookSet_EventStarter.EventPlayPreCookingAS({'IsWaitEnd': True, 'ForceFadeInFrame': 0.0})
                CookSet_EventStarter.EventPlayCookingAS({'ForceFadeInFrame': -1.0, 'IsWaitEnd': False})
            }

            Event70:
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'IsRequestClearCarryBox'})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 24})
          case 1:

            fork {
                Player.EventPlayerCook({'IsWaitEnd': True})
                Player.EventPlayerOnMotionTypeStatic()
                Player.EventPlayerPlayASForFlowchart({'ASCommand': 'GetCookingGood', 'UseAnmDriven': False, 'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsAllSlot': True, 'ClothWarpMode': 0})
            } {
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 24})
                SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_CookingSuccess', 'CommandLife': 2, 'IsReleaseDucking': False})
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 150})
                SoundSystemActor.EventSoundStartSound({'SLinkKey': 'BGM_CookingSuccess_Finish', 'IsIgnoreDucking': False})
            } {
                CookSet_EventStarter.EventPlayPreCookingAS({'IsWaitEnd': True, 'ForceFadeInFrame': 0.0})
                CookSet_EventStarter.EventPlayCookingAS({'ForceFadeInFrame': -1.0, 'IsWaitEnd': False})
            }

            goto Event70
          case 2:

            fork {
                Player.EventPlayerCook({'IsWaitEnd': True})
                Player.EventPlayerOnMotionTypeStatic()
                Player.EventPlayerPlayASForFlowchart({'ASCommand': 'GetCookingBad', 'UseAnmDriven': False, 'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsAllSlot': True, 'ClothWarpMode': 0})
            } {
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 24})
                SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_CookingFail', 'CommandLife': 2, 'IsReleaseDucking': False})
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 150})
                SoundSystemActor.EventSoundStartSound({'SLinkKey': 'BGM_CookingFail_Finish', 'IsIgnoreDucking': False})
            } {
                CookSet_EventStarter.EventPlayPreCookingAS({'IsWaitEnd': True, 'ForceFadeInFrame': 0.0})
                CookSet_EventStarter.EventPlayAS({'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'FailCooking', 'IsWaitEnd': False, 'Partial': 'Cooking'})
            }

            goto Event70
        }
    } {
        EventSystemActor.EventTriggerSkipAcceptStart({'SpecialEventActionType': 3})
    }

    EventSystemActor.EventTriggerSkipEnd({'SpecialEventActionType': 4, 'BlackInSkipEnd': False})
    if !EventSystemActor.EventQueryIsEventSkipedMostRecent() {

        fork {
            SoundSystemActor.EventSoundReleaseDucking({'IsImmediately': True, 'DuckingName': 'イベントスキップ', 'DuckingName2': '', 'DuckingName3': '', 'IsClearRefCount': False})
            switch CookSet_EventStarter.EventQueryCookingResultChoice() {
              case 0:
                SoundSystemActor.EventSoundStartSound({'SLinkKey': 'BGM_CookingGreat_Finish', 'IsIgnoreDucking': False})
              case 1:
                SoundSystemActor.EventSoundStartSound({'SLinkKey': 'BGM_CookingSuccess_Finish', 'IsIgnoreDucking': False})
              case 2:
                SoundSystemActor.EventSoundStartSound({'SLinkKey': 'BGM_CookingFail_Finish', 'IsIgnoreDucking': False})
            }
        } {
            Player.EventPlayerWait({'IsWaitEnd': False})
            CookSet_EventStarter.EventTriggerRemoveAS({'Partial': ''})
        }

    }

    call GetPouchContent.GetCookResultWindow({'IsInvalidOpenPouch': True, 'Number': 1})

    if !GameSystemActor.EventQueryIsFirstCook() {
        GameSystemActor.EventOpenInstantTips({'IsWaitEnd': True, 'InstantTipwType': 22})
    }
    CookSet_EventStarter.EventTriggerClearCarryBoxDependency()
    Player.EventPlayerOffMotionTypeStatic()
}
