-------- EventFlow: InitTalk --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventNPCTurnToObjectGreeting', 'EventTriggerSetHaveTalked', 'EventTriggerBecomeSpeaker', 'EventTriggerSetRecentTalkFlag', 'EventUnequipWeapon']
queries: ['EventQueryHasControllerSet', 'EventQueryNeedEquipWeapon']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayerTalk', 'EventPlayerUnequip', 'EventPlayerConversate', 'EventTriggerPlayerLookAtObject', 'EventPlayerStopInAir']
queries: ['EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventSendEventTalkMessageToPlayerCamera', 'EventChangeTemporarilyToPlayerCamera', 'EventSendMultiEventTalkMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundRequestDucking', 'EventSoundChangeListenerPreset']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Zora003[InitTalkKingZora(Self)]
entrypoint: InitTalkKingZora(Self)
actions: []
queries: []
params: None

Actor: Npc_AncientDoctor[InitTalkOnEventWithAirPause(Self)]
entrypoint: InitTalkOnEventWithAirPause(Self)
actions: ['EventTriggerBecomeSpeaker', 'EventTriggerSetHaveTalked', 'EventTriggerSetRecentTalkFlag', 'EventUnequipWeapon', 'EventNPCTurnToObjectGreeting']
queries: ['EventQueryNeedEquipWeapon', 'EventQueryHasControllerSet']
params: None

Actor: Npc_AncientDoctor[InitTalkEquipOnEvent(Self)]
entrypoint: InitTalkEquipOnEvent(Self)
actions: ['EventTriggerBecomeSpeaker', 'EventTriggerSetRecentTalkFlag', 'EventNPCTurnToObjectGreeting']
queries: []
params: None

Actor: Npc_EventStarter[InitTalk_Pair(Actor1)]
entrypoint: InitTalk_Pair(Actor1)
actions: ['EventTriggerBecomeSpeaker', 'EventTriggerSetRecentTalkFlag', 'EventTriggerSetHaveTalked', 'EventUnequipWeapon', 'EventNPCTurnToObjectGreeting']
queries: ['EventQueryNeedEquipWeapon', 'EventQueryHasControllerSet']
params: None

Actor: Npc_EventStarter[InitTalk_Pair(Actor2)]
entrypoint: InitTalk_Pair(Actor2)
actions: ['EventTriggerSetRecentTalkFlag', 'EventTriggerSetHaveTalked', 'EventUnequipWeapon', 'EventNPCTurnToObjectGreeting']
queries: ['EventQueryNeedEquipWeapon', 'EventQueryHasControllerSet']
params: None

Actor: Npc_EventStarter[InitTalk_Trio(Actor1)]
entrypoint: InitTalk_Trio(Actor1)
actions: ['EventTriggerBecomeSpeaker', 'EventTriggerSetRecentTalkFlag', 'EventTriggerSetHaveTalked', 'EventUnequipWeapon', 'EventNPCTurnToObjectGreeting']
queries: ['EventQueryNeedEquipWeapon', 'EventQueryHasControllerSet']
params: None

Actor: Npc_EventStarter[InitTalk_Trio(Actor2)]
entrypoint: InitTalk_Trio(Actor2)
actions: ['EventTriggerSetRecentTalkFlag', 'EventTriggerSetHaveTalked', 'EventUnequipWeapon', 'EventNPCTurnToObjectGreeting']
queries: ['EventQueryNeedEquipWeapon', 'EventQueryHasControllerSet']
params: None

Actor: Npc_EventStarter[InitTalk_Trio(Actor3)]
entrypoint: InitTalk_Trio(Actor3)
actions: ['EventTriggerSetRecentTalkFlag', 'EventTriggerSetHaveTalked', 'EventUnequipWeapon', 'EventNPCTurnToObjectGreeting']
queries: ['EventQueryNeedEquipWeapon', 'EventQueryHasControllerSet']
params: None

Actor: Npc_EventStarter[InitTalk_Quartet(Actor1)]
entrypoint: InitTalk_Quartet(Actor1)
actions: ['EventTriggerBecomeSpeaker', 'EventTriggerSetRecentTalkFlag', 'EventTriggerSetHaveTalked', 'EventUnequipWeapon', 'EventNPCTurnToObjectGreeting']
queries: ['EventQueryNeedEquipWeapon', 'EventQueryHasControllerSet']
params: None

Actor: Npc_EventStarter[InitTalk_Quartet(Actor2)]
entrypoint: InitTalk_Quartet(Actor2)
actions: ['EventTriggerSetRecentTalkFlag', 'EventTriggerSetHaveTalked', 'EventUnequipWeapon', 'EventNPCTurnToObjectGreeting']
queries: ['EventQueryNeedEquipWeapon', 'EventQueryHasControllerSet']
params: None

Actor: Npc_EventStarter[InitTalk_Quartet(Actor3)]
entrypoint: InitTalk_Quartet(Actor3)
actions: ['EventTriggerSetRecentTalkFlag', 'EventTriggerSetHaveTalked', 'EventUnequipWeapon', 'EventNPCTurnToObjectGreeting']
queries: ['EventQueryNeedEquipWeapon', 'EventQueryHasControllerSet']
params: None

Actor: Npc_EventStarter[InitTalk_Quartet(Actor4)]
entrypoint: InitTalk_Quartet(Actor4)
actions: ['EventTriggerSetRecentTalkFlag', 'EventTriggerSetHaveTalked', 'EventUnequipWeapon', 'EventNPCTurnToObjectGreeting']
queries: ['EventQueryNeedEquipWeapon', 'EventQueryHasControllerSet']
params: None

