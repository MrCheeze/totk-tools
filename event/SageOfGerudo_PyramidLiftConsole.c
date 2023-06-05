-------- EventFlow: SageOfGerudo_PyramidLiftConsole --------

Actor: Npc_Gerudo_Queen_Young[DynamicGenerateSage]
entrypoint: None()
actions: ['EventTalk', 'EventSageWarpToNearAnchor', 'EventPlayAS', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerAddOrSubGameDataInt', 'EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataInt']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTriggerRequestAutoSave', 'EventEventFadeOut', 'EventEventFadeIn']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventChangeTemporarilyToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

void EntryPoint0() {

    call Common.AirStartUP_Player()

    GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'SageOfGerudo_PyramidSwitchCount', 'Value': 1, 'Index': -1})
    GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'SageOfGerudo_PyramidSwitchCount', 'Value': 1, 'Index': -1}) {
      case 1:
        GameSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
        Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/SageOfGerudo_PyramidLiftConsole:SageOfGerudo_PyramidLiftConsole_00', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Event2:
        GameSystemActor.EventTriggerRequestAutoSave()
      case 2:
        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'SageOfGerudo_PyramidSwitchCount', 'Index': -1, 'Value': 2}) {
          case 1:
            GameSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
            Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/SageOfGerudo_PyramidLiftConsole:SageOfGerudo_PyramidLiftConsole_01', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event2
          case 2:
            switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'SageOfGerudo_PyramidSwitchCount', 'Index': -1, 'Value': 3}) {
              case 1:
                GameSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
                Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/SageOfGerudo_PyramidLiftConsole:SageOfGerudo_PyramidLiftConsole_02', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event2
              case 2:
                GameSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
                EventCamera.EventChangeTemporarilyToPlayerCamera({'IsWaitEnd': False, 'EnableControle': False})
                Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/SageOfGerudo_PyramidLiftConsole:SageOfGerudo_PyramidLiftConsole_03', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 0})
                Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventSageWarpToNearAnchor({'IsWaitEnd': True, 'InstanceName': 'GerudoSageLiftPos', 'ActorName': 'AnchorAction3'})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 3})
                Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventPlayAS({'ASName': 'Wait', 'IsAllSlot': True, 'Partial': '', 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
                Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventWait({'IsWaitEnd': True, 'Frames': 1})
                GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'SageOfGerudo_PyramidAllSwitchOn'})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'PlayerStatus.Companion.Electric.IsFollowMode', 'Value': False})
                GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 0})
                goto Event2
            }
        }
    }
}
