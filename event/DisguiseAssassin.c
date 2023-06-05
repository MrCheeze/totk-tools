-------- EventFlow: DisguiseAssassin --------

Actor: AssasinTextNPC[AssassinNearTrap]
entrypoint: None()
actions: ['EventTalk', 'EventTriggerParticipateEvent']
queries: ['EventQueryOwningObjectPlayerInterference', 'EventQueryAvoidDuplicationRandomChoice3']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Obj_TreeDeadLeaf_Assassin_00[Deadleaf001]
entrypoint: None()
actions: ['EventReplaceWithActorInHolder', 'EventTriggerChangeModelAlphaDrawTiming']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventChangeTemporarilyToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait', 'EventRequestQuit']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundBeginForbidDialogDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Obj_TreeDeadLeaf_Assassin_01[Deadleaf003]
entrypoint: None()
actions: ['EventReplaceWithActorInHolder', 'EventTriggerChangeModelAlphaDrawTiming']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Enemy_Assassin_Junior[Deadleaf001]
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'IsBindNearestActor': False}

Actor: Enemy_Assassin_Junior[Deadleaf002]
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'IsBindNearestActor': False}

Actor: Enemy_Assassin_Middle[Deadleaf003]
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'IsBindNearestActor': False}

Actor: Enemy_Assassin_Middle[Deadleaf004]
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'IsBindNearestActor': False}

Actor: Enemy_Assassin_Junior[Deadleaf005]
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'IsBindNearestActor': False}

Actor: Enemy_Assassin_Middle[Deadleaf006]
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'IsBindNearestActor': False}

Actor: Obj_TreeDeadLeaf_Assassin_03[Deadleaf002]
entrypoint: None()
actions: ['EventReplaceWithActorInHolder', 'EventTriggerChangeModelAlphaDrawTiming']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Obj_TreeDeadLeaf_Assassin_02[Deadleaf006]
entrypoint: None()
actions: ['EventReplaceWithActorInHolder', 'EventTriggerChangeModelAlphaDrawTiming']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Obj_TreeDeadLeaf_Assassin_04[Deadleaf005]
entrypoint: None()
actions: ['EventReplaceWithActorInHolder', 'EventTriggerChangeModelAlphaDrawTiming']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Obj_TreeDeadLeaf_Assassin_05[Deadleaf004]
entrypoint: None()
actions: ['EventReplaceWithActorInHolder', 'EventTriggerChangeModelAlphaDrawTiming']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventWait', 'EventTriggerParticipateEvent', 'EventGoOffstageForUser', 'EventPlayerUnequip', 'EventPlayerWait', 'EventDoNothing']
queries: ['EventQueryPlayerEquipArmorSeries', 'EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerControllerRumble', 'EventTriggerRequestAutoSave']
queries: ['EventQueryRandomChoice3']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void C01() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'Actor1ActorName': 'Player', 'PosVector': [2.3399999141693115, 5.179999828338623, -5.409999847412109], 'AtVector': [-0.05000000074505806, 1.5099999904632568, 0.11999999731779099], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'IsWaitEnd': False, 'IsLinearMove': True, 'MoveTime': 360, 'Actor1ActorName': 'Player', 'PosVector': [2.119999885559082, 4.840000152587891, -4.900000095367432], 'AtVector': [-0.05000000074505806, 1.5099999904632568, 0.11999999731779099], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        AssasinTextNPC[AssassinNearTrap].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'MessageId', 'NotPlayLipSyncAnim': False, 'IsAnonymous': True, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        if !Player.EventQueryCheckPlayerState({'State': 4}) {
            if Player.EventQueryCheckPlayerState({'State': 5}) {
                Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'Talk', 'IsWaitEnd': False, 'ClothWarpMode': 0})
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
                Player.EventTriggerPlayerRequestLookAtTheFrontLock()
                Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'TalkSurprise', 'IsWaitEnd': True, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'ASCommand': 'LookAround', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            }
        } else {
            Player.EventDoNothing({'IsWaitEnd': False})
            Player.EventTriggerPlayerRequestLookAtTheFrontLock()
        }
    }

}