Actor: Npc_AncientDoctor[InitTalkNoTurnOnEvent(Self)]
entrypoint: InitTalkNoTurnOnEvent(Self)
actions: ['EventTriggerBecomeSpeaker']
queries: []
params: None

Actor: Npc_Zonau_Golem_Servant[InitTalkZonauGolemServant(Self)]
entrypoint: InitTalkZonauGolemServant(Self)
actions: ['EventTriggerBecomeSpeaker', 'EventZonauGolemServantWakeUp', 'EventTriggerSetHaveTalked', 'EventTriggerSetRecentTalkFlag', 'EventUnequipWeapon', 'EventNPCTurnToObjectGreeting']
queries: ['EventQueryNeedEquipWeapon', 'EventQueryHasControllerSet']
params: None

Actor: Npc_AncientDoctor[InitTalkExceptCameraOnEvent(Self)]
entrypoint: InitTalkExceptCameraOnEvent(Self)
actions: ['EventTriggerSetHaveTalked', 'EventTriggerSetRecentTalkFlag', 'EventUnequipWeapon', 'EventNPCTurnToObjectGreeting']
queries: ['EventQueryNeedEquipWeapon', 'EventQueryHasControllerSet']
params: None

Actor: Npc_AncientDoctor[InitTalkBookExceptCameraOnEvent(Self)]
entrypoint: InitTalkBookExceptCameraOnEvent(Self)
actions: ['EventTriggerSetRecentTalkFlag', 'EventTriggerSetHaveTalked']
queries: []
params: None

Actor: Npc_AncientDoctor[InitTalkOnEvent(Self)]
entrypoint: InitTalkOnEvent(Self)
actions: ['EventTriggerBecomeSpeaker', 'EventTriggerSetHaveTalked', 'EventTriggerSetRecentTalkFlag', 'EventUnequipWeapon', 'EventNPCTurnToObjectGreeting']
queries: ['EventQueryNeedEquipWeapon', 'EventQueryHasControllerSet']
params: None

Actor: Npc_AncientDoctor[InitTalkExceptCameraOnEventWithAirPause(Self)]
entrypoint: InitTalkExceptCameraOnEventWithAirPause(Self)
actions: ['EventTriggerSetHaveTalked', 'EventTriggerSetRecentTalkFlag', 'EventUnequipWeapon', 'EventNPCTurnToObjectGreeting']
queries: ['EventQueryNeedEquipWeapon', 'EventQueryHasControllerSet']
params: None

Actor: Npc_EventStarter[InitTalk_TrioExceptCamera(Actor1)]
entrypoint: InitTalk_TrioExceptCamera(Actor1)
actions: ['EventTriggerBecomeSpeaker', 'EventTriggerSetRecentTalkFlag', 'EventTriggerSetHaveTalked', 'EventUnequipWeapon', 'EventNPCTurnToObjectGreeting']
queries: ['EventQueryNeedEquipWeapon', 'EventQueryHasControllerSet']
params: None

Actor: Npc_EventStarter[InitTalk_TrioExceptCamera(Actor2)]
entrypoint: InitTalk_TrioExceptCamera(Actor2)
actions: ['EventTriggerSetRecentTalkFlag', 'EventTriggerSetHaveTalked', 'EventUnequipWeapon', 'EventNPCTurnToObjectGreeting']
queries: ['EventQueryNeedEquipWeapon', 'EventQueryHasControllerSet']
params: None

Actor: Npc_EventStarter[InitTalk_TrioExceptCamera(Actor3)]
entrypoint: InitTalk_TrioExceptCamera(Actor3)
actions: ['EventTriggerSetRecentTalkFlag', 'EventTriggerSetHaveTalked', 'EventUnequipWeapon', 'EventNPCTurnToObjectGreeting']
queries: ['EventQueryNeedEquipWeapon', 'EventQueryHasControllerSet']
params: None

Actor: Npc_AncientDoctor[InitTalkInAir(Self)]
entrypoint: InitTalkInAir(Self)
actions: ['EventTriggerBecomeSpeaker', 'EventTriggerSetRecentTalkFlag', 'EventUnequipWeapon', 'EventNPCTurnToObjectGreeting']
queries: ['EventQueryNeedEquipWeapon']
params: None

Actor: Npc_Zonau_Golem_Servant[InitTalkZonauGolemServantInAir(Self)]
entrypoint: InitTalkZonauGolemServantInAir(Self)
actions: ['EventTriggerBecomeSpeaker', 'EventZonauGolemServantWakeUp', 'EventTriggerSetHaveTalked', 'EventTriggerSetRecentTalkFlag', 'EventUnequipWeapon', 'EventNPCTurnToObjectGreeting']
queries: ['EventQueryNeedEquipWeapon', 'EventQueryHasControllerSet']
params: None

void InitTalk() {
    Npc_EventStarter.EventTriggerBecomeSpeaker()

    fork {
        Player.EventPlayerUnequip({'IsWaitEnd': True})
        Player.EventPlayerConversate({'IsWaitEnd': True, 'EventGreetType': 'Arg_Greeting'})
    } {
        Npc_EventStarter.EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': False})
        Npc_EventStarter.EventTriggerSetRecentTalkFlag({'value': True, 'IsReflectWhenSleep': False})
        if !Npc_EventStarter.EventQueryNeedEquipWeapon() {
            Npc_EventStarter.EventUnequipWeapon({'IsWaitEnd': True})
        }
        if !Npc_EventStarter.EventQueryHasControllerSet() {
            Npc_EventStarter.EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'TurnType': 'Arg_Turn', 'GreetType': 'Arg_Greeting'})
        }
    } {
        SoundSystemActor.EventSoundChangeListenerPreset({'ListenerPresetName': 'Talk', 'FadeTime': 0.0})
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': '会話中', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
    }

}

