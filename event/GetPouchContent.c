-------- EventFlow: GetPouchContent --------

Actor: PouchContentGuestPerformer
entrypoint: None()
actions: ['EventOpenGetUI', 'EventTriggerEquipEquipment', 'EventTriggerErasePauseMask']
queries: ['EventQueryOwnIsMaxLifeUpPouchContent', 'EventQueryOwnIsMaxStaminaUpPouchContent', 'EventQueryCheckOwnPouchContentCategory', 'EventQueryGetRequestedTargetProcess', 'EventQueryIsNotPushToPouchInEvent', 'EventQueryOwnIsMaxEnergyUpPouchContent', 'EventQueryIsGetLastCaveMasterMedal']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 2, 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: ['EventTriggerAddOrRemovePouchContent', 'EventTriggerAddOrRemovePouchContentByGameData', 'EventTriggerSetSageSoulSummonOn']
queries: ['EventQueryIsNotPushPouchContent', 'EventQueryIsMaxLifeUpPouchContent', 'EventQueryIsMaxStaminaUpPouchContent', 'EventQueryCheckPouchContentCategory', 'EventQueryIsNotPushPouchContentByGameData', 'EventQueryIsPouchContent', 'EventQueryIsMaxEnergyUpPouchContent', 'EventQueryIsTreasureMap', 'EventQueryIsTreasureMapContentAlreadyGet', 'EventQueryIsAutoBuilderDraft', 'EventQueryIsKorokNuts', 'EventQueryIsSpiritOrb', 'EventQueryIsSmallKey', 'EventQueryIsSageSoul', 'EventQueryIsRupee']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventOpenGetUIByActorName', 'EventWaitCloseGetUI', 'EventTriggerNoticeGetUIClosable', 'EventTriggerAddMaxLife', 'EventWaitHeartGaugeStable', 'EventTriggerSetDisplayHeartGauge', 'EventOpenGetUIForCooking', 'EventTriggerCookingServe', 'EventOpenGetUIByGameData', 'EventWait', 'EventOpenGetUIForArmorUpgrade', 'EventSetEnergyGaugeMax', 'EventTriggerRequestAutoSave', 'EventShowTreasureMapTarget', 'EventCloseMinusMenu', 'EventTriggerAddMaxEnergyGauge', 'EventShowNewAutoBuilderDraft', 'EventCloseNewAutoBuilderDraft', 'EventShowNearestTreasureMapTarget', 'EventTriggerRemoveBreakLifeAllWithTarget', 'EventTriggerHealLifeMaxWithTarget', 'EventOpenKorokSeedDisplay', 'EventOpenSpiritOrbDisplay', 'EventOpenSmallKeyDisplay', 'EventCloseKorokSeedDisplay', 'EventCloseSpiritOrbDisplay', 'EventTriggerEmphasizeTreasureMapTargetIcon', 'EventTriggerEmphasizeNearestTreasureMapTargetIcon', 'EventOpenRupeeDisplayForCounterStop']
queries: ['EventQueryIsOpenUnderGroundMap']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerAddOrSubGameDataFloat', 'EventTriggerSetGameDataBool', 'EventTriggerSetEquipShoulderBeltGameData', 'EventTriggerSetEquipWaistBeltGameData', 'EventTriggerCopyGameDataInt', 'EventTriggerSubGameDataInt']
queries: ['EventQueryIsGameDataInt', 'EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventWaitCreationFinishedEquipment', 'EventTriggerReserveEquipmentUserRequestCreateEquipment', 'EventTriggerEquipmentUserRequestCreateEquipmentIfUnequipped', 'EventTriggerCancelEquipmentUserRequestCreateEquipment']
queries: ['EventQueryIsReserveEquipmentUserRequestCreateEquipment', 'EventQueryCheckIsEquippedDynamicEquipment']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: SystemTextNPC
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: MinusMenuSystemTextNPC
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void GetPouchContentByActorName() {

    call PreGetWindowByActorName({'ActorName': 'ActorName'})


    call OpenGetWindowByActorName({'ActorName': 'ActorName', 'IsSuccess': 'IsSuccess', 'IsEnableOpenPouch': 'IsSuccess'})


    call GetPouchContentByActorNameImpl({'ActorName': 'ActorName'})


    call WaitCloseGetWindow()


    call PostGetWindowByActorName({'ActorName': 'ActorName'})


    call EquipWeaponByActorName({'EquipmentActorName': 'ActorName'})

}