void C02() {

    fork {

        call Dm_SY_0004.Sound_Control()

        AssasinTextNPC[AssassinNearTrap].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'MessageId', 'NotPlayLipSyncAnim': False, 'IsAnonymous': True, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        if !Player.EventQueryCheckPlayerState({'State': 4}) {
            if Player.EventQueryCheckPlayerState({'State': 5}) {
                Player.EventPlayerPlayASForFlowchart({'ASCommand': 'LookAround', 'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'Actor1ActorName': 'Player', 'PosVector': [0.7200000286102295, 0.75, 1.309999942779541], 'AtVector': [0.05999999865889549, 1.2400000095367432, 0.18000000715255737], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 360, 'IsWaitEnd': False, 'Actor1ActorName': 'Player', 'PosVector': [0.6700000166893005, 0.75, 1.340000033378601], 'AtVector': [0.05999999865889549, 1.2400000095367432, 0.18000000715255737], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsLinearMove': True, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            }
        } else {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'Actor1ActorName': 'Player', 'PosVector': [0.9200000166893005, 0.03999999910593033, 1.2000000476837158], 'AtVector': [0.05999999865889549, 0.44999998807907104, 0.18000000715255737], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 360, 'IsWaitEnd': False, 'Actor1ActorName': 'Player', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsLinearMove': True, 'AtVector': [0.05999999865889549, 0.44999998807907104, 0.18000000715255737], 'PosVector': [0.9200000166893005, 0.03999999910593033, 1.2300000190734863], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        }
    }

}

void C03() {

    fork {

        call Dm_SY_0004.Sound_AssassinAppear()

        AssasinTextNPC[AssassinNearTrap].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'MessageId', 'NotPlayLipSyncAnim': False, 'IsAnonymous': True, 'IsNotOpenIfSkipedMostRecent': False})

        call Sound_ForbidDialogDuck()

    } {
        if !Player.EventQueryCheckPlayerState({'State': 4}) {
            if Player.EventQueryCheckPlayerState({'State': 5}) {
                Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'ASCommand': 'DemoWait', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'Actor1ActorName': 'Player', 'PosVector': [0.8999999761581421, 1.7999999523162842, -5.21999979019165], 'AtVector': [0.0, 1.7999999523162842, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            }
        } else {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'Actor1ActorName': 'Player', 'PosVector': [0.8999999761581421, 0.019999999552965164, -5.349999904632568], 'AtVector': [0.0, 0.019999999552965164, -0.11999999731779099], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        }
    }

    EventCamera.EventChangeTemporarilyToPlayerCamera({'EnableControle': True, 'IsWaitEnd': False})
}

void DisguiseTrap_PickDemo() {
    Event243:

    call BananaPickRandom()

}

void DisguiseTrap_Burn() {

    call DisguiseTrap_Option()


    call BananaCheckOutfit()


    call DisguiseTrap_BurnDemo()


    call DisguiseTrap_Conclude()

}

void DisguiseTrap_BurnDemo() {
    Event244:

    call BananaBurnRandom()

}

void DisguiseTrap_MagicDemo() {
    Event245:

    call BananaMagicRandom()

}

void DisguiseTrap_Magic() {

    call DisguiseTrap_Option()


    call BananaCheckOutfit()

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'AssassinTrap_BananaMove', 'Index': -1}) {
        Event280:

        call DisguiseTrap_BurnDemo()

        Event341:

        call DisguiseTrap_Conclude()

    } else
    switch AssasinTextNPC[AssassinNearTrap].EventQueryOwningObjectPlayerInterference({'IsCheckBrokenInterferedOnly': False}) {
      case 0:
        goto Event280
      case [1, 2, 3, 4, 6]:

        call DisguiseTrap_MagicDemo()

        goto Event341
      case 5:

        call DisguiseTrap_PickDemo()

        goto Event341
    }
}

void C01_Cam() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'Actor1ActorName': 'Player', 'PosVector': [2.3399999141693115, 5.179999828338623, -5.409999847412109], 'AtVector': [-0.05000000074505806, 1.5099999904632568, 0.11999999731779099], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'IsWaitEnd': False, 'IsLinearMove': True, 'MoveTime': 360, 'Actor1ActorName': 'Player', 'PosVector': [2.119999885559082, 4.840000152587891, -4.900000095367432], 'AtVector': [-0.05000000074505806, 1.5099999904632568, 0.11999999731779099], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void C02_Cam() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'TargetFovy': 38.79999923706055, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'TargetActorName', 'Actor1InstanceName': 'TargetActorInstanceName', 'PosVector': [0.3400000035762787, 1.4199999570846558, 6.110000133514404], 'AtVector': [0.07999999821186066, 1.8899999856948853, -0.5199999809265137], 'CameraCollisionMode': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 360, 'IsLinearMove': True, 'IsWaitEnd': False, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'TargetFovy': 38.79999923706055, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'TargetActorName', 'Actor1InstanceName': 'TargetActorInstanceName', 'PosVector': [0.33000001311302185, 1.4199999570846558, 5.820000171661377], 'AtVector': [0.07000000029802322, 1.8899999856948853, -0.8100000023841858], 'CameraCollisionMode': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void C04() {

    fork {

        call C01_Cam()

    } {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsAnonymous': True, 'NotPlayLipSyncAnim': False, 'MessageId': 'MessageId1', 'IsNotOpenIfSkipedMostRecent': False})
    } {
        if !Player.EventQueryCheckPlayerState({'State': 4}) {
            if Player.EventQueryCheckPlayerState({'State': 5}) {
                Player.EventWait({'Frames': 1, 'IsWaitEnd': True})
                Player.EventPlayerPlayASForFlowchart({'ASCommand': 'LookAround', 'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            }
        } else {
            Player.EventDoNothing({'IsWaitEnd': False})
            Player.EventTriggerPlayerRequestLookAtTheFrontLock()
        }
    }

}

void C05() {

    fork {

        call C02_Cam({'TargetActorName': 'TargetActorName', 'TargetActorInstanceName': 'TargetActorInstanceName'})

    } {
        if !Player.EventQueryCheckPlayerState({'State': 4}) {
            if Player.EventQueryCheckPlayerState({'State': 5}) in [0, 1] {
                Player.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
                Event67:
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})

                call Dm_SY_0004.Sound_Control()

                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsAnonymous': True, 'NotPlayLipSyncAnim': False, 'MessageId': 'MessageId2', 'IsNotOpenIfSkipedMostRecent': False})

                call Dm_SY_0004.Sound_AssassinAppear()

                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'MinusYiga_IsCompleted_Exp'}) {

                    call KohgaRandomTree()

                } else {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsAnonymous': True, 'NotPlayLipSyncAnim': False, 'MessageId': 'MessageId3', 'IsNotOpenIfSkipedMostRecent': False})
                }
            }
        } else {
            Player.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': True})
            goto Event67
        }
    }

}

void DisguiseTree_AttackL() {

    call DiguiseTree_AttackOption({'TargetActorInstanceName': 'Deadleaf004', 'TargetActorName': 'Obj_TreeDeadLeaf_Assassin_05'})

    Event182:

    call DisguiseTree_EnemyChange()

    Event181:

    call DisguiseTree_Conclude()

}