void InitTalkKingZora() {
    Npc_EventStarter.EventTriggerBecomeSpeaker()

    fork {
        Player.EventPlayerUnequip({'IsWaitEnd': True})
        Player.EventPlayerTalk({'HelloType': 0, 'IsWaitEnd': True})
    } {
        Npc_EventStarter.EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': False})
        Npc_EventStarter.EventTriggerSetRecentTalkFlag({'value': True, 'IsReflectWhenSleep': False})
        if !Npc_EventStarter.EventQueryHasControllerSet() {
            Npc_EventStarter.EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'GreetType': 3, 'TurnType': 'Arg_Turn'})
        }
    } {
        SoundSystemActor.EventSoundChangeListenerPreset({'ListenerPresetName': 'Talk', 'FadeTime': 0.0})
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': '会話中', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
    }

}

void InitTalkNoTurn() {
    Npc_EventStarter.EventTriggerBecomeSpeaker()

    fork {
        Player.EventTriggerParticipateEvent()
    } {
        SoundSystemActor.EventSoundChangeListenerPreset({'ListenerPresetName': 'Talk', 'FadeTime': 0.0})
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': '会話中', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
    }

}

void InitTalkOnEventWithAirPause() {
    Npc_AncientDoctor[InitTalkOnEventWithAirPause(Self)].EventTriggerBecomeSpeaker()

    fork {
        if !Player.EventQueryCheckPlayerState({'State': 5}) {
            if !Player.EventQueryCheckPlayerState({'State': 6}) {
                Player.EventPlayerStopInAir({'IsWaitEnd': True, 'EnableCalcAnm': False})
            } else {
                Player.EventTriggerParticipateEvent()
            }
        } else {
            Player.EventPlayerUnequip({'IsWaitEnd': True})
            Player.EventPlayerTalk({'HelloType': 0, 'IsWaitEnd': True})
        }
    } {
        Npc_AncientDoctor[InitTalkOnEventWithAirPause(Self)].EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': False})
        Npc_AncientDoctor[InitTalkOnEventWithAirPause(Self)].EventTriggerSetRecentTalkFlag({'value': True, 'IsReflectWhenSleep': False})
        if !Npc_AncientDoctor[InitTalkOnEventWithAirPause(Self)].EventQueryNeedEquipWeapon() {
            Npc_AncientDoctor[InitTalkOnEventWithAirPause(Self)].EventUnequipWeapon({'IsWaitEnd': True})
        }
        if !Npc_AncientDoctor[InitTalkOnEventWithAirPause(Self)].EventQueryHasControllerSet() {
            Npc_AncientDoctor[InitTalkOnEventWithAirPause(Self)].EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'GreetType': 3, 'TurnType': 'Arg_Turn'})
        }
    } {
        SoundSystemActor.EventSoundChangeListenerPreset({'ListenerPresetName': 'Talk', 'FadeTime': 0.0})
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': '会話中', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
    }

}

void InitTalkEquipOnEvent() {
    Npc_AncientDoctor[InitTalkEquipOnEvent(Self)].EventTriggerBecomeSpeaker()

    fork {
        Player.EventTriggerParticipateEvent()
    } {
        Npc_AncientDoctor[InitTalkEquipOnEvent(Self)].EventTriggerSetRecentTalkFlag({'value': True, 'IsReflectWhenSleep': False})
        Npc_AncientDoctor[InitTalkEquipOnEvent(Self)].EventTriggerSetRecentTalkFlag({'value': True, 'IsReflectWhenSleep': False})
        if !Npc_EventStarter.EventQueryHasControllerSet() {
            Npc_AncientDoctor[InitTalkEquipOnEvent(Self)].EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'GreetType': 3, 'TurnType': 'Arg_Turn'})
        }
    } {
        SoundSystemActor.EventSoundChangeListenerPreset({'ListenerPresetName': 'Talk', 'FadeTime': 0.0})
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': '会話中', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
    }

}

void InitTalkNPCEquip() {
    Npc_EventStarter.EventTriggerBecomeSpeaker()

    fork {
        Player.EventPlayerUnequip({'IsWaitEnd': True})
        Player.EventPlayerConversate({'IsWaitEnd': True, 'EventGreetType': 'Arg_Greeting'})
    } {
        Npc_EventStarter.EventTriggerSetRecentTalkFlag({'value': True, 'IsReflectWhenSleep': False})
        Npc_EventStarter.EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': False})
    } {
        SoundSystemActor.EventSoundChangeListenerPreset({'ListenerPresetName': 'Talk', 'FadeTime': 0.0})
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': '会話中', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
    }

}

void InitTalkSell_ReturnArrivalAnchor() {
    Npc_EventStarter.EventTriggerBecomeSpeaker()

    fork {
        Player.EventPlayerUnequip({'IsWaitEnd': True})
        Player.EventTriggerPlayerLookAtObject({'Target': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1})
    } {
        Npc_EventStarter.EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': False})
        Npc_EventStarter.EventTriggerSetRecentTalkFlag({'value': True, 'IsReflectWhenSleep': False})
        if !Npc_EventStarter.EventQueryNeedEquipWeapon() {
            Npc_EventStarter.EventUnequipWeapon({'IsWaitEnd': True})
        }
        if !Npc_EventStarter.EventQueryHasControllerSet() {
            Npc_EventStarter.EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'TurnType': 'Arg_Turn', 'GreetType': 3})
        }
    } {
        SoundSystemActor.EventSoundChangeListenerPreset({'ListenerPresetName': 'Talk', 'FadeTime': 0.0})
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': '会話中', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
        EventCamera.EventChangeTemporarilyToPlayerCamera({'EnableControle': True, 'IsWaitEnd': False})
    }

}