void GetPouchContentByActorNameImpl() {
    if PouchSystemActor.EventQueryIsNotPushPouchContent({'ActorName': 'ActorName'}) {
        if !PouchSystemActor.EventQueryIsPouchContent({'ActorName': 'ActorName'}) {

            call ReserveEquip({'ActorName': 'ActorName'})

            if !PouchSystemActor.EventQueryIsKorokNuts({'ActorName': 'ActorName'}) {
                GameSystemActor.EventOpenKorokSeedDisplay({'IsWaitEnd': True})
                Event1:
                if !Player.EventQueryIsReserveEquipmentUserRequestCreateEquipment() {
                    PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Num': 1, 'Actor': 'ActorName', 'AttachmentActor': '', 'EffectType': 0, 'EffectValue': -1, 'IsEquipDIrect': False, 'IsSetOnlyEquipIndex': True})
                } else {
                    PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Num': 1, 'Actor': 'ActorName', 'AttachmentActor': '', 'EffectType': 0, 'EffectValue': -1, 'IsEquipDIrect': False, 'IsSetOnlyEquipIndex': False})
                }
            } else
            if !PouchSystemActor.EventQueryIsSpiritOrb({'ActorName': 'ActorName'}) {
                GameSystemActor.EventOpenSpiritOrbDisplay({'IsWaitEnd': True})
                goto Event1
            } else
            if !PouchSystemActor.EventQueryIsSmallKey({'ActorName': 'ActorName'}) {
                GameSystemActor.EventOpenSmallKeyDisplay({'IsWaitEnd': True})
                goto Event1
            } else
            if !PouchSystemActor.EventQueryIsSageSoul({'ActorName': 'ActorName'}) {
                PouchSystemActor.EventTriggerSetSageSoulSummonOn({'ActorName': 'ActorName'})
            }
            goto Event1
        } else
        if !PouchSystemActor.EventQueryIsRupee({'ActorName': 'ActorName'}) {
            GameSystemActor.EventOpenRupeeDisplayForCounterStop({'IsWaitEnd': True})
        }
    }
}

void OpenGetWindow() {
    PouchContentGuestPerformer.EventOpenGetUI({'IsWaitEnd': True, 'IsSuccess': 'IsSuccess'})
}

void OpenGetWindowByActorName() {
    GameSystemActor.EventOpenGetUIByActorName({'IsWaitEnd': True, 'ActorName': 'ActorName', 'IsSuccess': 'IsSuccess', 'AttachmentActorName': '', 'EffectType': 0, 'EffectValue': -1, 'IsEnableOpenPouch': 'IsEnableOpenPouch'})
}

void WaitCloseGetWindow() {
    GameSystemActor.EventTriggerNoticeGetUIClosable()
    GameSystemActor.EventWaitCloseGetUI({'IsWaitEnd': True})
}

