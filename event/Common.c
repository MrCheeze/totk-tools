-------- EventFlow: Common --------

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayerStopInAir', 'EventPlayerWait', 'EventPlayerHorseGetOff', 'EventPlayerUnequip', 'EventPlayerPlayASForFlowchart', 'EventPlayerTurnAndLookLastDoActor', 'EventTriggerPlayerGetOff', 'EventTriggerEquipmentUserRequestChangeState']
queries: ['EventQueryCheckPlayerState', 'EventQueryPlayerCheckRideHorse']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventOpenActionGuideScreen', 'EventCloseActionGuideScreen', 'EventTriggerNoticeActionGuideScreenClosable']
queries: ['EventQueryUnequipForInitPlayState', 'EventQueryRidableGetOffForInitPlayState', 'EventQueryHaveOpenedActionGuide']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventTriggerShowReadyGo']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventTriggerSendSetOffsetDiffToEventCamera', 'EventSendEventTalkMessageToPlayerCamera', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventNPCTurnToObjectGreeting', 'EventTriggerSetHaveTalked', 'EventTriggerBecomeSpeaker', 'EventTriggerSetRecentTalkFlag', 'EventWait']
queries: ['EventQueryHasControllerSet']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundRequestDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void AirStartUP_Player() {
    if !Player.EventQueryCheckPlayerState({'State': 5}) {
        if !Player.EventQueryCheckPlayerState({'State': 6}) {
            Player.EventPlayerStopInAir({'IsWaitEnd': True, 'EnableCalcAnm': False})
        } else {
            Player.EventTriggerParticipateEvent()
        }
    } else {
        Player.EventPlayerWait({'IsWaitEnd': True})
    }
}

void InitPlayState() {
    if GameSystemActor.EventQueryUnequipForInitPlayState({'IsUnequip': 'IsUnequip'}) {
        Player.EventPlayerUnequip({'IsWaitEnd': True})
    }
    if GameSystemActor.EventQueryRidableGetOffForInitPlayState({'IsRidableGetOff': 'IsRidableGetOff'})
    && !Player.EventQueryPlayerCheckRideHorse({'IsRidingAny': True, 'Type': 0, 'ActorFileName': ''}) {
        Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
    }
}

void OpenActionGuideScreen() {
    if GameSystemActor.EventQueryHaveOpenedActionGuide({'ActionGuideType': 'ActionGuideType'}) {
        Event14:
        GameSystemActor.EventOpenActionGuideScreen({'IsWaitEnd': True, 'ActionGuideType': 'ActionGuideType'})
        EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
        GameSystemActor.EventTriggerNoticeActionGuideScreenClosable()
        GameSystemActor.EventCloseActionGuideScreen({'IsWaitEnd': True})
    }
}

void AirStartUP_Player_OnlyStopInAir() {
    if !Player.EventQueryCheckPlayerState({'State': 5})
    && !Player.EventQueryCheckPlayerState({'State': 6}) {
        Player.EventPlayerStopInAir({'IsWaitEnd': True, 'EnableCalcAnm': False})
    } else {
        Player.EventTriggerParticipateEvent()
    }
}

void AirStartUP_Player_ConsideringSwimming() {
    if !Player.EventQueryCheckPlayerState({'State': 5}) {
        if !Player.EventQueryCheckPlayerState({'State': 6})
        && !Player.EventQueryCheckPlayerState({'State': 3}) {
            Player.EventPlayerStopInAir({'IsWaitEnd': True, 'EnableCalcAnm': False})
        } else {
            Player.EventTriggerParticipateEvent()
        }
    } else {
        Player.EventPlayerWait({'IsWaitEnd': True})
    }
}

void OpenActionGuideScreenForce() {
    goto Event14
}

void EventTriggerShowReadyGoWithCountIn() {
    ChallengeSystemActor.EventTriggerShowReadyGo({'HasCountIn': True})
    EventSystemActor.EventWait({'Frames': 90, 'IsWaitEnd': True})
}

void SnappingInterval() {
    EventCamera.EventWait({'IsWaitEnd': True, 'Frames': 70})
}

void SetPlayerCameraOffsetDiffToEventCamera() {
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0})
    EventCamera.EventTriggerSendSetOffsetDiffToEventCamera()
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
}

