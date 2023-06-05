-------- EventFlow: Npc_DressFairy_00 --------

Actor: Npc_DressFairy_00
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 3, 'UseEventAS': '', 'UseEventModelAnime': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: ['EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 3, 'UseEventModelAnime': 'Work/Model/Event/DmF_SY_FairyWorking/DmF_SY_FairyWorking_Link/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/DmF_SY_FairyWorking_Link.root.as', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventOpenRupeeDisplay', 'EventCloseRupeeDisplay', 'EventWait', 'EventCloseMessageDialog']
queries: ['EventQueryTalkChoice2', 'EventQueryRandomChoice4', 'EventQueryRandomChoice2', 'EventQueryRandomChoice3']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataInt', 'EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryHasPouchContentByCategory', 'EventQueryCheckHasManifactureArmor']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor[Fairy02]
entrypoint: None()
actions: []
queries: ['EventQueryRandomChoice4']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: TwnObj_FairySpring_A_01
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 2, 'IsBindNearestActor': False}

Actor: Npc_DressFairy_03
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_DressFairy_00[Fairy_SelectCloth(Starter_FairyActor)]
entrypoint: Fairy_SelectCloth(Starter_FairyActor)
actions: ['EventOpenShopUpgradeUI', 'EventWaitShopUIInput', 'EventCalcShopUpgradeTarget', 'EventTalk']
queries: ['EventQueryIsShopUIInput', 'EventQueryUpgradeSelectResult']
params: None

Actor: Npc_DressFairy_00[ReChoice(Starter_FairyName)]
entrypoint: ReChoice(Starter_FairyName)
actions: ['EventTalk']
queries: []
params: None

Actor: Npc_DressFairy_00[Finished(Starter_ActorName)]
entrypoint: Finished(Starter_ActorName)
actions: ['EventTalk']
queries: []
params: None

Actor: Npc_DressFairy_02[Fairy_Talk(Starter_FairyActor)]
entrypoint: Fairy_Talk(Starter_FairyActor)
actions: ['EventTalk', 'EventCloseShopUpgradeUI', 'EventUpgradeTarget']
queries: []
params: None

Actor: Npc_DressFairy_00[Return_SelectCloth(Starter_FairyActor)]
entrypoint: Return_SelectCloth(Starter_FairyActor)
actions: ['EventOpenShopUpgradeUI', 'EventWaitShopUIInput', 'EventCalcShopUpgradeTarget', 'EventTalk']
queries: ['EventQueryIsShopUIInput', 'EventQueryUpgradeSelectResult']
params: None

Actor: Npc_DressFairy_02[EnhanceAgain(Starter_FairyActor)]
entrypoint: EnhanceAgain(Starter_FairyActor)
actions: ['EventTalk', 'EventCloseShopUpgradeUI', 'EventUpgradeTarget']
queries: []
params: None

Actor: Npc_DressFairy_02[EnhanceStart(Starter_FairyActor)]
entrypoint: EnhanceStart(Starter_FairyActor)
actions: ['EventTalk', 'EventCloseShopUpgradeUI', 'EventUpgradeTarget']
queries: []
params: None

Actor: Npc_DressFairy_02[ReSelectCloth(Starter_FairyActor)]
entrypoint: ReSelectCloth(Starter_FairyActor)
actions: ['EventCloseShopUpgradeUI', 'EventTalk', 'EventUpgradeTarget']
queries: []
params: None

Actor: Npc_DressFairy_02[Tribune16_FairyFlow(Starter_FairyActor)]
entrypoint: Tribune16_FairyFlow(Starter_FairyActor)
actions: ['EventTalk', 'EventCloseShopUpgradeUI', 'EventUpgradeTarget']
queries: []
params: None

Actor: Npc_DressFairy_02[Fairy234_FairyFlow(Starter_FairyActor)]
entrypoint: Fairy234_FairyFlow(Starter_FairyActor)
actions: ['EventTalk', 'EventCloseShopUpgradeUI', 'EventUpgradeTarget']
queries: []
params: None