void PostGetWindow() {
    if !PouchContentGuestPerformer.EventQueryOwnIsMaxLifeUpPouchContent() {

        call AddMaxLife()

    } else
    if !PouchContentGuestPerformer.EventQueryOwnIsMaxStaminaUpPouchContent() {

        call AddMaxStamina()

    } else
    if !PouchContentGuestPerformer.EventQueryOwnIsMaxEnergyUpPouchContent() {

        call AddMaxEnergy()

    } else
    switch PouchContentGuestPerformer.EventQueryCheckOwnPouchContentCategory() {
      case 0:
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Pouch.Weapon.IsEnableShortcut', 'Index': -1, 'Value': True})

        call OpenActionGuideScreen.OpenActionGuideScreenWeapon()

      case 1:
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Pouch.Bow.IsEnableShortcut', 'Index': -1, 'Value': True})

        call OpenActionGuideScreen.OpenActionGuideScreenBow()

      case 3:
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Pouch.Shield.IsEnableShortcut', 'Index': -1, 'Value': True})

        call OpenActionGuideScreen.OpenActionGuideScreenShield()

      case 4:

        call OpenActionGuideScreen.OpenActionGuideScreenArmor()

      case 5:
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Pouch.Material.IsEnableShortcut', 'Index': -1, 'Value': True})
      case 8:
        GameSystemActor.EventTriggerRequestAutoSave()
        if !PouchContentGuestPerformer.EventQueryIsGetLastCaveMasterMedal() {
            switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 13}) {
              case 0:
                SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_30_01', 'IsNotOpenIfSkipedMostRecent': False})
                Event188:
                GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'NushiShop_MedalComplete'})
              case [1, 2]:
                SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_30', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event188
            }
        }
    }
}

void PostGetWindowByActorName() {
    if !PouchSystemActor.EventQueryIsMaxLifeUpPouchContent({'ActorName': 'ActorName'}) {

        call AddMaxLife()

    } else
    if !PouchSystemActor.EventQueryIsMaxStaminaUpPouchContent({'ActorName': 'ActorName'}) {

        call AddMaxStamina()

    } else
    if !PouchSystemActor.EventQueryIsMaxEnergyUpPouchContent({'ActorName': 'ActorName'}) {

        call AddMaxEnergy()

    } else
    switch PouchSystemActor.EventQueryCheckPouchContentCategory({'ActorName': 'ActorName'}) {
      case 0:
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Pouch.Weapon.IsEnableShortcut', 'Index': -1, 'Value': True})

        call OpenActionGuideScreen.OpenActionGuideScreenWeapon()

      case 1:
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Pouch.Bow.IsEnableShortcut', 'Index': -1, 'Value': True})

        call OpenActionGuideScreen.OpenActionGuideScreenBow()

      case 3:
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Pouch.Shield.IsEnableShortcut', 'Index': -1, 'Value': True})

        call OpenActionGuideScreen.OpenActionGuideScreenShield()

      case 4:

        call OpenActionGuideScreen.OpenActionGuideScreenArmor()

      case 5:
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Pouch.Material.IsEnableShortcut', 'Index': -1, 'Value': True})
      case 8:
        GameSystemActor.EventTriggerRequestAutoSave()
        if !PouchSystemActor.EventQueryIsKorokNuts({'ActorName': 'ActorName'}) {
            GameSystemActor.EventCloseKorokSeedDisplay({'IsWaitEnd': True})
        } else
        if !PouchSystemActor.EventQueryIsSpiritOrb({'ActorName': 'ActorName'}) {
            GameSystemActor.EventCloseSpiritOrbDisplay({'IsWaitEnd': True})
        } else
        if !PouchSystemActor.EventQueryIsAutoBuilderDraft({'ActorName': 'ActorName'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsGet.Obj_AutoBuilder', 'Index': -1}) {

                call GetAutoBuilderDraft({'ActorName': 'ActorName'})

            }
        } else
        if !GameSystemActor.EventQueryIsOpenUnderGroundMap()
        && !PouchSystemActor.EventQueryIsTreasureMap({'ActorName': 'ActorName'}) {

            call GetTreasureMap({'ActorName': 'ActorName'})

        }
    }
}