void DisguiseTree_Attack() {

    call DiguiseTree_AttackOption({'TargetActorInstanceName': 'Deadleaf005', 'TargetActorName': 'Obj_TreeDeadLeaf_Assassin_04'})

    goto Event182
}

void DisguiseTree_AttackR() {

    call DiguiseTree_AttackOption({'TargetActorInstanceName': 'Deadleaf006', 'TargetActorName': 'Obj_TreeDeadLeaf_Assassin_02'})

    goto Event182
}

void DisguiseTree_Burn() {

    call DisguiseTree_BurnOption()


    call DisguiseTree_EnemyChange()

    Event100:

    call DisguiseTree_Conclude()

}

void DisguiseTree_Magic() {

    call DisguiseTree_MagicOption()


    call DisguiseTree_EnemyChange()

    Event292:

    call DisguiseTree_Conclude()

}

void DiguiseTree_AttackOption() {

    call Common.AirStartUP_Player()

    Player.EventTriggerParticipateEvent()
    AssasinTextNPC[AssassinNearTrap].EventTriggerParticipateEvent()
    if !Player.EventQueryCheckPlayerState({'State': 5}) {
        Event273:
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

        call TreeCheckOutfit()

        switch GameSystemActor.EventQueryRandomChoice3() {
          case 0:

            call DisguiseTree_AttackDemo({'MessageId1': 'EventFlowMsg/DisguiseAssassin:Talk_0020', 'MessageId2': 'EventFlowMsg/DisguiseAssassin:Talk_0021', 'MessageId3': 'EventFlowMsg/DisguiseAssassin:Talk_0036', 'TargetActorName': 'TargetActorName', 'TargetActorInstanceName': 'TargetActorInstanceName'})

            Event328:
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
          case 1:

            call DisguiseTree_AttackDemo({'MessageId1': 'EventFlowMsg/DisguiseAssassin:Talk_0027', 'MessageId2': 'EventFlowMsg/DisguiseAssassin:Talk_0029', 'MessageId3': 'EventFlowMsg/DisguiseAssassin:Talk_0037', 'TargetActorName': 'TargetActorName', 'TargetActorInstanceName': 'TargetActorInstanceName'})

            goto Event328
          case 2:

            call DisguiseTree_AttackDemo({'MessageId1': 'EventFlowMsg/DisguiseAssassin:Talk_0028', 'MessageId2': 'EventFlowMsg/DisguiseAssassin:Talk_0030', 'MessageId3': 'EventFlowMsg/DisguiseAssassin:Talk_0038', 'TargetActorName': 'TargetActorName', 'TargetActorInstanceName': 'TargetActorInstanceName'})

            goto Event328
        }
    } else {
        Player.EventPlayerUnequip({'IsWaitEnd': True})
        Player.EventPlayerWait({'IsWaitEnd': True})
        goto Event273
    }
}

void Sound_ForbidDialogDuck() {
    SoundSystemActor.EventTriggerSoundBeginForbidDialogDucking({'CommandLife': 0})
}