void InitTalk_Pair() {
    Npc_EventStarter[InitTalk_Pair(Actor1)].EventTriggerBecomeSpeaker()

    fork {
        Npc_EventStarter[InitTalk_Pair(Actor1)].EventTriggerSetRecentTalkFlag({'value': True, 'IsReflectWhenSleep': False})
        Npc_EventStarter[InitTalk_Pair(Actor1)].EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': False})
        if !Npc_EventStarter[InitTalk_Pair(Actor1)].EventQueryNeedEquipWeapon() {
            Npc_EventStarter[InitTalk_Pair(Actor1)].EventUnequipWeapon({'IsWaitEnd': True})
        }
        if !Npc_EventStarter[InitTalk_Pair(Actor1)].EventQueryHasControllerSet() {
            Npc_EventStarter[InitTalk_Pair(Actor1)].EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'TurnType': 'Arg_Turn', 'GreetType': 'Arg_Greeting'})
        }
    } {
        Npc_EventStarter[InitTalk_Pair(Actor2)].EventTriggerSetRecentTalkFlag({'value': True, 'IsReflectWhenSleep': False})
        Npc_EventStarter[InitTalk_Pair(Actor2)].EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': False})
        if !Npc_EventStarter[InitTalk_Pair(Actor2)].EventQueryNeedEquipWeapon() {
            Npc_EventStarter[InitTalk_Pair(Actor2)].EventUnequipWeapon({'IsWaitEnd': True})
        }
        if !Npc_EventStarter[InitTalk_Pair(Actor2)].EventQueryHasControllerSet() {
            Npc_EventStarter[InitTalk_Pair(Actor2)].EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'TurnType': 'Arg_Turn', 'GreetType': 'Arg_Greeting'})
        }
    } {
        Player.EventPlayerUnequip({'IsWaitEnd': True})
        Player.EventPlayerConversate({'IsWaitEnd': True, 'EventGreetType': 'Arg_Greeting'})
    } {
        SoundSystemActor.EventSoundChangeListenerPreset({'ListenerPresetName': 'Talk', 'FadeTime': 0.0})
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': '会話中', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
        EventCamera.EventSendMultiEventTalkMessageToPlayerCamera({'Speaker1SetType': 1, 'Speaker2SetType': 1, 'Spearker1ActorName': 'Spearker1ActorName', 'Spearker1InstanceName': 'Spearker1InstanceName', 'Spearker2ActorName': 'Spearker2ActorName', 'Spearker2InstanceName': 'Spearker2InstanceName', 'IsWaitEnd': False, 'Speaker3SetType': 0, 'Spearker3ActorName': '', 'Spearker3InstanceName': '', 'Speaker4SetType': 0, 'Spearker4ActorName': '', 'Spearker4InstanceName': ''})
    }

}

void InitTalk_Trio() {
    Npc_EventStarter[InitTalk_Trio(Actor1)].EventTriggerBecomeSpeaker()

    fork {
        Npc_EventStarter[InitTalk_Trio(Actor1)].EventTriggerSetRecentTalkFlag({'value': True, 'IsReflectWhenSleep': False})
        Npc_EventStarter[InitTalk_Trio(Actor1)].EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': False})
        if !Npc_EventStarter[InitTalk_Trio(Actor1)].EventQueryNeedEquipWeapon() {
            Npc_EventStarter[InitTalk_Trio(Actor1)].EventUnequipWeapon({'IsWaitEnd': True})
        }
        if !Npc_EventStarter[InitTalk_Trio(Actor1)].EventQueryHasControllerSet() {
            Npc_EventStarter[InitTalk_Trio(Actor1)].EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'TurnType': 'Arg_Turn', 'GreetType': 'Arg_Greeting'})
        }
    } {
        Npc_EventStarter[InitTalk_Trio(Actor2)].EventTriggerSetRecentTalkFlag({'value': True, 'IsReflectWhenSleep': False})
        Npc_EventStarter[InitTalk_Trio(Actor2)].EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': False})
        if !Npc_EventStarter[InitTalk_Trio(Actor2)].EventQueryNeedEquipWeapon() {
            Npc_EventStarter[InitTalk_Trio(Actor2)].EventUnequipWeapon({'IsWaitEnd': True})
        }
        if !Npc_EventStarter[InitTalk_Trio(Actor2)].EventQueryHasControllerSet() {
            Npc_EventStarter[InitTalk_Trio(Actor2)].EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'TurnType': 'Arg_Turn', 'GreetType': 'Arg_Greeting'})
        }
    } {
        Npc_EventStarter[InitTalk_Trio(Actor3)].EventTriggerSetRecentTalkFlag({'value': True, 'IsReflectWhenSleep': False})
        Npc_EventStarter[InitTalk_Trio(Actor3)].EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': False})
        if !Npc_EventStarter[InitTalk_Trio(Actor3)].EventQueryNeedEquipWeapon() {
            Npc_EventStarter[InitTalk_Trio(Actor3)].EventUnequipWeapon({'IsWaitEnd': True})
        }
        if !Npc_EventStarter[InitTalk_Trio(Actor3)].EventQueryHasControllerSet() {
            Npc_EventStarter[InitTalk_Trio(Actor3)].EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'TurnType': 'Arg_Turn', 'GreetType': 'Arg_Greeting'})
        }
    } {
        Player.EventPlayerUnequip({'IsWaitEnd': True})
        Player.EventPlayerConversate({'IsWaitEnd': True, 'EventGreetType': 'Arg_Greeting'})
    } {
        SoundSystemActor.EventSoundChangeListenerPreset({'ListenerPresetName': 'Talk', 'FadeTime': 0.0})
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': '会話中', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
        EventCamera.EventSendMultiEventTalkMessageToPlayerCamera({'Speaker1SetType': 1, 'Speaker2SetType': 1, 'Speaker3SetType': 1, 'Spearker1ActorName': 'Spearker1ActorName', 'Spearker1InstanceName': 'Spearker1InstanceName', 'Spearker2ActorName': 'Spearker2ActorName', 'Spearker2InstanceName': 'Spearker2InstanceName', 'Spearker3ActorName': 'Spearker3ActorName', 'Spearker3InstanceName': 'Spearker3InstanceName', 'IsWaitEnd': False, 'Speaker4SetType': 0, 'Spearker4ActorName': '', 'Spearker4InstanceName': ''})
    }

}

