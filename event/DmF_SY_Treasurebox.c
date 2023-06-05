-------- EventFlow: DmF_SY_Treasurebox --------

Actor: TreasureBox_EventStarter
entrypoint: None()
actions: ['EventTriggerTreasureBoxOpened', 'EventPlayAS', 'EventTriggerTBoxErasePauseMask', 'EventTriggerTBoxPushPoseMask']
queries: ['EventQueryIsFaceToFace', 'EventQueryWhatArchitecturalDesign']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerRequestAutoSave', 'EventCloseGetUI', 'EventOpenTreasureFullShortcutUI', 'EventCloseTreasureFullShortcutUI', 'EventOpenTreasureFullSimpleInfo', 'EventTriggerSendGetAnmMessageToPlalyer', 'EventWait']
queries: ['EventQueryExistEventStarter']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventPlayerTurnAndLook', 'EventTriggerPlayerRequestKeepCrouch', 'EventPlayerOnMotionTypeStatic', 'EventPlayerOffMotionTypeStatic']
queries: ['EventQueryPlayerEquipLowerArmor', 'EventQueryIsEquipArmor']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryIsPouchContent', 'EventQueryCheckPouchContentCategory']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventChangeTemporarilyToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

void Success() {
    if !GameSystemActor.EventQueryExistEventStarter() {

        call Open()


        call GetPouchContent.GetPouchContentWithAttachmentByActorName({'IsInvalidOpenPouch': False, 'IsSuccess': True, 'ActorName': 'ContentName', 'AttachmentName': 'AttachmentName', 'EffectType': 'EffectType', 'EffectValue': 'EffectValue'})

        TreasureBox_EventStarter.EventTriggerTreasureBoxOpened()
        TreasureBox_EventStarter.EventTriggerTBoxErasePauseMask()
        Player.EventPlayerOffMotionTypeStatic()
        GameSystemActor.EventTriggerSendGetAnmMessageToPlalyer()
        GameSystemActor.EventTriggerRequestAutoSave()
    } else {
        GameSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
    }
}