void DisguiseTree_EnemyChange() {

    call Sound_ForbidDialogDuck()

    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'AttackedDeadLeafAssassin', 'Index': -1, 'Value': True})

    fork {
        Obj_TreeDeadLeaf_Assassin_02[Deadleaf006].EventTriggerChangeModelAlphaDrawTiming({'IsPreEffect': False, 'IsPostEffect': True})
        Obj_TreeDeadLeaf_Assassin_02[Deadleaf006].EventReplaceWithActorInHolder({'IsWaitEnd': True, 'Offset': [0.0, 0.0, 0.0], 'Key': 'Identity', 'DropTable': '', 'IsSwitch': True, 'IsNoHit': True})
    } {
        Obj_TreeDeadLeaf_Assassin_04[Deadleaf005].EventTriggerChangeModelAlphaDrawTiming({'IsPreEffect': False, 'IsPostEffect': True})
        Obj_TreeDeadLeaf_Assassin_04[Deadleaf005].EventReplaceWithActorInHolder({'IsWaitEnd': True, 'Offset': [0.0, 0.0, 0.0], 'Key': 'Identity', 'DropTable': '', 'IsSwitch': True, 'IsNoHit': True})
    } {
        Obj_TreeDeadLeaf_Assassin_05[Deadleaf004].EventTriggerChangeModelAlphaDrawTiming({'IsPreEffect': False, 'IsPostEffect': True})
        Obj_TreeDeadLeaf_Assassin_05[Deadleaf004].EventReplaceWithActorInHolder({'IsWaitEnd': True, 'Offset': [0.0, 0.0, 0.0], 'Key': 'Identity', 'DropTable': '', 'IsSwitch': True, 'IsNoHit': True})
    }


    call smoke_vibration()

    GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Middle'})

    fork {
        Enemy_Assassin_Middle[Deadleaf004].EventPlayAS({'ASName': 'Encounter', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        Enemy_Assassin_Junior[Deadleaf005].EventPlayAS({'ASName': 'Encounter', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        Enemy_Assassin_Middle[Deadleaf006].EventPlayAS({'ASName': 'Encounter', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        EventSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})
    }

}

void BananaComrade() {
    switch AssasinTextNPC[AssassinNearTrap].EventQueryAvoidDuplicationRandomChoice3() {
      case 0:
        AssasinTextNPC[AssassinNearTrap].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/DisguiseAssassin:Talk_0033', 'NotPlayLipSyncAnim': False, 'IsNotBecomeSpeaker': False, 'IsAnonymous': True, 'IsNotOpenIfSkipedMostRecent': False})
        AssasinTextNPC[AssassinNearTrap].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/DisguiseAssassin:Talk_0047', 'NotPlayLipSyncAnim': False, 'IsAnonymous': True, 'IsNotOpenIfSkipedMostRecent': False})
      case 1:
        AssasinTextNPC[AssassinNearTrap].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/DisguiseAssassin:Talk_0034', 'NotPlayLipSyncAnim': False, 'IsAnonymous': True, 'IsNotOpenIfSkipedMostRecent': False})
        AssasinTextNPC[AssassinNearTrap].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/DisguiseAssassin:Talk_0048', 'NotPlayLipSyncAnim': False, 'IsAnonymous': True, 'IsNotOpenIfSkipedMostRecent': False})
      case 2:
        AssasinTextNPC[AssassinNearTrap].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/DisguiseAssassin:Talk_0035', 'NotPlayLipSyncAnim': False, 'IsAnonymous': True, 'IsNotOpenIfSkipedMostRecent': False})
        AssasinTextNPC[AssassinNearTrap].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/DisguiseAssassin:Talk_0049', 'NotPlayLipSyncAnim': False, 'IsAnonymous': True, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void TreeComrade() {
    switch AssasinTextNPC[AssassinNearTrap].EventQueryAvoidDuplicationRandomChoice3() {
      case 0:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/DisguiseAssassin:Talk_0041', 'NotPlayLipSyncAnim': False, 'IsAnonymous': True, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/DisguiseAssassin:Talk_0044', 'NotPlayLipSyncAnim': False, 'IsAnonymous': True, 'IsNotOpenIfSkipedMostRecent': False})
      case 1:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/DisguiseAssassin:Talk_0042', 'NotPlayLipSyncAnim': False, 'IsAnonymous': True, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/DisguiseAssassin:Talk_0045', 'NotPlayLipSyncAnim': False, 'IsAnonymous': True, 'IsNotOpenIfSkipedMostRecent': False})
      case 2:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/DisguiseAssassin:Talk_0043', 'NotPlayLipSyncAnim': False, 'IsAnonymous': True, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/DisguiseAssassin:Talk_0046', 'NotPlayLipSyncAnim': False, 'IsAnonymous': True, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void KohgaRandom() {
    switch GameSystemActor.EventQueryRandomChoice3() {
      case 0:
        AssasinTextNPC[AssassinNearTrap].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/DisguiseAssassin:Talk_0032', 'NotPlayLipSyncAnim': False, 'IsAnonymous': True, 'IsNotOpenIfSkipedMostRecent': False})
      case 1:
        AssasinTextNPC[AssassinNearTrap].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/DisguiseAssassin:Talk_0039', 'NotPlayLipSyncAnim': False, 'IsAnonymous': True, 'IsNotOpenIfSkipedMostRecent': False})
      case 2:
        AssasinTextNPC[AssassinNearTrap].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/DisguiseAssassin:Talk_0040', 'NotPlayLipSyncAnim': False, 'IsAnonymous': True, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void KohgaRandomTree() {
    switch GameSystemActor.EventQueryRandomChoice3() {
      case 0:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/DisguiseAssassin:Talk_0032', 'NotPlayLipSyncAnim': False, 'IsAnonymous': True, 'IsNotOpenIfSkipedMostRecent': False})
      case 1:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/DisguiseAssassin:Talk_0039', 'NotPlayLipSyncAnim': False, 'IsAnonymous': True, 'IsNotOpenIfSkipedMostRecent': False})
      case 2:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/DisguiseAssassin:Talk_0040', 'NotPlayLipSyncAnim': False, 'IsAnonymous': True, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void KohgaRandomBanana() {
    switch GameSystemActor.EventQueryRandomChoice3() {
      case 0:

        call C03({'MessageId': 'EventFlowMsg/DisguiseAssassin:Talk_0032'})

      case 1:

        call C03({'MessageId': 'EventFlowMsg/DisguiseAssassin:Talk_0039'})

      case 2:

        call C03({'MessageId': 'EventFlowMsg/DisguiseAssassin:Talk_0040'})

    }
}

void DisguiseTree_BananaOption() {
    AssasinTextNPC[AssassinNearTrap].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'MessageId1', 'IsAnonymous': True, 'IsNotOpenIfSkipedMostRecent': False})

    call Dm_SY_0004.Sound_Control()

    AssasinTextNPC[AssassinNearTrap].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'MessageId2', 'IsAnonymous': True, 'IsNotOpenIfSkipedMostRecent': False})

    call Dm_SY_0004.Sound_AssassinAppear()

    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'MinusYiga_IsCompleted_Exp'}) {

        call KohgaRandom()

    } else {
        AssasinTextNPC[AssassinNearTrap].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'MessageId3', 'IsAnonymous': True, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void DisguiseTree_BurnMagicDemo() {

    call C04_01({'MessageId1': 'MessageId1', 'MessageId2': 'MessageId2', 'MessageId3': 'MessageId3', 'MessageId4': 'MessageId4', 'MessageId5': 'MessageId5', 'MessageId6': 'MessageId6', 'MessageId7': 'MessageId7', 'MessageId8': 'MessageId8', 'MessageId9': 'MessageId9'})

    Event79:
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'MoveTime': 0, 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1InstanceName': 'AssassinNearTrap', 'Actor1ActorName': 'AssasinTextNPC', 'PosVector': [-3.0, 8.0, -10.0], 'AtVector': [0.0, 4.0, 0.0], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        if !Player.EventQueryCheckPlayerState({'State': 4}) {
            if !Player.EventQueryCheckPlayerState({'State': 5}) {
                Player.EventWait({'Frames': 1, 'IsWaitEnd': True})
            } else {
                Player.EventWait({'Frames': 1, 'IsWaitEnd': True})
                Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'ASCommand': 'DemoWait', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            }
        } else {
            Player.EventWait({'Frames': 1, 'IsWaitEnd': True})
        }
    }

}