void AddMaxLife() {
    GameSystemActor.EventTriggerSetDisplayHeartGauge({'IsDisplayHeartGauge': True, 'IsDisplayHeartGaugeExtra': False, 'IsDisplayAtLT': False})
    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'PlayerStatus.BreakLife', 'Value': 0, 'Index': -1}) {
      case [0, 1]:
        GameDataActor.EventTriggerCopyGameDataInt({'DstGameDataName': 'SimpleIntForMessage', 'SrcGameDataName': 'PlayerStatus.MaxLife', 'SrcGameDataIndex': -1, 'DstGameDataIndex': -1})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        GameDataActor.EventTriggerSubGameDataInt({'GameDataA': 'SimpleIntForMessage', 'GameDataB': 'PlayerStatus.Life'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'SimpleIntForMessage', 'Value': 0, 'Index': -1}) {
          case [0, 1]:
            Event15:
            GameSystemActor.EventTriggerAddMaxLife({'ActorName': 'Player', 'InstanceName': '', 'AddNum': 4})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
            GameSystemActor.EventWaitHeartGaugeStable({'IsWaitEnd': True})
            GameSystemActor.EventTriggerSetDisplayHeartGauge({'IsDisplayHeartGauge': True, 'IsDisplayHeartGaugeExtra': False, 'IsDisplayAtLT': True})
          case 2:
            GameSystemActor.EventTriggerHealLifeMaxWithTarget({'ActorName': 'Player', 'InstanceName': ''})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
            GameSystemActor.EventWaitHeartGaugeStable({'IsWaitEnd': True})
            goto Event15
        }
      case 2:
        GameSystemActor.EventTriggerRemoveBreakLifeAllWithTarget({'ActorName': 'Player', 'InstanceName': ''})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
        GameSystemActor.EventWaitHeartGaugeStable({'IsWaitEnd': True})
        goto Event15
    }
}

void PreGetWindow() {
    ;
}

void PreGetWindowByActorName() {
    ;
}

void AddMaxStamina() {
    GameDataActor.EventTriggerAddOrSubGameDataFloat({'GameDataName': 'PlayerStatus.MaxStamina', 'Index': -1, 'Value': 200.0})
}

void OpenGetCookResultWindow() {
    GameSystemActor.EventOpenGetUIForCooking({'Number': 'Number', 'IsWaitEnd': True})
}

void GetCookResultWindow() {

    call OpenGetCookResultWindow({'Number': 'Number'})


    call WaitCloseGetWindow()

}

void GetCookResult1() {
    GameSystemActor.EventTriggerCookingServe({'MaterialActorName2': '', 'MaterialActorName3': '', 'MaterialActorName4': '', 'MaterialActorName5': '', 'MaterialActorName1': 'MaterialActorName1'})
    Event60:

    call GetCookResultWindow({'Number': 1, 'IsInvalidOpenPouch': False})

}

void GetCookResult2() {
    GameSystemActor.EventTriggerCookingServe({'MaterialActorName3': '', 'MaterialActorName4': '', 'MaterialActorName5': '', 'MaterialActorName1': 'MaterialActorName1', 'MaterialActorName2': 'MaterialActorName2'})
    goto Event60
}

void GetCookResult3() {
    GameSystemActor.EventTriggerCookingServe({'MaterialActorName4': '', 'MaterialActorName5': '', 'MaterialActorName1': 'MaterialActorName1', 'MaterialActorName2': 'MaterialActorName2', 'MaterialActorName3': 'MaterialActorName3'})
    goto Event60
}

void GetCookResult4() {
    GameSystemActor.EventTriggerCookingServe({'MaterialActorName5': '', 'MaterialActorName1': 'MaterialActorName1', 'MaterialActorName2': 'MaterialActorName2', 'MaterialActorName3': 'MaterialActorName3', 'MaterialActorName4': 'MaterialActorName4'})
    goto Event60
}

void GetCookResult5() {
    GameSystemActor.EventTriggerCookingServe({'MaterialActorName1': 'MaterialActorName1', 'MaterialActorName2': 'MaterialActorName2', 'MaterialActorName3': 'MaterialActorName3', 'MaterialActorName4': 'MaterialActorName4', 'MaterialActorName5': 'MaterialActorName5'})
    goto Event60
}