void InitTalk_Quartet() {
    Npc_EventStarter[InitTalk_Quartet(Actor1)].EventTriggerBecomeSpeaker()

    fork {
        Npc_EventStarter[InitTalk_Quartet(Actor1)].EventTriggerSetRecentTalkFlag({'value': True, 'IsReflectWhenSleep': False})
        Npc_EventStarter[InitTalk_Quartet(Actor1)].EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': False})
        if !Npc_EventStarter[InitTalk_Quartet(Actor1)].EventQueryNeedEquipWeapon() {
            Npc_EventStarter[InitTalk_Quartet(Actor1)].EventUnequipWeapon({'IsWaitEnd': True})
        }
        if !Npc_EventStarter[InitTalk_Quartet(Actor1)].EventQueryHasControllerSet() {
            Npc_EventStarter[InitTalk_Quartet(Actor1)].EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'TurnType': 'Arg_Turn', 'GreetType': 'Arg_Greeting'})
        }
    } {
        Npc_EventStarter[InitTalk_Quartet(Actor2)].EventTriggerSetRecentTalkFlag({'value': True, 'IsReflectWhenSleep': False})
        Npc_EventStarter[InitTalk_Quartet(Actor2)].EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': False})
        if !Npc_EventStarter[InitTalk_Quartet(Actor2)].EventQueryNeedEquipWeapon() {
            Npc_EventStarter[InitTalk_Quartet(Actor2)].EventUnequipWeapon({'IsWaitEnd': True})
        }
        if !Npc_EventStarter[InitTalk_Quartet(Actor2)].EventQueryHasControllerSet() {
            Npc_EventStarter[InitTalk_Quartet(Actor2)].EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'TurnType': 'Arg_Turn', 'GreetType': 'Arg_Greeting'})
        }
    } {
        Npc_EventStarter[InitTalk_Quartet(Actor3)].EventTriggerSetRecentTalkFlag({'value': True, 'IsReflectWhenSleep': False})
        Npc_EventStarter[InitTalk_Quartet(Actor3)].EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': False})
        if !Npc_EventStarter[InitTalk_Quartet(Actor3)].EventQueryNeedEquipWeapon() {
            Npc_EventStarter[InitTalk_Quartet(Actor3)].EventUnequipWeapon({'IsWaitEnd': True})
        }
        if !Npc_EventStarter[InitTalk_Quartet(Actor3)].EventQueryHasControllerSet() {
            Npc_EventStarter[InitTalk_Quartet(Actor3)].EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'TurnType': 'Arg_Turn', 'GreetType': 'Arg_Greeting'})
        }
    } {
        Npc_EventStarter[InitTalk_Quartet(Actor4)].EventTriggerSetRecentTalkFlag({'value': True, 'IsReflectWhenSleep': False})
        Npc_EventStarter[InitTalk_Quartet(Actor4)].EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': False})
        if !Npc_EventStarter[InitTalk_Quartet(Actor4)].EventQueryNeedEquipWeapon() {
            Npc_EventStarter[InitTalk_Quartet(Actor4)].EventUnequipWeapon({'IsWaitEnd': True})
        }
        if !Npc_EventStarter[InitTalk_Quartet(Actor4)].EventQueryHasControllerSet() {
            Npc_EventStarter[InitTalk_Quartet(Actor4)].EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'TurnType': 'Arg_Turn', 'GreetType': 'Arg_Greeting'})
        }
    } {
        Player.EventPlayerUnequip({'IsWaitEnd': True})
        Player.EventPlayerConversate({'IsWaitEnd': True, 'EventGreetType': 'Arg_Greeting'})
    } {
        SoundSystemActor.EventSoundChangeListenerPreset({'ListenerPresetName': 'Talk', 'FadeTime': 0.0})
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': '会話中', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
        EventCamera.EventSendMultiEventTalkMessageToPlayerCamera({'Speaker1SetType': 1, 'Speaker2SetType': 1, 'Speaker3SetType': 1, 'Speaker4SetType': 1, 'Spearker1ActorName': 'Spearker1ActorName', 'Spearker1InstanceName': 'Spearker1InstanceName', 'Spearker2ActorName': 'Spearker2ActorName', 'Spearker2InstanceName': 'Spearker2InstanceName', 'Spearker3ActorName': 'Spearker3ActorName', 'Spearker3InstanceName': 'Spearker3InstanceName', 'Spearker4ActorName': 'Spearker4ActorName', 'Spearker4InstanceName': 'Spearker4InstanceName', 'IsWaitEnd': False})
    }

}