void DisguiseTrap_DemoOption() {

    call C01({'MessageId': 'MessageId1'})


    call C02({'MessageId': 'MessageId2'})

    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'MinusYiga_IsCompleted_Exp'}) {

        call KohgaRandomBanana()

    } else {

        call C03({'MessageId': 'MessageId3'})

    }
}

void BananaCheckOutfit() {
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckUpper': True, 'CheckLower': True, 'CheckSeries': 'Yiga'}) {
        Event46:

        call BananaComrade()

        EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
        GameSystemActor.EventTriggerRequestAutoSave()
    } else
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckUpper': True, 'CheckLower': True, 'CheckSeries': 'Yiga', 'CheckHead': False})
    && !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckUpper': False, 'CheckLower': False, 'CheckSeries': 'ThunderHelm'}) {
        goto Event46
    }
}

void TreeCheckOutfit() {
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckUpper': True, 'CheckLower': True, 'CheckSeries': 'Yiga'}) {
        Event131:

        call TreeComrade()

        EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
        GameSystemActor.EventTriggerRequestAutoSave()
    } else
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckUpper': True, 'CheckLower': True, 'CheckSeries': 'Yiga', 'CheckHead': False})
    && !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckUpper': False, 'CheckLower': False, 'CheckSeries': 'ThunderHelm'}) {
        goto Event131
    }
}

void DisguiseTrap_Magic01() {

    call DisguiseTrap_Option()


    call BananaCheckOutfit()

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'AssassinTrap_BananaMove', 'Index': -1}) {
        Event276:

        call DisguiseTrap_BurnDemo01()

        Event39:

        call DisguiseTrap_Conclude()

    } else
    switch AssasinTextNPC[AssassinNearTrap].EventQueryOwningObjectPlayerInterference({'IsCheckBrokenInterferedOnly': False}) {
      case 0:
        goto Event276
      case [1, 2, 3, 4, 6]:

        call DisguiseTrap_MagicDemo01()

        goto Event39
      case 5:

        call DisguiseTrap_PickDemo01()

        goto Event39
    }
}

void DisguiseTrap_Burn01() {

    call DisguiseTrap_Option()


    call BananaCheckOutfit()


    call DisguiseTrap_BurnDemo01()


    call DisguiseTrap_Conclude()

}

void DisguiseTrap_PickDemo01() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'FirstPlateauCave_Invade', 'Index': -1}) {
        goto Event243
    } else {

        call DisguiseTrap_DemoOption01({'MessageId1': 'EventFlowMsg/DisguiseAssassin:Talk_0012', 'MessageId2': 'EventFlowMsg/DisguiseAssassin:Talk_0014', 'MessageId3': 'EventFlowMsg/DisguiseAssassin:Talk_0016'})

    }
}

void C02_01() {

    fork {

        call Dm_SY_0004.Sound_Control()

        AssasinTextNPC[AssassinNearTrap].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'MessageId', 'IsAnonymous': True, 'IsNotOpenIfSkipedMostRecent': False})
        AssasinTextNPC[AssassinNearTrap].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/DisguiseAssassin:Talk_0050', 'IsAnonymous': True, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        if !Player.EventQueryCheckPlayerState({'State': 4}) {
            if Player.EventQueryCheckPlayerState({'State': 5}) {
                Player.EventPlayerPlayASForFlowchart({'ASCommand': 'LookAround', 'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'Actor1ActorName': 'Player', 'PosVector': [0.7200000286102295, 0.75, 1.309999942779541], 'AtVector': [0.05999999865889549, 1.2400000095367432, 0.18000000715255737], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 360, 'IsWaitEnd': False, 'Actor1ActorName': 'Player', 'PosVector': [0.6700000166893005, 0.75, 1.340000033378601], 'AtVector': [0.05999999865889549, 1.2400000095367432, 0.18000000715255737], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsLinearMove': True, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            }
        } else {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'Actor1ActorName': 'Player', 'PosVector': [0.9200000166893005, 0.03999999910593033, 1.2000000476837158], 'AtVector': [0.05999999865889549, 0.44999998807907104, 0.18000000715255737], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 360, 'IsWaitEnd': False, 'Actor1ActorName': 'Player', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsLinearMove': True, 'AtVector': [0.05999999865889549, 0.44999998807907104, 0.18000000715255737], 'PosVector': [0.9200000166893005, 0.03999999910593033, 1.2300000190734863], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        }
    }

}

void DisguiseTrap_DemoOption01() {

    call C01({'MessageId': 'MessageId1'})


    call C02_01({'MessageId': 'MessageId2'})

    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'MinusYiga_IsCompleted_Exp'}) {

        call KohgaRandomBanana()

    } else {

        call C03({'MessageId': 'MessageId3'})

    }
}

void DisguiseTrap_BurnDemo01() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'FirstPlateauCave_Invade', 'Index': -1}) {
        goto Event244
    } else {

        call DisguiseTrap_DemoOption({'MessageId1': 'EventFlowMsg/DisguiseAssassin:Talk_0004', 'MessageId2': 'EventFlowMsg/DisguiseAssassin:Talk_0050', 'MessageId3': 'EventFlowMsg/DisguiseAssassin:Talk_0006'})

    }
}

