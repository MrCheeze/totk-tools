-------- EventFlow: DmF_SY_GameOver --------

Actor: GameSystemActor
entrypoint: None()
actions: ['EventOpenGameOverScreen', 'EventWaitGameOverButton', 'EventSetEventResult', 'EventWait', 'EventTriggerCloseCompanionLifeGauge', 'EventOpenGameOverReturnTitleCheckScreen', 'EventWaitGameOverReturnTitleCheckButton', 'EventCloseGameOverReturnTitleCheckScreen', 'EventTriggerPauseMgrRequestPause', 'EventTriggerSetDisplayHeartGauge', 'EventTriggerPlayerKeepRideOnGolem']
queries: ['EventQueryGameOverScreen', 'EventQueryGameOverReturnTitleCheckScreen']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerDie']
queries: ['EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStartBgmSimple', 'EventTriggerStopInGameBgm', 'EventSoundRequestDucking', 'EventTriggerSoundStopOnMuteGroup']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataEnum', 'EventTriggerSetGameDataBool', 'EventTriggerSetGameDataString64']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataEnum', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor[0]
entrypoint: None()
actions: ['EventWaitHeartGaugeStable']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'IsBindNearestActor': False}

void Start() {
    GameSystemActor.EventTriggerPlayerKeepRideOnGolem()
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsSkipRetrySequence', 'Index': -1}) {
        SoundSystemActor.EventSoundRequestDucking({'CommandLife': 0, 'DuckingName2': '', 'DuckingName3': '', 'DuckingName': 'DmF:Bgmミュート(フェード長い)'})
        Event19:

        fork {

            call DmF_SY_FallDown.AbyssCamera()

        } {
            GameSystemActor.EventTriggerCloseCompanionLifeGauge({'IsDirect': True})
        } {
            GameSystemActor[0].EventWaitHeartGaugeStable({'IsWaitEnd': True})
            GameSystemActor.EventTriggerSetDisplayHeartGauge({'IsDisplayHeartGaugeExtra': True, 'IsDisplayHeartGauge': False, 'IsDisplayAtLT': True})
        } {
            if !GameDataActor.EventQueryIsGameDataEnum({'Index': -1, 'GameDataName': 'GameOverReason', 'Value': 'PlayerDeath'}) {
                Player.EventPlayerDie({'IsWaitEnd': False})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
                if !Player.EventQueryCheckPlayerState({'State': 22}) {
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 85})
                }
                Event7:
                SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_DmF_SY_GameOver', 'CommandLife': 2, 'IsReleaseDucking': False})
                GameSystemActor.EventOpenGameOverScreen({'IsWaitEnd': True})
                Event2:
                GameSystemActor.EventWaitGameOverButton({'IsWaitEnd': True})
                if !GameSystemActor.EventQueryGameOverScreen() {

                    call ReserveBootEventIfNeeded()

                    GameSystemActor.EventSetEventResult({'IsWaitEnd': True, 'EventResult': 'Retry'})
                    Event12:
                    GameDataActor.EventTriggerSetGameDataEnum({'GameDataName': 'GameOverReason', 'Value': 'PlayerDeath', 'Index': -1})
                    if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsSkipRetrySequence', 'Index': -1}) {
                        SoundSystemActor.EventTriggerSoundStopOnMuteGroup()
                    }
                    GameSystemActor.EventTriggerPauseMgrRequestPause({'PauseType': 'GameOverPause'})
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
                } else {
                    GameSystemActor.EventOpenGameOverReturnTitleCheckScreen({'IsWaitEnd': True, 'TopButton': 'LayoutMsg/SystemWindow_00:1003', 'BottomButton': 'LayoutMsg/SystemWindow_00:1001', 'Text': 'LayoutMsg/SystemWindow_00:0003'})
                    GameSystemActor.EventWaitGameOverReturnTitleCheckButton({'IsWaitEnd': True})
                    if !GameSystemActor.EventQueryGameOverReturnTitleCheckScreen() {
                        GameSystemActor.EventSetEventResult({'IsWaitEnd': True, 'EventResult': 'Title'})
                        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Sequence_ToTitleFromGameOver', 'Index': -1, 'Value': True})
                        goto Event12
                    } else {
                        GameSystemActor.EventCloseGameOverReturnTitleCheckScreen({'IsWaitEnd': True})
                        goto Event2
                    }
                }
            } else
            if !GameDataActor.EventQueryIsGameDataEnum({'Index': -1, 'GameDataName': 'GameOverReason', 'Value': 'OpenDoorFailure'}) {
                Player.EventPlayerDie({'IsWaitEnd': False})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                goto Event7
            } else {
                goto Event7
            }
        }

    } else {
        SoundSystemActor.EventTriggerStopInGameBgm({'WithPlayableEvent': True, 'CommandLife': 2, 'IsImmediateOnAutoOff': False, 'FadeType': 3, 'IsForceFadeTime': True})
        SoundSystemActor.EventSoundRequestDucking({'CommandLife': 0, 'DuckingName2': '', 'DuckingName3': '', 'DuckingName': 'DmF:BgmInsideWorldミュート'})
        goto Event19
    }
}

void ReserveBootEventIfNeeded() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'DefeatGanondorf_LoadLastBattleSet', 'Index': -1})
    && !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'MainChallenge_IsAfter_DefeatGanon2_Exp'})
    && GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'MainChallenge_IsAfter_DefeatBlackDragon_Exp'}) {
        GameDataActor.EventTriggerSetGameDataString64({'GameDataName': 'Sequence_ReservedBootEventName', 'Value': 'DragonBattleBootEvent', 'Index': -1})
    }
}