Actor: Npc_DressFairy_02[Fairy_Talk_Tera(Starter_FairyActor)]
entrypoint: Fairy_Talk_Tera(Starter_FairyActor)
actions: ['EventTalk', 'EventCloseShopUpgradeUI', 'EventUpgradeTarget']
queries: []
params: None

Actor: Npc_DressFairy_02[FairyCheck(Starter_FairyActor)]
entrypoint: FairyCheck(Starter_FairyActor)
actions: ['EventTalk']
queries: []
params: None

void Talk() {
    TwnObj_FairySpring_A_01.EventTriggerParticipateEvent()
    Player.EventTriggerParticipateEvent()

    call Fairy_Talk({'FairyActor': 'Npc_DressFairy_00', 'TargetPond': 'TwnObj_FairySpring_A_01', 'Starter_FairyActor': ActorIdentifier(name="Npc_DressFairy_00")})

}

void Fairy_SelectCloth() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'DressFairy_SelectCancel', 'Value': False})
    Event66:
    Npc_DressFairy_00[Return_SelectCloth(Starter_FairyActor)].EventOpenShopUpgradeUI({'IsWaitEnd': True})
    Npc_DressFairy_00[Return_SelectCloth(Starter_FairyActor)].EventWaitShopUIInput({'IsWaitEnd': True})
    if !Npc_DressFairy_00[Return_SelectCloth(Starter_FairyActor)].EventQueryIsShopUIInput() {
        Npc_DressFairy_00[Return_SelectCloth(Starter_FairyActor)].EventCalcShopUpgradeTarget({'IsWaitEnd': True})
        switch Npc_DressFairy_00[Return_SelectCloth(Starter_FairyActor)].EventQueryUpgradeSelectResult() {
          case 0:
            switch GameSystemActor.EventQueryRandomChoice4() {
              case 0:
                Npc_DressFairy_00[Return_SelectCloth(Starter_FairyActor)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceNumber': 2, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:ComTalk_018', 'ChangeMstxtForActor': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
              case 1:
                Npc_DressFairy_00[Return_SelectCloth(Starter_FairyActor)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceNumber': 2, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:ComTalk_019', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChangeMstxtForActor': True, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
              case 2:
                Npc_DressFairy_00[Return_SelectCloth(Starter_FairyActor)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceNumber': 2, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:ComTalk_021', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChangeMstxtForActor': True, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
              case 3:
                Npc_DressFairy_00[Return_SelectCloth(Starter_FairyActor)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceNumber': 2, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:ComTalk_020', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChangeMstxtForActor': True, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
          case 1:
            switch GameSystemActor.EventQueryRandomChoice4() {
              case 0:
                Npc_DressFairy_00[Return_SelectCloth(Starter_FairyActor)].EventTalk({'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:ComTalk_022', 'ChangeMstxtForActor': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsWaitEnd': False, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 2, 'IsNotOpenIfSkipedMostRecent': False})
                Event1:

                call Return_SelectCloth({'Starter_FairyActor': 'Starter_FairyActor'})

              case 1:
                Npc_DressFairy_00[Return_SelectCloth(Starter_FairyActor)].EventTalk({'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:ComTalk_023', 'ChangeMstxtForActor': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsWaitEnd': False, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 2, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event1
              case 2:
                Npc_DressFairy_00[Return_SelectCloth(Starter_FairyActor)].EventTalk({'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:ComTalk_025', 'ChangeMstxtForActor': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsWaitEnd': False, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 2, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event1
              case 3:
                Npc_DressFairy_00[Return_SelectCloth(Starter_FairyActor)].EventTalk({'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'ChangeMstxtForActor': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:ComTalk_024', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsWaitEnd': False, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 2, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event1
            }
          case 2:
            switch GameSystemActor.EventQueryRandomChoice4() {
              case 0:
                Npc_DressFairy_00[Return_SelectCloth(Starter_FairyActor)].EventTalk({'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_03:ComTalk_026', 'ChangeMstxtForActor': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsWaitEnd': False, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 2, 'IsNotOpenIfSkipedMostRecent': False})
                Event3:

                call Return_SelectCloth({'Starter_FairyActor': 'Starter_FairyActor'})

              case 1:
                Npc_DressFairy_00[Return_SelectCloth(Starter_FairyActor)].EventTalk({'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_03:ComTalk_028', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsWaitEnd': False, 'ChangeMstxtForActor': True, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 2, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event3
              case 2:
                Npc_DressFairy_00[Return_SelectCloth(Starter_FairyActor)].EventTalk({'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_03:ComTalk_029', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsWaitEnd': False, 'ChangeMstxtForActor': True, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 2, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event3
              case 3:
                Npc_DressFairy_00[Return_SelectCloth(Starter_FairyActor)].EventTalk({'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'IsAnimeDriven': False, 'ChangeMstxtForActor': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_03:ComTalk_027', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsWaitEnd': False, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 2, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event3
            }
          case 3:
            switch GameSystemActor.EventQueryRandomChoice4() {
              case 0:
                Npc_DressFairy_00[Return_SelectCloth(Starter_FairyActor)].EventTalk({'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:ComTalk_030', 'ChangeMstxtForActor': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsWaitEnd': False, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 2, 'IsNotOpenIfSkipedMostRecent': False})
                Event4:

                call Return_SelectCloth({'Starter_FairyActor': 'Starter_FairyActor'})

              case 1:
                Npc_DressFairy_00[Return_SelectCloth(Starter_FairyActor)].EventTalk({'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:ComTalk_031', 'ChangeMstxtForActor': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsWaitEnd': False, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 2, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event4
              case 2:
                Npc_DressFairy_00[Return_SelectCloth(Starter_FairyActor)].EventTalk({'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:ComTalk_033', 'ChangeMstxtForActor': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsWaitEnd': False, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 2, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event4
              case 3:
                Npc_DressFairy_00[Return_SelectCloth(Starter_FairyActor)].EventTalk({'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:ComTalk_032', 'ChangeMstxtForActor': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsCloseDialog': False, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsWaitEnd': False, 'EndDialogOption': 2, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event4
            }
          case 4:
            switch GameSystemActor.EventQueryRandomChoice4() {
              case 0:
                Npc_DressFairy_00[Return_SelectCloth(Starter_FairyActor)].EventTalk({'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'IsAnimeDriven': False, 'ChangeMstxtForActor': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsWaitEnd': False, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:ComTalk_101', 'IsCloseDialog': False, 'EndDialogOption': 2, 'IsNotOpenIfSkipedMostRecent': False})
                Event174:

                call Return_SelectCloth({'Starter_FairyActor': 'Starter_FairyActor'})

              case 1:
                Npc_DressFairy_00[Return_SelectCloth(Starter_FairyActor)].EventTalk({'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'IsAnimeDriven': False, 'ChangeMstxtForActor': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsWaitEnd': False, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:ComTalk_103', 'IsCloseDialog': False, 'EndDialogOption': 2, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event174
              case 2:
                Npc_DressFairy_00[Return_SelectCloth(Starter_FairyActor)].EventTalk({'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'IsAnimeDriven': False, 'ChangeMstxtForActor': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsWaitEnd': False, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:ComTalk_104', 'IsCloseDialog': False, 'EndDialogOption': 2, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event174
              case 3:
                Npc_DressFairy_00[Return_SelectCloth(Starter_FairyActor)].EventTalk({'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'IsAnimeDriven': False, 'ChangeMstxtForActor': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsCloseDialog': False, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:ComTalk_102', 'IsWaitEnd': False, 'EndDialogOption': 2, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event174
            }
          case 5:
            Event139:
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'DressFairy_SelectCancel', 'Value': True})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        }
    } else {
        goto Event139
    }
}

void ReChoice() {
    switch GameSystemActor[Fairy02].EventQueryRandomChoice4() {
      case 0:
        Npc_DressFairy_00[ReChoice(Starter_FairyName)].EventTalk({'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'EndDialogOption': 2, 'IsNotBecomeSpeaker': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:ComTalk_034', 'ChangeMstxtForActor': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsWaitEnd': False, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'IsNotOpenIfSkipedMostRecent': False})
      case 1:
        Npc_DressFairy_00[ReChoice(Starter_FairyName)].EventTalk({'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'EndDialogOption': 2, 'IsNotBecomeSpeaker': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:ComTalk_035', 'ChangeMstxtForActor': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsWaitEnd': False, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'IsNotOpenIfSkipedMostRecent': False})
      case 2:
        Npc_DressFairy_00[ReChoice(Starter_FairyName)].EventTalk({'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'EndDialogOption': 2, 'IsNotBecomeSpeaker': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:ComTalk_037', 'ChangeMstxtForActor': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsWaitEnd': False, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'IsNotOpenIfSkipedMostRecent': False})
      case 3:
        Npc_DressFairy_00[ReChoice(Starter_FairyName)].EventTalk({'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'EndDialogOption': 2, 'IsNotBecomeSpeaker': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:ComTalk_036', 'ChangeMstxtForActor': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsWaitEnd': False, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Finished() {
    switch GameSystemActor[Fairy02].EventQueryRandomChoice4() {
      case 0:
        Npc_DressFairy_00[Finished(Starter_ActorName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_DressFairy_03:ComTalk_051', 'ChangeMstxtForActor': True, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
      case 1:
        Npc_DressFairy_00[Finished(Starter_ActorName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_DressFairy_03:ComTalk_053', 'ChangeMstxtForActor': True, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
      case 2:
        Npc_DressFairy_00[Finished(Starter_ActorName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_DressFairy_03:ComTalk_054', 'ChangeMstxtForActor': True, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
      case 3:
        Npc_DressFairy_00[Finished(Starter_ActorName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_DressFairy_03:ComTalk_052', 'ChangeMstxtForActor': True, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Fairy_Talk() {

    call DmF_SY_FairyWorking.ReAppearance({'Npc_DressFairy': 'Starter_FairyActor', 'TargetFairy': 'FairyActor', 'TargetPond': 'TargetPond'})

    EventCamera.EventMoveToTargetPosCamera({'PosVectorSetType': 3, 'AtVectorSetType': 3, 'PosVector': [2.638916015625, 3.350677013397217, 8.82708740234375], 'AtVector': [-0.10449200123548508, 5.462769031524658, 3.821197986602783], 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'TargetFovy': 50.0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'Actor1ActorName': 'FairyActor', 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'DressFairy_SelectCancel', 'Value': False})
    Event126:
    Npc_DressFairy_02[Fairy_Talk_Tera(Starter_FairyActor)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': 'Talk', 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'IsAnimeDriven': False, 'ChangeMstxtForActor': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:ComTalk_001', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Event112:
    if !Player.EventQueryCheckPlayerState({'State': 0}) {
        if !PouchSystemActor.EventQueryCheckHasManifactureArmor() {

            call EnhanceStart({'Starter_FairyActor': 'Starter_FairyActor', 'FairyActor': 'FairyActor', 'TargetPond': 'TargetPond'})

        } else {
            Event109:
            Npc_DressFairy_02[Fairy_Talk_Tera(Starter_FairyActor)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceNumber': 2, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsNotBecomeSpeaker': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:ComTalk_013', 'ChangeMstxtForActor': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            if !GameSystemActor.EventQueryTalkChoice2() {
                GameSystemActor.EventOpenRupeeDisplay({'IsWaitEnd': True})
                Npc_DressFairy_02[Fairy_Talk_Tera(Starter_FairyActor)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'IsAnimeDriven': False, 'ChangeMstxtForActor': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:ComTalk_011', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Event6:

                call Fairy_SelectCloth({'Starter_FairyActor': 'Starter_FairyActor'})

                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'DressFairy_SelectCancel', 'Index': -1}) {
                    Npc_DressFairy_02[Fairy_Talk_Tera(Starter_FairyActor)].EventCloseShopUpgradeUI({'IsWaitEnd': True})
                    GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GreatFairy_IsEnhancedTalk'}) {
                        Event65:
                        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'FairyRevivalNum', 'Index': -1, 'Value': 3}) {
                          case [0, 1]:
                            switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'FairyRevivalNum', 'Index': -1, 'Value': 2}) {
                              case 0:
                                Npc_DressFairy_02[Fairy_Talk_Tera(Starter_FairyActor)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'IsAnimeDriven': False, 'ChangeMstxtForActor': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:ComTalk_003', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                Event102:

                                call FairyCheck({'Starter_FairyActor': 'Starter_FairyActor'})

                                Event122:
                                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'GreatFairy_Rank1_Talk', 'Value': False, 'Index': -1})
                                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'GreatFairy_IsEnhancedTalk', 'Value': False})

                                call DmF_SY_FairyWorking.Exit({'Npc_DressFairy': 'Starter_FairyActor', 'TargetFairy': 'FairyActor', 'TargetPond': 'TargetPond'})

                              case 1:
                                Npc_DressFairy_02[Fairy_Talk_Tera(Starter_FairyActor)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'IsAnimeDriven': False, 'ChangeMstxtForActor': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:ComTalk_045', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                goto Event102
                              case 2:
                                Npc_DressFairy_02[Fairy_Talk_Tera(Starter_FairyActor)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'IsAnimeDriven': False, 'ChangeMstxtForActor': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:ComTalk_038', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                goto Event102
                            }
                          case 2:
                            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'GreatFairy4_AllRevival', 'Index': -1}) {

                                call DmF_SY_FairyWorking.Exit({'Npc_DressFairy': 'Starter_FairyActor', 'TargetFairy': 'FairyActor', 'TargetPond': 'TargetPond'})

                            } else {
                                Npc_DressFairy_02[Fairy_Talk_Tera(Starter_FairyActor)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:ComTalk_004', 'ChangeMstxtForActor': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'GreatFairy4_AllRevival', 'Value': True, 'Index': -1})
                                goto Event122
                            }
                        }
                    } else {

                        call DmF_SY_FairyWorking.Exit({'Npc_DressFairy': 'Starter_FairyActor', 'TargetFairy': 'FairyActor', 'TargetPond': 'TargetPond'})

                    }
                } else
                if !GameSystemActor.EventQueryTalkChoice2() {
                    Npc_DressFairy_02[Fairy_Talk_Tera(Starter_FairyActor)].EventCloseShopUpgradeUI({'IsWaitEnd': True})
                    Npc_DressFairy_02[Fairy_Talk_Tera(Starter_FairyActor)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:ComTalk_008', 'ChangeMstxtForActor': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    Npc_DressFairy_02[Fairy_Talk_Tera(Starter_FairyActor)].EventUpgradeTarget({'IsWaitEnd': True})
                    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'GreatFairy_ArmorRank', 'Value': 2}) {
                      case [0, 1]:
                        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 42})
                        GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})

                        call DmF_SY_FairyWorking.0to1({'Npc_DressFairy': 'Starter_FairyActor', 'TargetFairy': 'FairyActor'})

                        Event51:

                        call GetPouchContent.DisplayGetWindowForArmorUpgrade()


                        call DmF_SY_FairyWorking.End()

                        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'GreatFairy_Rank1_Talk', 'Index': -1}) {
                            Event162:
                            switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'GreatFairy_ArmorRank', 'Index': -1, 'Value': 3}) {
                              case [0, 2]:

                                call Finished({'Starter_ActorName': 'Starter_FairyActor'})

                                Event12:
                                if !PouchSystemActor.EventQueryCheckHasManifactureArmor() {
                                    Npc_DressFairy_02[Fairy_Talk_Tera(Starter_FairyActor)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceNumber': 2, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsNotBecomeSpeaker': False, 'IsAnimeDriven': False, 'ChangeMstxtForActor': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:ComTalk_010', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                    if !GameSystemActor.EventQueryTalkChoice2() {
                                        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'GreatFairy_IsEnhancedTalk'})

                                        call EnhanceAgain({'Starter_FairyActor': 'Starter_FairyActor', 'FairyActor': 'FairyActor', 'TargetPond': 'TargetPond'})

                                    } else
                                    goto Event65
                                } else {
                                    Npc_DressFairy_02[Fairy_Talk_Tera(Starter_FairyActor)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:ComTalk_005', 'ChangeMstxtForActor': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'FairyRevivalNum', 'Index': -1, 'Value': 3}) {
                                      case [0, 1]:
                                        Npc_DressFairy_02[Fairy_Talk_Tera(Starter_FairyActor)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:ComTalk_006', 'ChangeMstxtForActor': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                        goto Event102
                                      case 2:
                                        Npc_DressFairy_02[Fairy_Talk_Tera(Starter_FairyActor)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:ComTalk_007', 'ChangeMstxtForActor': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                        goto Event122
                                    }
                                }
                              case 1:

                                call Finished({'Starter_ActorName': 'Starter_FairyActor'})

                                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GreatFairy_Rank2_Talk'}) {
                                    switch GameSystemActor.EventQueryRandomChoice3() {
                                      case [0, 2]:
                                        goto Event12
                                      case 1:
                                        Npc_DressFairy_02[Fairy_Talk_Tera(Starter_FairyActor)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'IsAnimeDriven': False, 'ChangeMstxtForActor': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:ComTalk_046', 'IsNotOpenIfSkipedMostRecent': False})
                                        goto Event12
                                    }
                                } else {
                                    Npc_DressFairy_02[Fairy_Talk_Tera(Starter_FairyActor)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'IsAnimeDriven': False, 'ChangeMstxtForActor': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:ComTalk_046', 'IsNotOpenIfSkipedMostRecent': False})
                                    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'GreatFairy_Rank2_Talk'})
                                    goto Event12
                                }
                            }
                        } else
                        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'GreatFairy_ArmorRank', 'Index': -1, 'Value': 2}) {
                          case [0, 2]:
                            goto Event162
                          case 1:
                            Npc_DressFairy_02[Fairy_Talk_Tera(Starter_FairyActor)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'IsAnimeDriven': False, 'ChangeMstxtForActor': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:ComTalk_039', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'GreatFairy_Rank1_Talk', 'Value': True, 'Index': -1})
                            goto Event12
                        }
                      case 2:
                        switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'GreatFairy_ArmorRank', 'Value': 3}) {
                          case [0, 1]:
                            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 80})
                            GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})

                            call DmF_SY_FairyWorking.1to2({'Npc_DressFairy': 'Starter_FairyActor', 'TargetFairy': 'FairyActor'})

                            goto Event51
                          case 2:
                            switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'GreatFairy_ArmorRank', 'Value': 4}) {
                              case [0, 1]:
                                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 80})
                                GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})

                                call DmF_SY_FairyWorking.2to3({'Npc_DressFairy': 'Starter_FairyActor', 'TargetFairy': 'FairyActor'})

                                goto Event51
                              case 2:
                                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 80})
                                GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})

                                call DmF_SY_FairyWorking.3to4({'Npc_DressFairy': 'Starter_FairyActor', 'TargetFairy': 'FairyActor'})

                                goto Event51
                            }
                        }
                    }
                } else {

                    call ReChoice({'Starter_FairyName': 'Starter_FairyActor'})


                    call ReSelectCloth({'Starter_FairyActor': 'Starter_FairyActor', 'FairyActor': 'FairyActor', 'TargetPond': 'TargetPond'})

                }
            } else {

                call DmF_SY_FairyWorking.Exit({'Npc_DressFairy': 'Starter_FairyActor', 'TargetFairy': 'FairyActor', 'TargetPond': 'TargetPond'})

            }
        }
    } else
    if !PouchSystemActor.EventQueryCheckHasManifactureArmor() {

        call EnhanceStart({'Starter_FairyActor': 'Starter_FairyActor', 'FairyActor': 'FairyActor', 'TargetPond': 'TargetPond'})

    } else
    if !PouchSystemActor.EventQueryHasPouchContentByCategory({'Category': 4, 'Count': 1}) {
        goto Event109
    } else {
        Npc_DressFairy_02[Fairy_Talk_Tera(Starter_FairyActor)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:ComTalk_012', 'ChangeMstxtForActor': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

        call DmF_SY_FairyWorking.Exit({'Npc_DressFairy': 'Starter_FairyActor', 'TargetFairy': 'FairyActor', 'TargetPond': 'TargetPond'})

    }
}

void Return_SelectCloth() {
    goto Event66
}

void EnhanceAgain() {
    Event175:
    GameSystemActor.EventOpenRupeeDisplay({'IsWaitEnd': True})
    Npc_DressFairy_02[EnhanceStart(Starter_FairyActor)].EventTalk({'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'EndDialogOption': 2, 'IsNotBecomeSpeaker': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:ComTalk_009', 'ChangeMstxtForActor': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsWaitEnd': False, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'IsNotOpenIfSkipedMostRecent': False})
    goto Event6
}

void EnhanceStart() {
    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'FairyRevivalNum', 'Index': -1, 'Value': 1}) {
      case [0, 1]:
        Npc_DressFairy_02[EnhanceStart(Starter_FairyActor)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceNumber': 2, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsNotBecomeSpeaker': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:ComTalk_014', 'ChangeMstxtForActor': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Event46:
        if !GameSystemActor.EventQueryTalkChoice2() {
            goto Event175
        } else {
            Npc_DressFairy_02[EnhanceStart(Starter_FairyActor)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:ComTalk_002', 'ChangeMstxtForActor': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call DmF_SY_FairyWorking.Exit({'Npc_DressFairy': 'Starter_FairyActor', 'TargetFairy': 'FairyActor', 'TargetPond': 'TargetPond'})

        }
      case 2:
        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'FairyRevivalNum', 'Index': -1, 'Value': 2}) {
          case [0, 1]:
            Npc_DressFairy_02[EnhanceStart(Starter_FairyActor)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceNumber': 2, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsNotBecomeSpeaker': False, 'IsAnimeDriven': False, 'ChangeMstxtForActor': True, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:ComTalk_015', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event46
          case 2:
            switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'FairyRevivalNum', 'Index': -1, 'Value': 3}) {
              case [0, 1]:
                Npc_DressFairy_02[EnhanceStart(Starter_FairyActor)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceNumber': 2, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsNotBecomeSpeaker': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:ComTalk_016', 'ChangeMstxtForActor': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event46
              case 2:
                Npc_DressFairy_02[EnhanceStart(Starter_FairyActor)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceNumber': 2, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsNotBecomeSpeaker': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:ComTalk_017', 'ChangeMstxtForActor': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event46
            }
        }
    }
}

void ReSelectCloth() {
    goto Event6
}

void Tribune16_FairyFlow() {
    goto Event112
}

void Fairy234_FairyFlow() {
    Npc_DressFairy_02[Fairy234_FairyFlow(Starter_FairyActor)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': 'Talk', 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:ComTalk_040', 'ChangeMstxtForActor': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
    EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
    Npc_DressFairy_02[Fairy234_FairyFlow(Starter_FairyActor)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': 'Talk', 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:ComTalk_041', 'ChangeMstxtForActor': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
    goto Event112
}

void Fairy_Talk_Tera() {

    call DmF_SY_FairyWorking.ReAppearance({'Npc_DressFairy': 'Starter_FairyActor', 'TargetFairy': 'FairyActor', 'TargetPond': 'TargetPond'})

    EventCamera.EventMoveToTargetPosCamera({'PosVectorSetType': 3, 'AtVectorSetType': 3, 'PosVector': [2.638916015625, 3.350677013397217, 8.82708740234375], 'AtVector': [-0.10449200123548508, 5.462769031524658, 3.821197986602783], 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'TargetFovy': 50.0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'Actor1ActorName': 'FairyActor', 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'DressFairy_SelectCancel', 'Value': False})

    call TeraCough()

    goto Event126
}

void TeraCough() {
    switch GameSystemActor.EventQueryRandomChoice4() {
      case 0:
        Npc_DressFairy_03.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'IsAnimeDriven': False, 'ChangeMstxtForActor': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_DressFairy_03:Talk_01', 'ASName': 'Act_Cough', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Event70:
        switch GameSystemActor.EventQueryRandomChoice4() {
          case 0:
            Npc_DressFairy_03.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'IsAnimeDriven': False, 'ChangeMstxtForActor': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': 'Act_Cough', 'MessageId': 'EventFlowMsg/Npc_DressFairy_03:Talk_04', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
          case 1:
            Npc_DressFairy_03.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'IsAnimeDriven': False, 'ChangeMstxtForActor': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': 'Act_Cough', 'MessageId': 'EventFlowMsg/Npc_DressFairy_03:Talk_05', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
          case 2:
            Npc_DressFairy_03.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'IsAnimeDriven': False, 'ChangeMstxtForActor': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': 'Act_Cough', 'MessageId': 'EventFlowMsg/Npc_DressFairy_03:Talk_06', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
          case 3:
            Npc_DressFairy_03.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'IsAnimeDriven': False, 'ChangeMstxtForActor': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': 'Act_Cough', 'MessageId': 'EventFlowMsg/Npc_DressFairy_03:Talk_07', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
      case 1:
        Npc_DressFairy_03.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'IsAnimeDriven': False, 'ChangeMstxtForActor': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': 'Act_Cough', 'MessageId': 'EventFlowMsg/Npc_DressFairy_03:Talk_02', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event70
      case 2:
        Npc_DressFairy_03.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'IsAnimeDriven': False, 'ChangeMstxtForActor': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': 'Act_Cough', 'MessageId': 'EventFlowMsg/Npc_DressFairy_03:Talk_03', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event70
    }
}

void FairyCheck() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsAppear_DressFairy_00', 'Index': -1}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsAppear_DressFairy_01', 'Index': -1}) {
            if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsAppear_DressFairy_02', 'Index': -1}) {
                Npc_DressFairy_02[FairyCheck(Starter_FairyActor)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'IsAnimeDriven': False, 'ChangeMstxtForActor': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:ComTalk_043', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsAppear_DressFairy_02', 'Index': -1}) {
            Npc_DressFairy_02[FairyCheck(Starter_FairyActor)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'IsAnimeDriven': False, 'ChangeMstxtForActor': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:ComTalk_042', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else
        if !GameSystemActor.EventQueryRandomChoice2() {
            Npc_DressFairy_02[FairyCheck(Starter_FairyActor)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'IsAnimeDriven': False, 'ChangeMstxtForActor': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:ComTalk_043', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_DressFairy_02[FairyCheck(Starter_FairyActor)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'IsAnimeDriven': False, 'ChangeMstxtForActor': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:ComTalk_042', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsAppear_DressFairy_01', 'Index': -1}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsAppear_DressFairy_02', 'Index': -1}) {
            Npc_DressFairy_02[FairyCheck(Starter_FairyActor)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'IsAnimeDriven': False, 'ChangeMstxtForActor': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:ComTalk_044', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else
        if !GameSystemActor.EventQueryRandomChoice2() {
            Npc_DressFairy_02[FairyCheck(Starter_FairyActor)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'IsAnimeDriven': False, 'ChangeMstxtForActor': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:ComTalk_043', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_DressFairy_02[FairyCheck(Starter_FairyActor)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'IsAnimeDriven': False, 'ChangeMstxtForActor': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:ComTalk_044', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsAppear_DressFairy_02', 'Index': -1}) {
        if !GameSystemActor.EventQueryRandomChoice2() {
            Npc_DressFairy_02[FairyCheck(Starter_FairyActor)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'IsAnimeDriven': False, 'ChangeMstxtForActor': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:ComTalk_042', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_DressFairy_02[FairyCheck(Starter_FairyActor)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'IsAnimeDriven': False, 'ChangeMstxtForActor': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:ComTalk_044', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
    } else
    switch GameSystemActor.EventQueryRandomChoice3() {
      case 0:
        Npc_DressFairy_02[FairyCheck(Starter_FairyActor)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'IsAnimeDriven': False, 'ChangeMstxtForActor': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:ComTalk_042', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
      case 1:
        Npc_DressFairy_02[FairyCheck(Starter_FairyActor)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'IsAnimeDriven': False, 'ChangeMstxtForActor': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:ComTalk_043', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
      case 2:
        Npc_DressFairy_02[FairyCheck(Starter_FairyActor)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'IsAnimeDriven': False, 'ChangeMstxtForActor': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_DressFairy_00:ComTalk_044', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}