void InitTalkExceptCamera() {

    fork {
        Player.EventPlayerUnequip({'IsWaitEnd': True})
        Player.EventPlayerConversate({'IsWaitEnd': True, 'EventGreetType': 'Arg_Greeting'})
    } {
        Npc_EventStarter.EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': False})
        Npc_EventStarter.EventTriggerSetRecentTalkFlag({'value': True, 'IsReflectWhenSleep': False})
        if !Npc_EventStarter.EventQueryNeedEquipWeapon() {
            Npc_EventStarter.EventUnequipWeapon({'IsWaitEnd': True})
        }
        if !Npc_EventStarter.EventQueryHasControllerSet() {
            Npc_EventStarter.EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'TurnType': 'Arg_Turn', 'GreetType': 'Arg_Greeting'})
        }
    } {
        SoundSystemActor.EventSoundChangeListenerPreset({'ListenerPresetName': 'Talk', 'FadeTime': 0.0})
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': '会話中', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
    }

}

void InitTalkNoTurnOnEvent() {
    Npc_AncientDoctor[InitTalkNoTurnOnEvent(Self)].EventTriggerBecomeSpeaker()

    fork {
        Player.EventTriggerParticipateEvent()
    } {
        SoundSystemActor.EventSoundChangeListenerPreset({'ListenerPresetName': 'Talk', 'FadeTime': 0.0})
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': '会話中', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
    }

}

void InitTalkZonauGolemServant() {
    Npc_Zonau_Golem_Servant[InitTalkZonauGolemServant(Self)].EventTriggerBecomeSpeaker()

    fork {
        Player.EventPlayerUnequip({'IsWaitEnd': True})
        Player.EventPlayerConversate({'IsWaitEnd': True, 'EventGreetType': 'Arg_Greeting'})
    } {
        Npc_Zonau_Golem_Servant[InitTalkZonauGolemServant(Self)].EventZonauGolemServantWakeUp({'IsWaitEnd': True})
        Npc_Zonau_Golem_Servant[InitTalkZonauGolemServant(Self)].EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': False})
        Npc_Zonau_Golem_Servant[InitTalkZonauGolemServant(Self)].EventTriggerSetRecentTalkFlag({'value': True, 'IsReflectWhenSleep': False})
        if !Npc_Zonau_Golem_Servant[InitTalkZonauGolemServant(Self)].EventQueryNeedEquipWeapon() {
            Npc_Zonau_Golem_Servant[InitTalkZonauGolemServant(Self)].EventUnequipWeapon({'IsWaitEnd': True})
        }
        if !Npc_Zonau_Golem_Servant[InitTalkZonauGolemServant(Self)].EventQueryHasControllerSet() {
            Npc_Zonau_Golem_Servant[InitTalkZonauGolemServant(Self)].EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'TurnType': 'Arg_Turn', 'GreetType': 'Arg_Greeting'})
        }
        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
    } {
        SoundSystemActor.EventSoundChangeListenerPreset({'ListenerPresetName': 'Talk', 'FadeTime': 0.0})
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': '会話中', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
    }

}

void InitTalkExceptCameraOnEvent() {

    fork {
        Player.EventPlayerUnequip({'IsWaitEnd': True})
        Player.EventPlayerTalk({'HelloType': 0, 'IsWaitEnd': True})
    } {
        Npc_AncientDoctor[InitTalkExceptCameraOnEvent(Self)].EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': False})
        Npc_AncientDoctor[InitTalkExceptCameraOnEvent(Self)].EventTriggerSetRecentTalkFlag({'value': True, 'IsReflectWhenSleep': False})
        if !Npc_AncientDoctor[InitTalkExceptCameraOnEvent(Self)].EventQueryNeedEquipWeapon() {
            Npc_AncientDoctor[InitTalkExceptCameraOnEvent(Self)].EventUnequipWeapon({'IsWaitEnd': True})
        }
        if !Npc_AncientDoctor[InitTalkExceptCameraOnEvent(Self)].EventQueryHasControllerSet() {
            Npc_AncientDoctor[InitTalkExceptCameraOnEvent(Self)].EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'GreetType': 3, 'TurnType': 'Arg_Turn'})
        }
    } {
        SoundSystemActor.EventSoundChangeListenerPreset({'ListenerPresetName': 'Talk', 'FadeTime': 0.0})
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': '会話中', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
    }

}

void InitTalkBook() {
    Npc_EventStarter.EventTriggerBecomeSpeaker()

    fork {
        Player.EventPlayerUnequip({'IsWaitEnd': True})
        Player.EventPlayerConversate({'IsWaitEnd': True, 'EventGreetType': 'Arg_Greeting'})
    } {
        Npc_EventStarter.EventTriggerSetRecentTalkFlag({'value': True, 'IsReflectWhenSleep': False})
        Npc_EventStarter.EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': False})
    } {
        SoundSystemActor.EventSoundChangeListenerPreset({'ListenerPresetName': 'Talk', 'FadeTime': 0.0})
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': '会話中', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
    }

}

void InitTalkBookEquip() {
    Npc_EventStarter.EventTriggerBecomeSpeaker()

    fork {
        Player.EventPlayerConversate({'IsWaitEnd': True, 'EventGreetType': 'Arg_Greeting'})
    } {
        Npc_EventStarter.EventTriggerSetRecentTalkFlag({'value': True, 'IsReflectWhenSleep': False})
        Npc_EventStarter.EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': False})
    } {
        SoundSystemActor.EventSoundChangeListenerPreset({'ListenerPresetName': 'Talk', 'FadeTime': 0.0})
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': '会話中', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
    }

}