void GetPouchContentByGameData() {

    call OpenGetWindowByGameData({'GameDataName': 'GameData', 'IsSuccess': 'IsSuccess'})


    call GetPouchContentByGameDataImpl({'GameData': 'GameData'})


    call WaitCloseGetWindow()

}

void GetPouchContentByGameDataImpl() {
    if PouchSystemActor.EventQueryIsNotPushPouchContentByGameData({'GameDataName': 'GameData'}) {
        PouchSystemActor.EventTriggerAddOrRemovePouchContentByGameData({'Num': 1, 'GameDataName': 'GameData'})
    }
}

void OpenGetWindowByGameData() {
    GameSystemActor.EventOpenGetUIByGameData({'IsWaitEnd': True, 'GameDataName': 'GameDataName', 'IsSuccess': 'IsSuccess'})
}

void DisplayGetWindowByActorName() {

    call PreGetWindowByActorName({'ActorName': 'ActorName'})


    call OpenGetWindowByActorName({'ActorName': 'ActorName', 'IsSuccess': 'IsSuccess', 'IsEnableOpenPouch': 'IsSuccess'})


    call WaitCloseGetWindow()


    call PostGetWindowByActorName({'ActorName': 'ActorName'})


    call EquipWeaponByActorName({'EquipmentActorName': 'ActorName'})

}

void EquipWeaponImpl() {
    if !PouchContentGuestPerformer.EventQueryIsNotPushToPouchInEvent() {
        PouchContentGuestPerformer.EventTriggerErasePauseMask()
    } else
    if PouchContentGuestPerformer.EventQueryGetRequestedTargetProcess() {
        PouchContentGuestPerformer.EventTriggerEquipEquipment({'ActorName': 'Player', 'InstanceName': '', 'IsSheathed': 'IsSheathed', 'IsGetDemo': True})
        GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        PouchContentGuestPerformer.EventTriggerErasePauseMask()
    }
}

void EquipWeaponByActorNameImpl() {
    if !Player.EventQueryIsReserveEquipmentUserRequestCreateEquipment() {
        Player.EventTriggerEquipmentUserRequestCreateEquipmentIfUnequipped({'DynamicEquipmentState': 2, 'EquipmentActorName': 'EquipmentActorName', 'IsPushedPouchAndSpecifiedEquipIndex': True, 'AttachmentName': ''})
        Player.EventTriggerCancelEquipmentUserRequestCreateEquipment()
        Player.EventWaitCreationFinishedEquipment({'IsWaitEnd': True})
    }
}

void DisplayGetWindowByGameData() {

    call OpenGetWindowByGameData({'GameDataName': 'GameData', 'IsSuccess': 'IsSuccess'})


    call WaitCloseGetWindow()

}

void GetPouchContentWithAttachmentByActorName() {

    call PreGetWindowByActorName({'ActorName': 'ActorName'})


    call OpenGetWindowWithAttachmentByActorName({'ActorName': 'ActorName', 'IsSuccess': 'IsSuccess', 'AttachmentActorName': 'AttachmentName', 'EffectType': 'EffectType', 'EffectValue': 'EffectValue'})


    call GetPouchContentWithAttachmentByActorNameImpl({'ActorName': 'ActorName', 'AttachmentActor': 'AttachmentName', 'EffectType': 'EffectType', 'EffectValue': 'EffectValue'})


    call WaitCloseGetWindow()


    call PostGetWindowByActorName({'ActorName': 'ActorName'})


    call EquipWeaponWithAttachmentByActorName({'AttachmentName': 'AttachmentName', 'EquipmentActorName': 'ActorName', 'EffectType': 'EffectType', 'EffectValue': 'EffectValue'})

}