void BananaPickRandom() {
    switch GameSystemActor.EventQueryRandomChoice3() {
      case 0:

        call DisguiseTrap_DemoOption({'MessageId1': 'EventFlowMsg/DisguiseAssassin:Talk_0001', 'MessageId2': 'EventFlowMsg/DisguiseAssassin:Talk_0002', 'MessageId3': 'EventFlowMsg/DisguiseAssassin:Talk_0003'})

      case 1:

        call DisguiseTrap_DemoOption({'MessageId1': 'EventFlowMsg/DisguiseAssassin:Talk_0011', 'MessageId2': 'EventFlowMsg/DisguiseAssassin:Talk_0013', 'MessageId3': 'EventFlowMsg/DisguiseAssassin:Talk_0015'})

      case 2:

        call DisguiseTrap_DemoOption({'MessageId1': 'EventFlowMsg/DisguiseAssassin:Talk_0012', 'MessageId2': 'EventFlowMsg/DisguiseAssassin:Talk_0014', 'MessageId3': 'EventFlowMsg/DisguiseAssassin:Talk_0016'})

    }
}

void BananaBurnRandom() {
    switch GameSystemActor.EventQueryRandomChoice3() {
      case 0:

        call DisguiseTrap_DemoOption({'MessageId1': 'EventFlowMsg/DisguiseAssassin:Talk_0004', 'MessageId2': 'EventFlowMsg/DisguiseAssassin:Talk_0005', 'MessageId3': 'EventFlowMsg/DisguiseAssassin:Talk_0006'})

      case 1:

        call DisguiseTrap_DemoOption({'MessageId1': 'EventFlowMsg/DisguiseAssassin:Talk_0017', 'MessageId2': 'EventFlowMsg/DisguiseAssassin:Talk_0005', 'MessageId3': 'EventFlowMsg/DisguiseAssassin:Talk_0019'})

      case 2:

        call DisguiseTrap_DemoOption({'MessageId1': 'EventFlowMsg/DisguiseAssassin:Talk_0018', 'MessageId2': 'EventFlowMsg/DisguiseAssassin:Talk_0005', 'MessageId3': 'EventFlowMsg/DisguiseAssassin:Talk_0022'})

    }
}

void BananaMagicRandom() {
    switch GameSystemActor.EventQueryRandomChoice3() {
      case 0:

        call DisguiseTrap_DemoOption({'MessageId1': 'EventFlowMsg/DisguiseAssassin:Talk_0007', 'MessageId2': 'EventFlowMsg/DisguiseAssassin:Talk_0008', 'MessageId3': 'EventFlowMsg/DisguiseAssassin:Talk_0009'})

      case 1:

        call DisguiseTrap_DemoOption({'MessageId1': 'EventFlowMsg/DisguiseAssassin:Talk_0023', 'MessageId2': 'EventFlowMsg/DisguiseAssassin:Talk_0008', 'MessageId3': 'EventFlowMsg/DisguiseAssassin:Talk_0025'})

      case 2:

        call DisguiseTrap_DemoOption({'MessageId1': 'EventFlowMsg/DisguiseAssassin:Talk_0024', 'MessageId2': 'EventFlowMsg/DisguiseAssassin:Talk_0008', 'MessageId3': 'EventFlowMsg/DisguiseAssassin:Talk_0026'})

    }
}

void DisguiseTrap_MagicDemo01() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'FirstPlateauCave_Invade', 'Index': -1}) {
        goto Event245
    } else {

        call DisguiseTrap_DemoOption01({'MessageId1': 'EventFlowMsg/DisguiseAssassin:Talk_0001', 'MessageId2': 'EventFlowMsg/DisguiseAssassin:Talk_0002', 'MessageId3': 'EventFlowMsg/DisguiseAssassin:Talk_0003'})

    }
}