void InitTalkBookExceptCamera() {

    fork {
        Player.EventPlayerUnequip({'IsWaitEnd': True})
        Player.EventPlayerConversate({'IsWaitEnd': True, 'EventGreetType': 'Arg_Greeting'})
    } {
        Npc_EventStarter.EventTriggerSetRecentTalkFlag({'value': True, 'IsReflectWhenSleep': False})
        Npc_EventStarter.EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': False})
    } {
        SoundSystemActor.EventSoundChangeListenerPreset({'ListenerPresetName': 'Talk', 'FadeTime': 0.0})
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': '会話中', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
    }

}

void InitTalkBookExceptCameraOnEvent() {

    fork {
        Player.EventPlayerUnequip({'IsWaitEnd': True})
        Player.EventPlayerConversate({'IsWaitEnd': True, 'EventGreetType': 'Arg_Greeting'})
    } {
        Npc_AncientDoctor[InitTalkBookExceptCameraOnEvent(Self)].EventTriggerSetRecentTalkFlag({'value': True, 'IsReflectWhenSleep': False})
        Npc_AncientDoctor[InitTalkBookExceptCameraOnEvent(Self)].EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': False})
    } {
        SoundSystemActor.EventSoundChangeListenerPreset({'ListenerPresetName': 'Talk', 'FadeTime': 0.0})
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': '会話中', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
    }

}

void InitTalkOnEvent() {
    Npc_AncientDoctor[InitTalkOnEvent(Self)].EventTriggerBecomeSpeaker()

    fork {
        Player.EventPlayerUnequip({'IsWaitEnd': True})
        Player.EventPlayerTalk({'HelloType': 0, 'IsWaitEnd': True})
    } {
        Npc_AncientDoctor[InitTalkOnEvent(Self)].EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': False})
        Npc_AncientDoctor[InitTalkOnEvent(Self)].EventTriggerSetRecentTalkFlag({'value': True, 'IsReflectWhenSleep': False})
        if !Npc_AncientDoctor[InitTalkOnEvent(Self)].EventQueryNeedEquipWeapon() {
            Npc_AncientDoctor[InitTalkOnEvent(Self)].EventUnequipWeapon({'IsWaitEnd': True})
        }
        if !Npc_AncientDoctor[InitTalkOnEvent(Self)].EventQueryHasControllerSet() {
            Npc_AncientDoctor[InitTalkOnEvent(Self)].EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'GreetType': 3, 'TurnType': 'Arg_Turn'})
        }
    } {
        SoundSystemActor.EventSoundChangeListenerPreset({'ListenerPresetName': 'Talk', 'FadeTime': 0.0})
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': '会話中', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
    }

}

void InitTalkNoTurnWithAirPause() {
    Npc_EventStarter.EventTriggerBecomeSpeaker()

    fork {
        if !Player.EventQueryCheckPlayerState({'State': 5}) {
            Player.EventPlayerStopInAir({'IsWaitEnd': True, 'EnableCalcAnm': False})
        } else {
            Player.EventTriggerParticipateEvent()
        }
    } {
        SoundSystemActor.EventSoundChangeListenerPreset({'ListenerPresetName': 'Talk', 'FadeTime': 0.0})
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': '会話中', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
    }

}

void InitTalkExceptCameraOnEventWithAirPause() {

    fork {
        if !Player.EventQueryCheckPlayerState({'State': 5}) {
            if !Player.EventQueryCheckPlayerState({'State': 6}) {
                Player.EventPlayerStopInAir({'IsWaitEnd': True, 'EnableCalcAnm': False})
            } else {
                Player.EventTriggerParticipateEvent()
            }
        } else {
            Player.EventPlayerUnequip({'IsWaitEnd': True})
            Player.EventPlayerTalk({'HelloType': 0, 'IsWaitEnd': True})
        }
    } {
        Npc_AncientDoctor[InitTalkExceptCameraOnEventWithAirPause(Self)].EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': False})
        Npc_AncientDoctor[InitTalkExceptCameraOnEventWithAirPause(Self)].EventTriggerSetRecentTalkFlag({'value': True, 'IsReflectWhenSleep': False})
        if !Npc_AncientDoctor[InitTalkExceptCameraOnEventWithAirPause(Self)].EventQueryNeedEquipWeapon() {
            Npc_AncientDoctor[InitTalkExceptCameraOnEventWithAirPause(Self)].EventUnequipWeapon({'IsWaitEnd': True})
        }
        if !Npc_AncientDoctor[InitTalkExceptCameraOnEventWithAirPause(Self)].EventQueryHasControllerSet() {
            Npc_AncientDoctor[InitTalkExceptCameraOnEventWithAirPause(Self)].EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'GreetType': 3, 'TurnType': 'Arg_Turn'})
        }
    } {
        SoundSystemActor.EventSoundChangeListenerPreset({'ListenerPresetName': 'Talk', 'FadeTime': 0.0})
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': '会話中', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
    }

}