void Open() {
    Player.EventTriggerPlayerRequestKeepCrouch()

    fork {
        TreasureBox_EventStarter.EventTriggerTBoxPushPoseMask()
    } {
        EventCamera.EventChangeTemporarilyToPlayerCamera({'IsWaitEnd': False, 'EnableControle': True})
    }


    call Common.InitPlayState({'IsRidableGetOff': False, 'IsUnequip': True})

    Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 0, 'Target': 1, 'KeepTalkWait': True, 'OffsetBase': 0})
    Player.EventPlayerOnMotionTypeStatic()
    if !TreasureBox_EventStarter.EventQueryIsFaceToFace({'ActorName': 'Player'}) {

        fork {
            if !TreasureBox_EventStarter.EventQueryWhatArchitecturalDesign() {
                Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsWaitEnd': False, 'IsAllSlot': False, 'ASCommand': 'OpenTreasureBox', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            } else {
                Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsWaitEnd': False, 'IsAllSlot': False, 'ASCommand': 'OpenTreasureBoxWithZonau', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            }
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 12})
            TreasureBox_EventStarter.EventPlayAS({'IsWaitEnd': True, 'ASName': 'FrontOpen', 'IsAnimeDriven': False, 'IsAllSlot': False, 'Partial': '', 'ForceFadeInFrame': -1.0})
        }

    } else {

        fork {
            if !Player.EventQueryPlayerEquipLowerArmor() {
                Event10:
                Player.EventPlayerPlayASForFlowchart({'ASCommand': 'OpenTreasureBoxWithPainfulKick', 'UseAnmDriven': False, 'IsWaitEnd': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            } else
            if !Player.EventQueryIsEquipArmor({'ArmorName': 'Armor_1066_Lower', 'ArmorSlot': 2}) {
                goto Event10
            } else
            if !Player.EventQueryIsEquipArmor({'ArmorName': 'Armor_1067_Lower', 'ArmorSlot': 2}) {
                goto Event10
            } else
            if !Player.EventQueryIsEquipArmor({'ArmorSlot': 2, 'ArmorName': 'Armor_1068_Lower'}) {
                goto Event10
            } else
            if !Player.EventQueryIsEquipArmor({'ArmorSlot': 2, 'ArmorName': 'Armor_1069_Lower'}) {
                goto Event10
            } else
            if !Player.EventQueryIsEquipArmor({'ArmorSlot': 2, 'ArmorName': 'Armor_1070_Lower'}) {
                goto Event10
            } else
            if !Player.EventQueryIsEquipArmor({'ArmorSlot': 2, 'ArmorName': 'Armor_1086_Lower'}) {
                goto Event10
            } else {
                Player.EventPlayerPlayASForFlowchart({'ASCommand': 'OpenTreasureBoxWithKick', 'UseAnmDriven': False, 'IsWaitEnd': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            }
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 12})
            TreasureBox_EventStarter.EventPlayAS({'IsWaitEnd': True, 'ASName': 'Open', 'IsAnimeDriven': False, 'IsAllSlot': False, 'Partial': '', 'ForceFadeInFrame': -1.0})
        }

    }
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}

void Close() {
    TreasureBox_EventStarter.EventPlayAS({'IsWaitEnd': True, 'ASName': 'Close', 'IsAnimeDriven': False, 'IsAllSlot': False, 'Partial': '', 'ForceFadeInFrame': -1.0})
}

void Failed() {
    if !GameSystemActor.EventQueryExistEventStarter() {

        call Open()


        call GetPouchContent.OpenGetWindowWithAttachmentByActorName({'IsSuccess': False, 'ActorName': 'ContentName', 'AttachmentActorName': 'AttachmentName', 'EffectType': 'EffectType', 'EffectValue': 'EffectValue'})

        switch PouchSystemActor.EventQueryCheckPouchContentCategory({'ActorName': 'ContentName'}) {
          case [0, 1, 3]:
            GameSystemActor.EventOpenTreasureFullSimpleInfo({'IsWaitEnd': True})
            EventCamera.EventChangeTemporarilyToPlayerCamera({'IsWaitEnd': False, 'EnableControle': False})
            GameSystemActor.EventOpenTreasureFullShortcutUI({'IsWaitEnd': True, 'ActorName': 'ContentName'})
            GameSystemActor.EventCloseTreasureFullShortcutUI({'IsWaitEnd': True})
            EventCamera.EventChangeTemporarilyToPlayerCamera({'IsWaitEnd': False, 'EnableControle': True})
            if !PouchSystemActor.EventQueryIsPouchContent({'ActorName': 'ContentName'}) {

                call GetPouchContent.GetPouchContentWithAttachmentByActorNameImpl({'ActorName': 'ContentName', 'AttachmentActor': 'AttachmentName', 'EffectType': 'EffectType', 'EffectValue': 'EffectValue'})


                call GetPouchContent.PreGetWindowByActorName({'ActorName': 'ContentName'})


                call GetPouchContent.WaitCloseGetWindow()


                call GetPouchContent.PostGetWindowByActorName({'ActorName': 'ContentName'})


                call GetPouchContent.EquipWeaponWithAttachmentByActorName({'EquipmentActorName': 'ContentName', 'AttachmentName': 'AttachmentName', 'EffectType': 'EffectType', 'EffectValue': 'EffectValue'})

                TreasureBox_EventStarter.EventTriggerTreasureBoxOpened()
                GameSystemActor.EventTriggerSendGetAnmMessageToPlalyer()
                Event27:
                TreasureBox_EventStarter.EventTriggerTBoxErasePauseMask()
                Player.EventPlayerOffMotionTypeStatic()
                GameSystemActor.EventTriggerRequestAutoSave()
            } else {
                Event31:
                GameSystemActor.EventCloseGetUI({'IsWaitEnd': True})

                call Close()

                goto Event27
            }
          case [2, 4, 5, 6, 7, 8, 9, 10]:

            call GetPouchContent.WaitCloseGetWindow()

            goto Event31
        }
    } else {
        GameSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
    }
}

void Success_DisplayOnly() {

    call Open()


    call GetPouchContent.DisplayGetWindowByActorName({'IsSuccess': True, 'ActorName': 'ContentName'})

    TreasureBox_EventStarter.EventTriggerTreasureBoxOpened()
    TreasureBox_EventStarter.EventTriggerTBoxErasePauseMask()
    Player.EventPlayerOffMotionTypeStatic()
    GameSystemActor.EventTriggerSendGetAnmMessageToPlalyer()
    GameSystemActor.EventTriggerRequestAutoSave()
}