void C04_01() {

    fork {

        call C01_Cam()

    } {
        switch GameSystemActor.EventQueryRandomChoice3() {
          case 0:

            call DisguiseTree_BananaOption({'MessageId1': 'MessageId1', 'MessageId2': 'MessageId2', 'MessageId3': 'MessageId3'})

          case 1:

            call DisguiseTree_BananaOption({'MessageId1': 'MessageId4', 'MessageId2': 'MessageId5', 'MessageId3': 'MessageId6'})

          case 2:

            call DisguiseTree_BananaOption({'MessageId1': 'MessageId7', 'MessageId2': 'MessageId8', 'MessageId3': 'MessageId9'})

        }
    } {
        if !Player.EventQueryCheckPlayerState({'State': 4}) {
            if Player.EventQueryCheckPlayerState({'State': 5}) {
                Player.EventWait({'Frames': 1, 'IsWaitEnd': True})
                Player.EventPlayerPlayASForFlowchart({'ASCommand': 'LookAround', 'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            }
        } else {
            Player.EventDoNothing({'IsWaitEnd': False})
            Player.EventTriggerPlayerRequestLookAtTheFrontLock()
        }
    }

}

void DisguiseTrap_PickDemo02() {

    call BananaPickRandom02()

}

void DisguiseTrap_Magic02() {

    call DisguiseTrap_Option()


    call BananaCheckOutfit()

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'AssassinTrap_BananaMove', 'Index': -1}) {
        Event311:

        call DisguiseTrap_BurnDemo()

        Event62:

        call DisguiseTrap_Conclude()

    } else
    switch AssasinTextNPC[AssassinNearTrap].EventQueryOwningObjectPlayerInterference({'IsCheckBrokenInterferedOnly': False}) {
      case 0:
        goto Event311
      case [1, 2, 3, 4, 6]:

        call DisguiseTrap_MagicDemo()

        goto Event62
      case 5:

        call DisguiseTrap_PickDemo02()

        goto Event62
    }
}

void BananaPickRandom02() {
    switch GameSystemActor.EventQueryRandomChoice3() {
      case 0:

        call DisguiseTrap_DemoOption({'MessageId1': 'EventFlowMsg/DisguiseAssassin:Talk_0001', 'MessageId3': 'EventFlowMsg/DisguiseAssassin:Talk_0003', 'MessageId2': 'EventFlowMsg/DisguiseAssassin:Talk_0002_01'})

      case 1:

        call DisguiseTrap_DemoOption({'MessageId1': 'EventFlowMsg/DisguiseAssassin:Talk_0011', 'MessageId2': 'EventFlowMsg/DisguiseAssassin:Talk_0013', 'MessageId3': 'EventFlowMsg/DisguiseAssassin:Talk_0015'})

      case 2:

        call DisguiseTrap_DemoOption({'MessageId1': 'EventFlowMsg/DisguiseAssassin:Talk_0012', 'MessageId2': 'EventFlowMsg/DisguiseAssassin:Talk_0014', 'MessageId3': 'EventFlowMsg/DisguiseAssassin:Talk_0016'})

    }
}

void smoke_vibration() {
    GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Middle'})
}

void DisguiseTree_AttackL_LV2() {

    call DiguiseTree_AttackOption({'TargetActorInstanceName': 'Deadleaf002', 'TargetActorName': 'Obj_TreeDeadLeaf_Assassin_03'})

    Event184:

    call DisguiseTree_EnemyChange_LV2()

    goto Event181
}

void DisguiseTree_Attack_LV1() {

    call DiguiseTree_AttackOption({'TargetActorName': 'Obj_TreeDeadLeaf_Assassin_00', 'TargetActorInstanceName': 'Deadleaf001'})


    call DisguiseTree_EnemyChange_LV1()

    goto Event181
}

void DisguiseTree_AttackR_LV2() {

    call DiguiseTree_AttackOption({'TargetActorInstanceName': 'Deadleaf003', 'TargetActorName': 'Obj_TreeDeadLeaf_Assassin_01'})

    goto Event184
}

void DisguiseTree_EnemyChange_LV1() {

    call Sound_ForbidDialogDuck()

    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'AttackedDeadLeafAssassin', 'Index': -1, 'Value': True})
    Obj_TreeDeadLeaf_Assassin_00[Deadleaf001].EventTriggerChangeModelAlphaDrawTiming({'IsPreEffect': False, 'IsPostEffect': True})
    Obj_TreeDeadLeaf_Assassin_00[Deadleaf001].EventReplaceWithActorInHolder({'IsWaitEnd': True, 'Offset': [0.0, 0.0, 0.0], 'Key': 'Identity', 'DropTable': '', 'IsSwitch': True, 'IsNoHit': True})

    call smoke_vibration()

    GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Middle'})

    fork {
        Enemy_Assassin_Junior[Deadleaf001].EventPlayAS({'ASName': 'Encounter', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        EventSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})
    }

}