void CancelLiftByOwned() {

    fork {

        call CancelLiftByOwnedPlayerAnim()

    } {
        Npc_EventStarter.EventWait({'IsWaitEnd': True, 'Frames': 1})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    Npc_EventStarter.EventTriggerBecomeSpeaker()

    fork {
        Npc_EventStarter.EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': False})
        Npc_EventStarter.EventTriggerSetRecentTalkFlag({'value': True, 'IsReflectWhenSleep': False})
        if !Npc_EventStarter.EventQueryHasControllerSet() {
            Npc_EventStarter.EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'GreetType': 3, 'TurnType': 4})
        }
    } {
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': '会話中', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
    }

}

void CancelLiftByOwnedPlayerAnim() {
    Player.EventPlayerUnequip({'IsWaitEnd': True})
    Player.EventPlayerTurnAndLookLastDoActor({'TurnFaceControlType': 1, 'IsWaitEnd': True, 'PosOffset': [0.0, 0.0, 0.0]})
    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'LiftNot', 'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ClothWarpMode': 0})
}

void CancelLiftByOwnedNotLift() {

    fork {
        Player.EventPlayerUnequip({'IsWaitEnd': True})
        Player.EventPlayerTurnAndLookLastDoActor({'TurnFaceControlType': 1, 'IsWaitEnd': True, 'PosOffset': [0.0, 0.0, 0.0]})
        Player.EventPlayerWait({'IsWaitEnd': True})
    } {
        Npc_EventStarter.EventWait({'IsWaitEnd': True, 'Frames': 1})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    Npc_EventStarter.EventTriggerBecomeSpeaker()

    fork {
        Npc_EventStarter.EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': False})
        Npc_EventStarter.EventTriggerSetRecentTalkFlag({'value': True, 'IsReflectWhenSleep': False})
        if !Npc_EventStarter.EventQueryHasControllerSet() {
            Npc_EventStarter.EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'GreetType': 3, 'TurnType': 4})
        }
    } {
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': '会話中', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
    }

}

void InitPlayStateTrigger() {
    if !Player.EventQueryCheckPlayerState({'State': 5}) {
        Event62:
        if !GameSystemActor.EventQueryUnequipForInitPlayState({'IsUnequip': 'IsUnequip'}) {
            Event63:
            if GameSystemActor.EventQueryRidableGetOffForInitPlayState({'IsRidableGetOff': 'IsRidableGetOff'}) {
                Player.EventTriggerPlayerGetOff()
            }
        } else {
            Player.EventTriggerEquipmentUserRequestChangeState({'EquipmentState': 2, 'DynamicEquipmentSlot': 0})
            Player.EventTriggerEquipmentUserRequestChangeState({'EquipmentState': 2, 'DynamicEquipmentSlot': 3})
            Player.EventTriggerEquipmentUserRequestChangeState({'EquipmentState': 2, 'DynamicEquipmentSlot': 4})
            goto Event63
        }
    } else
    if Player.EventQueryCheckPlayerState({'State': 12}) {
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'Wait', 'ForceFadeFrame': 0.0, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ClothWarpMode': 0})
    }
    goto Event62
}

void CancelWaitPlayerAnim() {
    Player.EventPlayerUnequip({'IsWaitEnd': True})
    Player.EventPlayerTurnAndLookLastDoActor({'TurnFaceControlType': 1, 'IsWaitEnd': True, 'PosOffset': [0.0, 0.0, 0.0]})
    Player.EventPlayerWait({'IsWaitEnd': True})
}

void CancelLiftByOwnedNoCamera() {

    fork {

        call CancelLiftByOwnedPlayerAnim()

    } {
        Npc_EventStarter.EventWait({'IsWaitEnd': True, 'Frames': 1})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    Npc_EventStarter.EventTriggerBecomeSpeaker()

    fork {
        Npc_EventStarter.EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': False})
        Npc_EventStarter.EventTriggerSetRecentTalkFlag({'value': True, 'IsReflectWhenSleep': False})
        if !Npc_EventStarter.EventQueryHasControllerSet() {
            Npc_EventStarter.EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'GreetType': 3, 'TurnType': 4})
        }
    } {
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': '会話中', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
    }

}