void InitTalk_TrioExceptCamera() {
    Npc_EventStarter[InitTalk_TrioExceptCamera(Actor1)].EventTriggerBecomeSpeaker()

    fork {
        Npc_EventStarter[InitTalk_TrioExceptCamera(Actor1)].EventTriggerSetRecentTalkFlag({'value': True, 'IsReflectWhenSleep': False})
        Npc_EventStarter[InitTalk_TrioExceptCamera(Actor1)].EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': False})
        if !Npc_EventStarter[InitTalk_TrioExceptCamera(Actor1)].EventQueryNeedEquipWeapon() {
            Npc_EventStarter[InitTalk_TrioExceptCamera(Actor1)].EventUnequipWeapon({'IsWaitEnd': True})
        }
        if !Npc_EventStarter[InitTalk_TrioExceptCamera(Actor1)].EventQueryHasControllerSet() {
            Npc_EventStarter[InitTalk_TrioExceptCamera(Actor1)].EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'TurnType': 'Arg_Turn', 'GreetType': 'Arg_Greeting'})
        }
    } {
        Npc_EventStarter[InitTalk_TrioExceptCamera(Actor2)].EventTriggerSetRecentTalkFlag({'value': True, 'IsReflectWhenSleep': False})
        Npc_EventStarter[InitTalk_TrioExceptCamera(Actor2)].EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': False})
        if !Npc_EventStarter[InitTalk_TrioExceptCamera(Actor2)].EventQueryNeedEquipWeapon() {
            Npc_EventStarter[InitTalk_TrioExceptCamera(Actor2)].EventUnequipWeapon({'IsWaitEnd': True})
        }
        if !Npc_EventStarter[InitTalk_TrioExceptCamera(Actor2)].EventQueryHasControllerSet() {
            Npc_EventStarter[InitTalk_TrioExceptCamera(Actor2)].EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'TurnType': 'Arg_Turn', 'GreetType': 'Arg_Greeting'})
        }
    } {
        Npc_EventStarter[InitTalk_TrioExceptCamera(Actor3)].EventTriggerSetRecentTalkFlag({'value': True, 'IsReflectWhenSleep': False})
        Npc_EventStarter[InitTalk_TrioExceptCamera(Actor3)].EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': False})
        if !Npc_EventStarter[InitTalk_TrioExceptCamera(Actor3)].EventQueryNeedEquipWeapon() {
            Npc_EventStarter[InitTalk_TrioExceptCamera(Actor3)].EventUnequipWeapon({'IsWaitEnd': True})
        }
        if !Npc_EventStarter[InitTalk_TrioExceptCamera(Actor3)].EventQueryHasControllerSet() {
            Npc_EventStarter[InitTalk_TrioExceptCamera(Actor3)].EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'TurnType': 'Arg_Turn', 'GreetType': 'Arg_Greeting'})
        }
    } {
        Player.EventPlayerUnequip({'IsWaitEnd': True})
        Player.EventPlayerConversate({'IsWaitEnd': True, 'EventGreetType': 'Arg_Greeting'})
    } {
        SoundSystemActor.EventSoundChangeListenerPreset({'ListenerPresetName': 'Talk', 'FadeTime': 0.0})
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': '会話中', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
    }

}

void InitTalkInAir() {
    Npc_AncientDoctor[InitTalkInAir(Self)].EventTriggerBecomeSpeaker()

    fork {
        Player.EventTriggerParticipateEvent()
    } {
        Npc_AncientDoctor[InitTalkInAir(Self)].EventTriggerSetRecentTalkFlag({'value': True, 'IsReflectWhenSleep': False})
        Npc_AncientDoctor[InitTalkInAir(Self)].EventTriggerSetRecentTalkFlag({'value': True, 'IsReflectWhenSleep': False})
        if !Npc_AncientDoctor[InitTalkInAir(Self)].EventQueryNeedEquipWeapon() {
            Npc_AncientDoctor[InitTalkInAir(Self)].EventUnequipWeapon({'IsWaitEnd': True})
        }
        if !Npc_EventStarter.EventQueryHasControllerSet() {
            Npc_AncientDoctor[InitTalkInAir(Self)].EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'GreetType': 3, 'TurnType': 'Arg_Turn'})
        }
    } {
        SoundSystemActor.EventSoundChangeListenerPreset({'ListenerPresetName': 'Talk', 'FadeTime': 0.0})
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': '会話中', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
    }

}

void InitTalkZonauGolemServantInAir() {
    Npc_Zonau_Golem_Servant[InitTalkZonauGolemServantInAir(Self)].EventTriggerBecomeSpeaker()

    fork {
        Player.EventTriggerParticipateEvent()
    } {
        Npc_Zonau_Golem_Servant[InitTalkZonauGolemServantInAir(Self)].EventZonauGolemServantWakeUp({'IsWaitEnd': True})
        Npc_Zonau_Golem_Servant[InitTalkZonauGolemServantInAir(Self)].EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': False})
        Npc_Zonau_Golem_Servant[InitTalkZonauGolemServantInAir(Self)].EventTriggerSetRecentTalkFlag({'value': True, 'IsReflectWhenSleep': False})
        if !Npc_Zonau_Golem_Servant[InitTalkZonauGolemServantInAir(Self)].EventQueryNeedEquipWeapon() {
            Npc_Zonau_Golem_Servant[InitTalkZonauGolemServantInAir(Self)].EventUnequipWeapon({'IsWaitEnd': True})
        }
        if !Npc_Zonau_Golem_Servant[InitTalkZonauGolemServantInAir(Self)].EventQueryHasControllerSet() {
            Npc_Zonau_Golem_Servant[InitTalkZonauGolemServantInAir(Self)].EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'TurnType': 'Arg_Turn', 'GreetType': 'Arg_Greeting'})
        }
        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
    } {
        SoundSystemActor.EventSoundChangeListenerPreset({'ListenerPresetName': 'Talk', 'FadeTime': 0.0})
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': '会話中', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
    }

}