void DisguiseTree_EnemyChange_LV2() {

    call Sound_ForbidDialogDuck()

    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'AttackedDeadLeafAssassin', 'Index': -1, 'Value': True})

    fork {
        Obj_TreeDeadLeaf_Assassin_03[Deadleaf002].EventTriggerChangeModelAlphaDrawTiming({'IsPreEffect': False, 'IsPostEffect': True})
        Obj_TreeDeadLeaf_Assassin_03[Deadleaf002].EventReplaceWithActorInHolder({'IsWaitEnd': True, 'Offset': [0.0, 0.0, 0.0], 'Key': 'Identity', 'DropTable': '', 'IsSwitch': True, 'IsNoHit': True})
    } {
        Obj_TreeDeadLeaf_Assassin_01[Deadleaf003].EventTriggerChangeModelAlphaDrawTiming({'IsPreEffect': False, 'IsPostEffect': True})
        Obj_TreeDeadLeaf_Assassin_01[Deadleaf003].EventReplaceWithActorInHolder({'IsWaitEnd': True, 'Offset': [0.0, 0.0, 0.0], 'Key': 'Identity', 'DropTable': '', 'IsSwitch': True, 'IsNoHit': True})
    }


    call smoke_vibration()

    GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Middle'})

    fork {
        Enemy_Assassin_Junior[Deadleaf002].EventPlayAS({'ASName': 'Encounter', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        Enemy_Assassin_Middle[Deadleaf003].EventPlayAS({'ASName': 'Encounter', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        EventSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})
    }

}

void DisguiseTree_Conclude() {
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'AssassinTrap_MultiEventStopper'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [0.8999999761581421, 1.7999999523162842, -5.21999979019165], 'AtVector': [0.0, 1.7999999523162842, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 15, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventCamera.EventChangeTemporarilyToPlayerCamera({'EnableControle': True, 'IsWaitEnd': False})
    GameSystemActor.EventTriggerRequestAutoSave()
}

void DisguiseTree_Burn_LV1() {

    call DisguiseTree_BurnOption()


    call DisguiseTree_EnemyChange_LV1()

    goto Event100
}

void DisguiseTree_Burn_LV2() {

    call DisguiseTree_BurnOption()


    call DisguiseTree_EnemyChange_LV2()

    goto Event100
}

void DisguiseTree_Magic_LV1() {

    call DisguiseTree_MagicOption()


    call DisguiseTree_EnemyChange_LV1()

    goto Event292
}

void DisguiseTree_Magic_LV2() {

    call DisguiseTree_MagicOption()


    call DisguiseTree_EnemyChange_LV2()

    goto Event292
}

void DisguiseTree_BurnOption() {

    call Common.AirStartUP_Player()

    Player.EventTriggerParticipateEvent()
    AssasinTextNPC[AssassinNearTrap].EventTriggerParticipateEvent()
    if !Player.EventQueryCheckPlayerState({'State': 5}) {
        Event272:
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

        call BananaCheckOutfit()


        call DisguiseTree_BurnMagicDemo({'MessageId1': 'EventFlowMsg/DisguiseAssassin:Talk_0004', 'MessageId2': 'EventFlowMsg/DisguiseAssassin:Talk_0005', 'MessageId3': 'EventFlowMsg/DisguiseAssassin:Talk_0006', 'MessageId5': 'EventFlowMsg/DisguiseAssassin:Talk_0005', 'MessageId8': 'EventFlowMsg/DisguiseAssassin:Talk_0005', 'MessageId4': 'EventFlowMsg/DisguiseAssassin:Talk_0017', 'MessageId6': 'EventFlowMsg/DisguiseAssassin:Talk_0019', 'MessageId7': 'EventFlowMsg/DisguiseAssassin:Talk_0018', 'MessageId9': 'EventFlowMsg/DisguiseAssassin:Talk_0022'})

        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    } else {
        Player.EventPlayerUnequip({'IsWaitEnd': True})
        Player.EventPlayerWait({'IsWaitEnd': True})
        goto Event272
    }
}

void DisguiseTree_MagicOption() {

    call Common.AirStartUP_Player()

    Player.EventTriggerParticipateEvent()
    AssasinTextNPC[AssassinNearTrap].EventTriggerParticipateEvent()
    if !Player.EventQueryCheckPlayerState({'State': 5}) {
        Event271:
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

        call BananaCheckOutfit()

        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'DeadLeafAssassin_BananaMove'}) {
            Event281:

            call DisguiseTree_BurnMagicDemo({'MessageId1': 'EventFlowMsg/DisguiseAssassin:Talk_0004', 'MessageId2': 'EventFlowMsg/DisguiseAssassin:Talk_0005', 'MessageId3': 'EventFlowMsg/DisguiseAssassin:Talk_0006', 'MessageId5': 'EventFlowMsg/DisguiseAssassin:Talk_0005', 'MessageId8': 'EventFlowMsg/DisguiseAssassin:Talk_0005', 'MessageId4': 'EventFlowMsg/DisguiseAssassin:Talk_0017', 'MessageId6': 'EventFlowMsg/DisguiseAssassin:Talk_0019', 'MessageId7': 'EventFlowMsg/DisguiseAssassin:Talk_0018', 'MessageId9': 'EventFlowMsg/DisguiseAssassin:Talk_0022'})

            Event158:
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        } else
        switch AssasinTextNPC[AssassinNearTrap].EventQueryOwningObjectPlayerInterference({'IsCheckBrokenInterferedOnly': False}) {
          case 0:
            goto Event281
          case [1, 2, 3, 4, 6]:

            call DisguiseTree_BurnMagicDemo({'MessageId1': 'EventFlowMsg/DisguiseAssassin:Talk_0007', 'MessageId2': 'EventFlowMsg/DisguiseAssassin:Talk_0008', 'MessageId3': 'EventFlowMsg/DisguiseAssassin:Talk_0009', 'MessageId4': 'EventFlowMsg/DisguiseAssassin:Talk_0023', 'MessageId5': 'EventFlowMsg/DisguiseAssassin:Talk_0008', 'MessageId6': 'EventFlowMsg/DisguiseAssassin:Talk_0025', 'MessageId7': 'EventFlowMsg/DisguiseAssassin:Talk_0024', 'MessageId8': 'EventFlowMsg/DisguiseAssassin:Talk_0008', 'MessageId9': 'EventFlowMsg/DisguiseAssassin:Talk_0026'})

            goto Event158
          case 5:

            call DisguiseTree_BurnMagicDemo({'MessageId1': 'EventFlowMsg/DisguiseAssassin:Talk_0001', 'MessageId2': 'EventFlowMsg/DisguiseAssassin:Talk_0002', 'MessageId3': 'EventFlowMsg/DisguiseAssassin:Talk_0003', 'MessageId4': 'EventFlowMsg/DisguiseAssassin:Talk_0011', 'MessageId5': 'EventFlowMsg/DisguiseAssassin:Talk_0013', 'MessageId6': 'EventFlowMsg/DisguiseAssassin:Talk_0015', 'MessageId7': 'EventFlowMsg/DisguiseAssassin:Talk_0012', 'MessageId8': 'EventFlowMsg/DisguiseAssassin:Talk_0014', 'MessageId9': 'EventFlowMsg/DisguiseAssassin:Talk_0016'})

            goto Event158
        }
    } else {
        Player.EventPlayerUnequip({'IsWaitEnd': True})
        Player.EventPlayerWait({'IsWaitEnd': True})
        goto Event271
    }
}

void DisguiseTrap_Conclude() {
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'AssassinTrap_MultiEventStopper'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Middle'})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'AssassinTrap_EnemyTrigger', 'Value': True, 'Index': -1})
    GameSystemActor.EventTriggerRequestAutoSave()
}

void DisguiseTrap_Option() {

    call Common.AirStartUP_Player()

    if !Player.EventQueryCheckPlayerState({'State': 5}) {
        Event275:
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

        call InitTalk.InitTalkNoTurnOnEvent({'Self': ActorIdentifier(name="AssasinTextNPC", sub_name="AssassinNearTrap")})

    } else {
        Player.EventPlayerUnequip({'IsWaitEnd': True})
        Player.EventPlayerWait({'IsWaitEnd': True})
        goto Event275
    }
}

void DisguiseTree_AttackDemo() {

    call C04({'MessageId1': 'MessageId1'})


    call C05({'MessageId2': 'MessageId2', 'MessageId3': 'MessageId3', 'TargetActorName': 'TargetActorName', 'TargetActorInstanceName': 'TargetActorInstanceName'})

    goto Event79
}