void EquipWeapon() {
    switch PouchContentGuestPerformer.EventQueryCheckOwnPouchContentCategory() {
      case 0:

        call EquipWeaponImpl({'IsSheathed': False})

        Event108:
        GameDataActor.EventTriggerSetEquipShoulderBeltGameData({'IsDisp': True})
        GameDataActor.EventTriggerSetEquipWaistBeltGameData({'IsDisp': True})
      case 1:

        call EquipWeaponImpl({'IsSheathed': True})

        goto Event108
      case [2, 4, 5, 6, 7, 8, 9, 10]:
        if !PouchContentGuestPerformer.EventQueryIsNotPushToPouchInEvent() {
            PouchContentGuestPerformer.EventTriggerErasePauseMask()
        }
      case 3:

        call EquipWeaponImpl({'IsSheathed': True})

        goto Event108
    }
}

void EquipWeaponByActorName() {
    if PouchSystemActor.EventQueryCheckPouchContentCategory({'ActorName': 'EquipmentActorName'}) in [0, 1, 3] {

        call EquipWeaponByActorNameImpl({'EquipmentActorName': 'EquipmentActorName'})

        Event101:
        GameDataActor.EventTriggerSetEquipShoulderBeltGameData({'IsDisp': True})
        GameDataActor.EventTriggerSetEquipWaistBeltGameData({'IsDisp': True})
    }
}

void EquipWeaponWithAttachmentByActorNameImpl() {
    if !Player.EventQueryIsReserveEquipmentUserRequestCreateEquipment() {
        Player.EventTriggerEquipmentUserRequestCreateEquipmentIfUnequipped({'DynamicEquipmentState': 2, 'EquipmentActorName': 'EquipmentActorName', 'AttachmentName': 'AttachmentName', 'IsPushedPouchAndSpecifiedEquipIndex': True})
        Player.EventTriggerCancelEquipmentUserRequestCreateEquipment()
        Player.EventWaitCreationFinishedEquipment({'IsWaitEnd': True})
    }
}

void EquipWeaponWithAttachmentByActorName() {
    if PouchSystemActor.EventQueryCheckPouchContentCategory({'ActorName': 'EquipmentActorName'}) in [0, 1, 3] {

        call EquipWeaponWithAttachmentByActorNameImpl({'AttachmentName': 'AttachmentName', 'EquipmentActorName': 'EquipmentActorName', 'EffectType': 'EffectType', 'EffectValue': 'EffectValue'})

        goto Event101
    }
}

void OpenGetWindowWithAttachmentByActorName() {
    GameSystemActor.EventOpenGetUIByActorName({'IsWaitEnd': True, 'ActorName': 'ActorName', 'IsSuccess': 'IsSuccess', 'AttachmentActorName': 'AttachmentActorName', 'EffectType': 'EffectType', 'EffectValue': 'EffectValue', 'IsEnableOpenPouch': 'IsSuccess'})
}

void GetPouchContentWithAttachmentByActorNameImpl() {
    if PouchSystemActor.EventQueryIsNotPushPouchContent({'ActorName': 'ActorName'})
    && !PouchSystemActor.EventQueryIsPouchContent({'ActorName': 'ActorName'}) {

        call ReserveEquip({'ActorName': 'ActorName'})

        if !PouchSystemActor.EventQueryIsKorokNuts({'ActorName': 'ActorName'}) {
            GameSystemActor.EventOpenKorokSeedDisplay({'IsWaitEnd': True})
            Event102:
            if !Player.EventQueryIsReserveEquipmentUserRequestCreateEquipment() {
                PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Num': 1, 'IsEquipDIrect': False, 'Actor': 'ActorName', 'AttachmentActor': 'AttachmentActor', 'EffectType': 'EffectType', 'EffectValue': 'EffectValue', 'IsSetOnlyEquipIndex': True})
            } else {
                PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Num': 1, 'IsEquipDIrect': False, 'Actor': 'ActorName', 'AttachmentActor': 'AttachmentActor', 'EffectType': 'EffectType', 'EffectValue': 'EffectValue', 'IsSetOnlyEquipIndex': False})
            }
        } else
        if !PouchSystemActor.EventQueryIsSpiritOrb({'ActorName': 'ActorName'}) {
            GameSystemActor.EventOpenSpiritOrbDisplay({'IsWaitEnd': True})
            goto Event102
        } else
        if !PouchSystemActor.EventQueryIsSmallKey({'ActorName': 'ActorName'}) {
            GameSystemActor.EventOpenSmallKeyDisplay({'IsWaitEnd': True})
            goto Event102
        } else
        if !PouchSystemActor.EventQueryIsSageSoul({'ActorName': 'ActorName'}) {
            PouchSystemActor.EventTriggerSetSageSoulSummonOn({'ActorName': 'ActorName'})
        }
        goto Event102
    }
}

