-------- EventFlow: SageOfSoul_Sub_GolemParts_Collection --------

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerWarpToNearAnchor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTraverseAroundAndWaitCreateActor', 'EventTriggerRequestAutoSave', 'EventEventFadeOut']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataInt', 'EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventTriggerProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: MinusObj_Zonau_RaumiGolem_Storage_A_01
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
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

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm', 'EventTriggerSoundControlBGM']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Collected_PartsCount() {
    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'Value': 1, 'GameDataName': 'SageOfSoul_Collected_PartsCount'}) {
      case 1:

        call FitParts()

        SystemTextNPC.EventTalk({'EndDialogOption': 4, 'IsCloseDialog': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Dm_ZN_0016:Dm_ZN_0016_Text_005_c', 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'OverrideStyle': 4, 'IsOverrideStyle': True, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 91})
      case 2:
        switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'Value': 2, 'GameDataName': 'SageOfSoul_Collected_PartsCount'}) {
          case 1:

            call FitParts()

            SystemTextNPC.EventTalk({'EndDialogOption': 4, 'IsCloseDialog': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Dm_ZN_0016:Dm_ZN_0016_Text_006_c', 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'OverrideStyle': 4, 'IsOverrideStyle': True, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 91})
          case 2:
            switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'Value': 3, 'GameDataName': 'SageOfSoul_Collected_PartsCount'}) {
              case 1:

                call FitParts()

                SystemTextNPC.EventTalk({'EndDialogOption': 4, 'IsCloseDialog': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Dm_ZN_0016:Dm_ZN_0016_Text_007_c', 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'OverrideStyle': 4, 'IsOverrideStyle': True, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 91})
              case 2:
                if GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'SageOfSoul_Collected_PartsCount', 'Value': 4}) {
                    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'WithPlayableEvent': False, 'IsImmediateOnAutoOff': False, 'CommandLife': 2, 'IsForceFadeTime': False})
                    EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
                    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                    EventSystemActor.EventTransition({'FadeInTypeEventEnd': 0, 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'SageOfSoul_Event_GolemConversation'})
                }
            }
        }
    }
}

void SageOfSoul_Event_GolemConversation() {
    GameSystemActor.EventTriggerRequestAutoSave()
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_ZN_0020', 'FadeInTypeEventEnd': 2})

    call ChangeActerGameDataCheck()

    Player.EventPlayerWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'EnterDungeon', 'IsWaitEnd': True, 'UseDemoWait': True})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'SageOfSoul_GolemCompleted', 'Value': True})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'SageOfSoul_DungeonWarpOn', 'Value': True, 'Index': -1})
    GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'GolemAppearance', 'ChallengeName': 'SageOfSoul'})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'PlayerStatus.Companion.Soul.IsSageDynamicGenerate', 'Value': True, 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'PlayerStatus.Companion.Soul.IsFollowMode', 'Value': False, 'Index': -1})
    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'Actor1ActorName': 'Player', 'PosVector': [-0.8500000238418579, 1.7999999523162842, 1.7699999809265137], 'AtVector': [2.240000009536743, 0.49000000953674316, -2.2899999618530273], 'TargetFovy': 46.599998474121094, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'GameDataName': 'SageOfSoul_LDungeonElevatorStart', 'Index': -1})
    EventSystemActor.EventTransition({'EventName': 'Dm_ZN_0022', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})
}

void FitParts() {
    MinusObj_Zonau_RaumiGolem_Storage_A_01.EventTriggerParticipateEvent()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 0, 'LatShiftRange': 0.0, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'IsLinearMove': False, 'LongShiftRange': 0.0, 'MoveTime': 30, 'Actor1ActorName': 'MinusObj_Zonau_RaumiGolem_Storage_A_01', 'PosVector': [0.019999999552965164, 7.389999866485596, 7.559999942779541], 'AtVector': [-0.03999999910593033, 3.559999942779541, 2.059999942779541], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
    EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 0, 'LatShiftRange': 0.0, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'IsLinearMove': False, 'LongShiftRange': 0.0, 'MoveTime': 90, 'Actor1ActorName': 'MinusObj_Zonau_RaumiGolem_Storage_A_01', 'PosVector': [0.05000000074505806, 9.399999618530273, 9.520000457763672], 'AtVector': [-0.019999999552965164, 5.570000171661377, 4.03000020980835], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void ChangeActerGameDataCheck() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfSoul_ChangeActor_Head'}) {
        Event21:
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'SageOfSoul_ChangeActor_LeftArm', 'Index': -1}) {
            Event22:
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'SageOfSoul_ChangeActor_LeftLeg', 'Index': -1}) {
                Event24:
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'SageOfSoul_ChangeActor_RightArm', 'Index': -1}) {
                    Event25:
                    if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'SageOfSoul_ChangeActor_RightLeg', 'Index': -1}) {
                        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SageOfSoul_ChangeActor_RightLeg'})
                        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
                    }
                } else {
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SageOfSoul_ChangeActor_RightArm'})
                    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
                    goto Event25
                }
            } else {
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SageOfSoul_ChangeActor_LeftLeg'})
                EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
                goto Event24
            }
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SageOfSoul_ChangeActor_LeftArm'})
            EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
            goto Event22
        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SageOfSoul_ChangeActor_Head'})
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        goto Event21
    }
}