void ReserveEquip() {
    switch PouchSystemActor.EventQueryCheckPouchContentCategory({'ActorName': 'ActorName'}) {
      case 0:
        if Player.EventQueryCheckIsEquippedDynamicEquipment({'DynamicEquipmentSlot': 0}) {
            Event127:
            Player.EventTriggerReserveEquipmentUserRequestCreateEquipment()
        }
      case 1:
        if Player.EventQueryCheckIsEquippedDynamicEquipment({'DynamicEquipmentSlot': 3}) {
            goto Event127
        }
      case 3:
        if Player.EventQueryCheckIsEquippedDynamicEquipment({'DynamicEquipmentSlot': 4}) {
            goto Event127
        }
    }
}

void OpenGetWindowForArmorUpgrade() {
    GameSystemActor.EventOpenGetUIForArmorUpgrade({'IsWaitEnd': True})
}

void DisplayGetWindowForArmorUpgrade() {

    call OpenGetWindowForArmorUpgrade()


    call WaitCloseGetWindow()

}

void AddMaxEnergy() {
    GameSystemActor.EventTriggerAddMaxEnergyGauge()
    GameSystemActor.EventSetEnergyGaugeMax()
}

void GetTreasureMap() {

    call OpenTreasureMap({'ActorName': 'ActorName'})

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    if !PouchSystemActor.EventQueryIsTreasureMapContentAlreadyGet({'ActorName': 'ActorName'}) {
        MinusMenuSystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/DmF_SY_Treasurebox:TreasureMapAlreadyGet', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        MinusMenuSystemTextNPC.EventTalk({'MessageId': 'EventFlowMsg/DmF_SY_Treasurebox:TreasureMap', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
    }

    call CloseTreasureMap()

}

void OpenTreasureMap() {
    GameSystemActor.EventShowTreasureMapTarget({'IsShowPlayerNavi': True, 'InShowIcon': False, 'ActorName': 'ActorName', 'ZoomLevel': 3, 'IsWaitEnd': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    GameSystemActor.EventTriggerEmphasizeTreasureMapTargetIcon({'ActorName': 'ActorName'})
}

void CloseTreasureMap() {
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    GameSystemActor.EventCloseMinusMenu({'IsWaitEnd': True})
}

void GetAutoBuilderDraft() {
    GameSystemActor.EventShowNewAutoBuilderDraft({'IsWaitEnd': True, 'ActorName': 'ActorName'})
    SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/DmF_SY_Treasurebox:AutoBuilderDraft', 'IsNotOpenIfSkipedMostRecent': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    GameSystemActor.EventCloseNewAutoBuilderDraft({'IsWaitEnd': True})
}

void OpenNearestTreasureMap() {
    GameSystemActor.EventShowNearestTreasureMapTarget({'IsShowPlayerNavi': True, 'InShowIcon': False, 'ZoomLevel': 3, 'IsWaitEnd': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    GameSystemActor.EventTriggerEmphasizeNearestTreasureMapTargetIcon()
}
