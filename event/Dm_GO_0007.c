-------- EventFlow: Dm_GO_0007 --------

Actor: Player
entrypoint: None()
actions: ['EventPlayerWarpToTargetPosAndRot', 'EventPlayerPlayASForFlowchart', 'EventTriggerPlayerLookAtObject', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventTriggerPlayerGetOff', 'EventTriggerEquipmentUserRequestChangeState']
queries: ['EventQueryPlayerCheckRideHorse', 'EventQueryIsOwnedHorseNear']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'UseEventModelAnime': '', 'UseEventAS': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Npc_Goron033[NorthMine_Iffuru]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventTalk', 'EventTriggerChangeEmotion', 'EventPlayAS', 'EventTriggerLookAtObject']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Goron011[NorthMine_Tokachin]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventTalk', 'EventPlayAS', 'EventTriggerChangeEmotion', 'EventTriggerLookAtObject']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendKeepStateMessageToPlayerCamera', 'EventMoveCameraAnimationInstructionsForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 3, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Zelda_Black_Event[NorthMine_Zelda]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventPlayAS']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_GO_0007/Dm_GO_0007_Npc_Zelda_AncientHyrule/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_GO_0007_Npc_Zelda_AncientHyrule.root.as', 'EventMemberCreateMethod': 0, 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Npc_Goron_Yunbo_Sage_Puppet
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventPlayAS', 'EventTriggerRequestLookAtTheFront', 'EventTalk', 'EventNPCTurnToTarget', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey', 'EventGoOffstageForUser', 'EventTriggerLookAtObject', 'EventPlayASWithClothWarp']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'UseEventModelAnime': 'Work/Model/Event/Dm_GO_0007/Dm_GO_0007_Npc_Goron_HeroDescendants_Sage/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_GO_0007_Npc_Goron_HeroDescendants_Sage.root.as', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm', 'EventTriggerStartBgmSimple', 'EventTriggerSoundControlBGMwithInput', 'EventSoundStartSound']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Dm_Obj_MeatRock_Miasma_A_02[MeatRock_01]
entrypoint: None()
actions: ['EventPlayAS', 'EventGoOffstageForUser', 'EventWarpToTargetPosAndRot', 'EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsGrounding': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_GO_0007/Dm_GO_0007_Obj_MeatRock_Miasma_A/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_GO_0007_Obj_MeatRock_Miasma_A_02.root.as', 'Position': [1646.7099609375, 510.7861022949219, -2888.762939453125], 'IsWorld': True, 'IsBindNearestActor': False}

Actor: Dm_Obj_MeatRock_Miasma_A_02[MeatRock_02]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventGoOffstageForUser', 'EventPlayAS', 'EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsGrounding': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_GO_0007/Dm_GO_0007_Obj_MeatRock_Miasma_A/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_GO_0007_Obj_MeatRock_Miasma_A_02.root.as', 'IsWorld': True, 'Position': [1646.7099609375, 510.7861022949219, -2888.762939453125], 'IsBindNearestActor': False}

Actor: Dm_Obj_MeatRock_Miasma_A_02[MeatRock_03]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventGoOffstageForUser', 'EventPlayAS', 'EventTriggerEmitXLink']
queries: []
params: {'UseEventModelAnime': 'Work/Model/Event/Dm_GO_0007/Dm_GO_0007_Obj_MeatRock_Miasma_A/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_GO_0007_Obj_MeatRock_Miasma_A_02.root.as', 'EventMemberCreateMethod': 1, 'IsGrounding': False, 'IsWorld': True, 'Position': [1646.7099609375, 510.7861022949219, -2888.762939453125], 'IsBindNearestActor': False}

Actor: Dm_Obj_MeatRock_Miasma_A_02[MeatRock_04]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventPlayAS', 'EventGoOffstageForUser']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsGrounding': False, 'Position': [0.0, 0.0, 0.0], 'IsWorld': True, 'Rotation': [1646.7099609375, 510.7861022949219, -2888.762939453125], 'UseEventModelAnime': 'Work/Model/Event/Dm_GO_0007/Dm_GO_0007_Obj_MeatRock_Miasma_A/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_GO_0007_Obj_MeatRock_Miasma_A_02.root.as', 'IsBindNearestActor': False}

Actor: Dm_Obj_MeatRock_Miasma_A_02[MeatRock_05]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventPlayAS', 'EventGoOffstageForUser']
queries: []
params: {'EventMemberCreateMethod': 1, 'UseEventModelAnime': 'Work/Model/Event/Dm_GO_0007/Dm_GO_0007_Obj_MeatRock_Miasma_A/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_GO_0007_Obj_MeatRock_Miasma_A_02.root.as', 'IsGrounding': False, 'IsWorld': True, 'Position': [1646.7099609375, 510.7861022949219, -2888.762939453125], 'IsBindNearestActor': False}

Actor: Dm_Obj_MeatRock_Miasma_A_02[MeatRock_06]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventPlayAS', 'EventGoOffstageForUser']
queries: []
params: {'EventMemberCreateMethod': 1, 'UseEventModelAnime': 'Work/Model/Event/Dm_GO_0007/Dm_GO_0007_Obj_MeatRock_Miasma_A/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_GO_0007_Obj_MeatRock_Miasma_A_02.root.as', 'IsGrounding': False, 'IsWorld': True, 'Position': [1646.7099609375, 510.7861022949219, -2888.762939453125], 'IsBindNearestActor': False}

Actor: Dm_Obj_MeatRock_Miasma_A_02[MeatRock_07]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventPlayAS', 'EventGoOffstageForUser']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsGrounding': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_GO_0007/Dm_GO_0007_Obj_MeatRock_Miasma_A/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_GO_0007_Obj_MeatRock_Miasma_A_02.root.as', 'IsWorld': True, 'Position': [1646.7099609375, 510.7861022949219, -2888.762939453125], 'IsBindNearestActor': False}

Actor: Dm_Obj_MeatRock_Miasma_A_02[MeatRock_08]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventPlayAS', 'EventGoOffstageForUser']
queries: []
params: {'EventMemberCreateMethod': 1, 'UseEventModelAnime': 'Work/Model/Event/Dm_GO_0007/Dm_GO_0007_Obj_MeatRock_Miasma_A/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_GO_0007_Obj_MeatRock_Miasma_A_02.root.as', 'IsGrounding': False, 'Position': [0.0, 0.0, 0.0], 'Rotation': [1646.7099609375, 510.7861022949219, -2888.762939453125], 'IsWorld': True, 'IsBindNearestActor': False}

Actor: Dm_Obj_MeatRock_Miasma_A_02[MeatRock_09]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventPlayAS', 'EventGoOffstageForUser']
queries: []
params: {'IsGrounding': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_GO_0007/Dm_GO_0007_Obj_MeatRock_Miasma_A/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_GO_0007_Obj_MeatRock_Miasma_A_02.root.as', 'EventMemberCreateMethod': 1, 'IsWorld': True, 'Position': [1646.7099609375, 510.7861022949219, -2888.762939453125], 'IsBindNearestActor': False}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventEffectAddELinkHiddenSetting']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Dm_Obj_MeatRock_Miasma_A_02[MeatRock_10]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventPlayAS', 'EventGoOffstageForUser']
queries: []
params: {'IsGrounding': False, 'EventMemberCreateMethod': 1, 'UseEventModelAnime': 'Work/Model/Event/Dm_GO_0007/Dm_GO_0007_Obj_MeatRock_Miasma_A/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_GO_0007_Obj_MeatRock_Miasma_A_02.root.as', 'IsWorld': True, 'Position': [1654.81005859375, 510.8399963378906, -2897.800048828125], 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventEventFadeIn', 'EventTriggerControllerRumble', 'EventWarpSageFollowersFormationPos', 'EventClearActorsAroundAnchor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor[01]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor[01]
entrypoint: None()
actions: ['EventWait', 'EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor[02]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Dm_Locator
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsBindNearestActor': False}

Actor: Dm_Locator[01]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventTriggerEmitXLink']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsBindNearestActor': False}

Actor: LastRiddenAnimal_ForEvent
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventGoOffstageForUser']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 3, 'IsBindNearestActor': False}

Actor: Sage_Soul_Zonau
entrypoint: None()
actions: ['EventGoOffstageForUser']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'TextureReplaceType': 0, 'EventMemberCreateMethod': 3, 'IsBindNearestActor': False}

void EntryPoint0() {
    if !Player.EventQueryPlayerCheckRideHorse({'ActorFileName': '', 'Type': 0, 'IsRidingAny': True}) {
        Player.EventTriggerPlayerGetOff()
        Player.EventTriggerEquipmentUserRequestChangeState({'EquipmentState': 2, 'DynamicEquipmentSlot': 0})
        Player.EventTriggerEquipmentUserRequestChangeState({'EquipmentState': 2, 'DynamicEquipmentSlot': 3})
        Player.EventTriggerEquipmentUserRequestChangeState({'EquipmentState': 2, 'DynamicEquipmentSlot': 4})
        Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 162.0, 'Position': [1634.3900146484375, 511.1133117675781, -2882.45703125], 'UseDemoWait': True})
        LastRiddenAnimal_ForEvent.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [1640.8599853515625, 520.239990234375, -2825.2080078125]})

        call InitDemo()

        GameSystemActor.EventClearActorsAroundAnchor({'AnchorActorName': 'DestinationAnchor', 'AnchorInstanceName': 'NorthMine_Player_BattlePos', 'IsWaitEnd': True, 'IsDeleteActor': True, 'IsSweepOut': False, 'IsExcludePlacedAroundAnchor': False, 'Height': 20.0, 'Radius': 20.0})
        Event102:
        SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False})

        call C01()


        call C02()


        call C03()


        call C04()


        call C05()


        call C06()


        call C07()


        call C08()


        call C09()

    } else {

        call Common.InitPlayStateTrigger({'IsUnequip': True, 'IsRidableGetOff': True})

        Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 162.0, 'Position': [1634.3900146484375, 511.1133117675781, -2882.45703125], 'UseDemoWait': True})
        if !Player.EventQueryIsOwnedHorseNear({'Distance': 35.0}) {
            LastRiddenAnimal_ForEvent.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [1640.8599853515625, 520.239990234375, -2825.2080078125]})

            call InitDemo()

            Event18:
            GameSystemActor.EventClearActorsAroundAnchor({'AnchorActorName': 'DestinationAnchor', 'AnchorInstanceName': 'NorthMine_Player_BattlePos', 'IsWaitEnd': True, 'IsDeleteActor': True, 'IsSweepOut': False, 'IsExcludePlacedAroundAnchor': False, 'Height': 20.0, 'Radius': 20.0})
            goto Event102
        } else {

            call InitDemo()

            goto Event18
        }
    }
}

void C01() {

    fork {
        GameSystemActor.EventEventFadeIn({'Color': 0, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 1})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'TargetActorName': 'Npc_Goron_Yunbo_Sage_Puppet', 'CameraName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': True, 'IsWaitEnd': True, 'SceneName': 'C01-0', 'CalcUpInInterpolate': False})
    } {
        Npc_Goron_Yunbo_Sage_Puppet.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [1642.6510009765625, 510.2933044433594, -2908.39794921875], 'YAngle': -116.0})
        Npc_Goron_Yunbo_Sage_Puppet.EventTriggerLookAtObject({'Target': 3, 'ActorName': 'Npc_Zelda_Black_Event', 'InstanceName': 'NorthMine_Zelda', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'PosOffset': [0.0, -2.0, 1.0], 'ResetArriveTransformFixed': False})
        Npc_Goron_Yunbo_Sage_Puppet.EventPlayAS({'IsWaitEnd': False, 'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})
        EventSystemActor[01].EventWait({'IsWaitEnd': True, 'Frames': 60})
        Npc_Goron_Yunbo_Sage_Puppet.EventPlayAS({'ASName': 'C02_nod', 'Partial': '', 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'IsAllSlot': True, 'IsWaitEnd': True})
        Npc_Goron_Yunbo_Sage_Puppet.EventPlayAS({'IsWaitEnd': False, 'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})
        EventSystemActor[01].EventWait({'IsWaitEnd': True, 'Frames': 20})
    } {
        Npc_Zelda_Black_Event[NorthMine_Zelda].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 70.0, 'Position': [1639.27099609375, 510.3346862792969, -2910.35009765625]})
        Npc_Zelda_Black_Event[NorthMine_Zelda].EventPlayAS({'IsWaitEnd': False, 'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        Npc_Zelda_Black_Event[NorthMine_Zelda].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'ASName': 'C01-Npc_Zelda_Black_Talk'})
    }

    EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'TargetActorName': 'Npc_Goron_Yunbo_Sage_Puppet', 'CameraName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'IsIgnoreRootRot': False, 'IsWaitEnd': False, 'IsReferenceRootOnce': True, 'SceneName': 'C01-1', 'CalcUpInInterpolate': False})
    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})

    fork {
        Npc_Goron_Yunbo_Sage_Puppet.EventNPCTurnToTarget({'FaceControlType': 1, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'OffsetBase': 0, 'Target': 0, 'WorldPos': [1654.06005859375, 510.5437927246094, -2913.653076171875], 'Direction': 0.0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_Goron_Yunbo_Sage_Puppet.EventPlayAS({'Partial': '', 'ForceFadeInFrame': -1.0, 'ASName': 'C01_Rolling', 'IsAnimeDriven': True, 'IsWaitEnd': False, 'IsAllSlot': False})
        EventSystemActor[01].EventWait({'Frames': 20, 'IsWaitEnd': True})
        Npc_Goron_Yunbo_Sage_Puppet.EventTriggerEmitXLink({'ELinkKey': 'Dm_GO_0007_SageSkill_Rolling', 'SLinkKey': ''})
        EventSystemActor[01].EventWait({'IsWaitEnd': True, 'Frames': 28})
        Npc_Goron_Yunbo_Sage_Puppet.EventTriggerXLinkFadeByKey({'ELinkKey': 'Dm_GO_0007_SageSkill_Rolling', 'SLinkKey': '', 'IsKill': False})
        EventSystemActor[01].EventWait({'IsWaitEnd': True, 'Frames': 1})
        Npc_Goron_Yunbo_Sage_Puppet.EventTriggerEmitXLink({'ELinkKey': 'Dm_GO_0007_SageSkill', 'SLinkKey': ''})
        EventSystemActor[01].EventWait({'IsWaitEnd': True, 'Frames': 13})
        Npc_Goron_Yunbo_Sage_Puppet.EventTriggerXLinkFadeByKey({'ELinkKey': 'Dm_GO_0007_SageSkill', 'SLinkKey': '', 'IsKill': False})
        Dm_Locator.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [1655.4139404296875, 511.1354064941406, -2915.509033203125]})
        Dm_Locator.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_GO_0007_RockBroken_Miasma_Break'})
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Dm_GO_0007_RockBroken_Miasma_Break', 'IsIgnoreDucking': False})
        Npc_Goron_Yunbo_Sage_Puppet.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'Dm_Explosion'})
        Npc_Goron_Yunbo_Sage_Puppet.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Large', 'Length': 0.0})
        EventSystemActor[01].EventWait({'IsWaitEnd': True, 'Frames': 20})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        Npc_Zelda_Black_Event[NorthMine_Zelda].EventPlayAS({'ASName': 'C01-Npc_Zelda_Black_Turn', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True, 'IsWaitEnd': False})
    }

}

void C02() {
    Dm_Locator[01].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -30.0, 'Position': [1645.467041015625, 510.5849914550781, -2901.947998046875]})

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'RootType': 3, 'TargetActorName': 'Dm_Locator', 'IsLoop': False, 'SceneName': 'C02-0', 'TargetActorInstanceName': '01', 'CalcUpInInterpolate': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
    } {
        Npc_Goron_Yunbo_Sage_Puppet.EventWarpToTargetPosAndRot({'Position': [1642.676025390625, 510.2804870605469, -2908.406005859375], 'IsWaitEnd': True, 'YAngle': -176.0})
        Npc_Goron_Yunbo_Sage_Puppet.EventTriggerRequestLookAtTheFront()
        EventSystemActor[01].EventWait({'Frames': 1, 'IsWaitEnd': True})
        Npc_Goron_Yunbo_Sage_Puppet.EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'IsAllSlot': True})
    } {
        Npc_Zelda_Black_Event[NorthMine_Zelda].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [1639.27001953125, 510.34619140625, -2906.860107421875], 'YAngle': 110.0})
        Npc_Zelda_Black_Event[NorthMine_Zelda].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        Dm_Obj_MeatRock_Miasma_A_02[MeatRock_01].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'IsAnimeDriven': False, 'ASName': 'C01-MeatRock_Fall_01'})
        GameSystemActor[01].EventWait({'IsWaitEnd': True, 'Frames': 24})
        Dm_Obj_MeatRock_Miasma_A_02[MeatRock_01].EventTriggerEmitXLink({'ELinkKey': 'Dm_GO_0007_Obj_MeatRock_Miasma_Land_B', 'SLinkKey': ''})
        GameSystemActor[01].EventTriggerControllerRumble({'RumbleCall': 'Middle', 'Length': 1.0})
    } {
        Dm_Obj_MeatRock_Miasma_A_02[MeatRock_02].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'C01-MeatRock_Fall_02'})
        GameSystemActor[02].EventWait({'IsWaitEnd': True, 'Frames': 20})
        Dm_Obj_MeatRock_Miasma_A_02[MeatRock_02].EventTriggerEmitXLink({'ELinkKey': 'Dm_GO_0007_Obj_MeatRock_Miasma_Land_A', 'SLinkKey': ''})
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Dm_GO_0007_MeetRock_Land', 'IsIgnoreDucking': False})
    } {
        GameSystemActor.EventWait({'Frames': 10, 'IsWaitEnd': True})
        Dm_Obj_MeatRock_Miasma_A_02[MeatRock_03].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'C01-MeatRock_Fall_02', 'IsAnimeDriven': False, 'IsWaitEnd': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        Dm_Obj_MeatRock_Miasma_A_02[MeatRock_03].EventTriggerEmitXLink({'ELinkKey': 'Dm_GO_0007_Obj_MeatRock_Miasma_Land_C', 'SLinkKey': ''})
    } {
        Dm_Locator.EventTriggerXLinkFadeByKey({'SLinkKey': '', 'IsKill': False, 'ELinkKey': 'Dm_GO_0007_RockBroken_Miasma_Break'})
    } {
        Dm_Locator[01].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_GO_0007_RockBroken_Miasma_Pebbles'})
    }

    Dm_Obj_MeatRock_Miasma_A_02[MeatRock_07].EventGoOffstageForUser({'IsSleepXLink': True, 'IsWaitEnd': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
}

void InitDemo() {
    EventEffectEmitter.EventEffectAddELinkHiddenSetting({'KeyName': 'ReactionEffect', 'ActorName': 'ReactionField'})

    fork {
        Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 162.0, 'Position': [1634.3900146484375, 511.1133117675781, -2882.45703125], 'UseDemoWait': True})
        Player.EventTriggerPlayerLookAtObject({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Npc_Goron_Yunbo_Sage_Puppet', 'InstanceName': '', 'TurnFaceControlType': 1})
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'LockOnWait', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        Npc_Goron033[NorthMine_Iffuru].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 176.0, 'Position': [1636.2769775390625, 513.4896240234375, -2877.26806640625]})
        Npc_Goron033[NorthMine_Iffuru].EventTriggerChangeEmotion({'EmotionType': 3, 'IsActFaceOnly': True})
        Npc_Goron033[NorthMine_Iffuru].EventTriggerLookAtObject({'ActorName': 'Npc_Goron_Yunbo_Sage_Puppet', 'Target': 3, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'PosOffset': [-5.0, 0.0, 0.0], 'ResetArriveTransformFixed': False})
        Npc_Goron033[NorthMine_Iffuru].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        Npc_Goron011[NorthMine_Tokachin].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [1634.5589599609375, 513.003173828125, -2877.99609375], 'YAngle': 162.0})
        Npc_Goron011[NorthMine_Tokachin].EventTriggerChangeEmotion({'IsActFaceOnly': True, 'EmotionType': 3})
        Npc_Goron011[NorthMine_Tokachin].EventTriggerLookAtObject({'Target': 3, 'ActorName': 'Npc_Goron_Yunbo_Sage_Puppet', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        Npc_Goron011[NorthMine_Tokachin].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Wait'})
        Sage_Soul_Zonau.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        LastRiddenAnimal_ForEvent.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
    } {
        Dm_Obj_MeatRock_Miasma_A_02[MeatRock_01].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 38.0, 'Position': [1642.9759521484375, 510.49688720703125, -2902.5810546875]})
        Dm_Obj_MeatRock_Miasma_A_02[MeatRock_01].EventGoOffstageForUser({'IsSleepXLink': True, 'IsWaitEnd': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        Dm_Obj_MeatRock_Miasma_A_02[MeatRock_02].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -34.0, 'Position': [1645.824951171875, 510.56561279296875, -2902.76806640625]})
        Dm_Obj_MeatRock_Miasma_A_02[MeatRock_02].EventGoOffstageForUser({'IsSleepXLink': True, 'IsWaitEnd': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        Dm_Obj_MeatRock_Miasma_A_02[MeatRock_03].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [1644.593994140625, 510.4961853027344, -2905.2509765625]})
        Dm_Obj_MeatRock_Miasma_A_02[MeatRock_03].EventGoOffstageForUser({'IsSleepXLink': True, 'IsWaitEnd': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Dm_Obj_MeatRock_Miasma_A_02[MeatRock_04].EventWarpToTargetPosAndRot({'YAngle': -120.0, 'IsWaitEnd': True, 'Position': [1650.5760498046875, 510.7466125488281, -2908.092041015625]})
        Dm_Obj_MeatRock_Miasma_A_02[MeatRock_04].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C01-MeatRock_Place', 'IsWaitEnd': False})
    } {
        Dm_Obj_MeatRock_Miasma_A_02[MeatRock_05].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 72.0, 'Position': [1648.1669921875, 510.62750244140625, -2916.7099609375]})
        Dm_Obj_MeatRock_Miasma_A_02[MeatRock_05].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C01-MeatRock_Place', 'IsWaitEnd': False})
    } {
        Dm_Obj_MeatRock_Miasma_A_02[MeatRock_06].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -8.0, 'Position': [1643.9549560546875, 510.5038146972656, -2915.867919921875]})
        Dm_Obj_MeatRock_Miasma_A_02[MeatRock_06].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C01-MeatRock_Place', 'IsWaitEnd': False})
    } {
        Dm_Obj_MeatRock_Miasma_A_02[MeatRock_07].EventWarpToTargetPosAndRot({'YAngle': 10.0, 'IsWaitEnd': True, 'Position': [1639.9720458984375, 510.5257873535156, -2907.346923828125]})
        Dm_Obj_MeatRock_Miasma_A_02[MeatRock_07].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C01-MeatRock_Place', 'IsWaitEnd': False})
    } {
        Dm_Obj_MeatRock_Miasma_A_02[MeatRock_08].EventWarpToTargetPosAndRot({'YAngle': 0.0, 'IsWaitEnd': True, 'Position': [1648.0830078125, 510.6415100097656, -2906.739013671875]})
        Dm_Obj_MeatRock_Miasma_A_02[MeatRock_08].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C01-MeatRock_Place', 'IsWaitEnd': False})
    } {
        Dm_Obj_MeatRock_Miasma_A_02[MeatRock_09].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [1642.635009765625, 510.4584045410156, -2912.35302734375]})
        Dm_Obj_MeatRock_Miasma_A_02[MeatRock_09].EventPlayAS({'ASName': 'C01-MeatRock_Place', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        Dm_Obj_MeatRock_Miasma_A_02[MeatRock_10].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [1645.635009765625, 510.5640869140625, -2914.552978515625]})
        Dm_Obj_MeatRock_Miasma_A_02[MeatRock_10].EventPlayAS({'ASName': 'C01-MeatRock_Place', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    }

}

void C03() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'PosVector': [1638.77001953125, 512.2100219726562, -2903.419921875], 'AtVector': [1642.7099609375, 512.530029296875, -2908.360107421875], 'TargetFovy': 26.0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'PosVector': [1638.8800048828125, 512.2100219726562, -2903.5400390625], 'AtVector': [1642.8199462890625, 512.530029296875, -2908.489990234375], 'TargetFovy': 24.0, 'MoveTime': 100, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_Goron_Yunbo_Sage_Puppet.EventPlayASWithClothWarp({'ASName': 'C02_notice', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': True, 'IsAnimeDriven': True, 'ForceFadeInFrame': 0.0, 'ClothWarpMode': 3})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 115})
    }

}

void C04() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'PosVector': [1.0, 1.6699999570846558, 5.010000228881836], 'AtVector': [0.8700000047683716, 1.6699999570846558, 4.619999885559082], 'TargetFovy': 39.70000076293945, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_Goron033[NorthMine_Iffuru].EventTalk({'MessageId': 'EventFlowMsg/Dm_GO_0007:Dm_GO_0007_Text_000_b', 'ASName': 'Talk', 'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        Npc_Goron_Yunbo_Sage_Puppet.EventWarpToTargetPosAndRot({'Position': [1642.676025390625, 510.2804870605469, -2908.406005859375], 'IsWaitEnd': True, 'YAngle': -24.0})
        Npc_Goron_Yunbo_Sage_Puppet.EventTriggerRequestLookAtTheFront()
        Npc_Goron_Yunbo_Sage_Puppet.EventPlayAS({'IsWaitEnd': False, 'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})
    }

}

void C05() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Npc_Goron011', 'Actor1InstanceName': 'NorthMine_Tokachin', 'PosVector': [0.800000011920929, 1.0700000524520874, 5.630000114440918], 'AtVector': [-1.0800000429153442, 0.7400000095367432, -0.41999998688697815], 'TargetFovy': 34.29999923706055, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_Goron011[NorthMine_Tokachin].EventTalk({'MessageId': 'EventFlowMsg/Dm_GO_0007:Dm_GO_0007_Text_001_b', 'ASName': 'Talk', 'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
    }

}

void C06() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Npc_Goron_Yunbo_Sage_Puppet', 'PosVector': [-0.6100000143051147, 1.75, 4.639999866485596], 'AtVector': [0.3700000047683716, 2.4600000381469727, -1.5], 'TargetFovy': 34.400001525878906, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Npc_Goron_Yunbo_Sage_Puppet', 'PosVector': [-0.550000011920929, 1.75, 4.239999771118164], 'AtVector': [0.4000000059604645, 2.4600000381469727, -1.899999976158142], 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': False, 'MoveTime': 100, 'TargetFovy': 32.20000076293945, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        Npc_Goron_Yunbo_Sage_Puppet.EventTalk({'MessageId': 'EventFlowMsg/Dm_GO_0007:Dm_GO_0007_Text_002_b', 'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': True, 'ASName': 'C04_awake', 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
    }

    Npc_Goron_Yunbo_Sage_Puppet.EventPlayAS({'ASName': 'C04_shoulders', 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsAllSlot': True, 'IsWaitEnd': False})
    EventSystemActor[01].EventWait({'IsWaitEnd': True, 'Frames': 30})
}

void C07() {
    SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_Dm_GO_0007', 'CommandLife': 2, 'IsReleaseDucking': False})

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C05-0', 'RootType': 3, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'TargetActorName': 'Npc_Goron_Yunbo_Sage_Puppet', 'TargetActorInstanceName': '', 'IsWaitEnd': False, 'IsLoop': False, 'CalcUpInInterpolate': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 160})
    } {
        Npc_Goron_Yunbo_Sage_Puppet.EventTriggerRequestLookAtTheFront()
        Npc_Goron_Yunbo_Sage_Puppet.EventPlayAS({'ASName': 'C05_spell', 'Partial': '', 'IsAnimeDriven': False, 'IsAllSlot': True, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False})
        EventSystemActor[01].EventWait({'IsWaitEnd': True, 'Frames': 60})
        Npc_Goron_Yunbo_Sage_Puppet.EventPlayAS({'Partial': 'Material', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'BrainWashing_Blinking'})
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Dm_GO_0007_Cursed', 'IsIgnoreDucking': False})
        EventSystemActor[01].EventWait({'IsWaitEnd': True, 'Frames': 55})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Middle', 'Length': 5.0})
    } {
        Npc_Zelda_Black_Event[NorthMine_Zelda].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'C03-Npc_Zelda_Black_Spell', 'ForceFadeInFrame': -1.0})
    }

}

void C08() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'SceneName': 'C06-0', 'TargetActorName': 'Npc_Goron_Yunbo_Sage_Puppet', 'TargetActorInstanceName': '', 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        Npc_Goron_Yunbo_Sage_Puppet.EventWarpToTargetPosAndRot({'YAngle': 10.0, 'Position': [1628.3189697265625, 510.54290771484375, -2904.50390625], 'IsWaitEnd': True})
        Npc_Goron_Yunbo_Sage_Puppet.EventPlayAS({'ASName': 'C06_brainwashing', 'Partial': '', 'IsAnimeDriven': False, 'IsAllSlot': True, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 115})
        Npc_Goron_Yunbo_Sage_Puppet.EventPlayAS({'Partial': 'Material', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'BrainWashing_Off'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 80})
        Npc_Goron_Yunbo_Sage_Puppet.EventPlayAS({'ASName': 'BrainWashing_On_Start', 'Partial': 'Material', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Dm_GO_0007_Mask_TurnRed', 'IsIgnoreDucking': False})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Doon'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        Npc_Goron_Yunbo_Sage_Puppet.EventPlayAS({'Partial': 'Material', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'BrainWashing_EyeGlow_Loop'})
    }

    Npc_Goron_Yunbo_Sage_Puppet.EventTalk({'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': 'C06_Talk', 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_GO_0007:Dm_GO_0007_Text_004_b', 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
    Player.EventPlayerWarpToTargetPosAndRot({'YAngle': -167.5500030517578, 'IsWaitEnd': True, 'Position': [1632.0030517578125, 510.5150146484375, -2887.054931640625], 'UseDemoWait': False})
    Npc_Zelda_Black_Event[NorthMine_Zelda].EventWarpToTargetPosAndRot({'YAngle': -90.0, 'Position': [1657.345947265625, 510.7112121582031, -2906.570068359375], 'IsWaitEnd': True})
    Dm_Obj_MeatRock_Miasma_A_02[MeatRock_01].EventGoOffstageForUser({'IsSleepXLink': True, 'IsWaitEnd': False, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    Dm_Obj_MeatRock_Miasma_A_02[MeatRock_02].EventGoOffstageForUser({'IsSleepXLink': True, 'IsWaitEnd': False, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    Dm_Obj_MeatRock_Miasma_A_02[MeatRock_03].EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    Dm_Obj_MeatRock_Miasma_A_02[MeatRock_04].EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    Dm_Obj_MeatRock_Miasma_A_02[MeatRock_05].EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    Dm_Obj_MeatRock_Miasma_A_02[MeatRock_06].EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    Dm_Obj_MeatRock_Miasma_A_02[MeatRock_07].EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    Dm_Obj_MeatRock_Miasma_A_02[MeatRock_08].EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    Dm_Obj_MeatRock_Miasma_A_02[MeatRock_09].EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    Dm_Obj_MeatRock_Miasma_A_02[MeatRock_10].EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
}

void C09() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'PosVector': [-0.05999999865889549, 2.6700000762939453, 5.619999885559082], 'AtVector': [-0.07999999821186066, 2.4200000762939453, 7.909999847412109], 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'TargetFovy': 24.0, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'MoveTime': 36, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'Actor1ActorName': 'Player', 'PosVector': [0.03999999910593033, 3.0899999141693115, -5.380000114440918], 'AtVector': [0.0, 1.7999999523162842, -0.25], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventSystemActor.EventWait({'Frames': 4, 'IsWaitEnd': True})
    } {
        Player.EventTriggerPlayerRequestLookAtTheFrontLock()
    }

    GameSystemActor.EventWarpSageFollowersFormationPos({'IsWaitEnd': True, 'isOverrideParam': False, 'Dist': 5.0, 'Space': 4.0})
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera()
    SoundSystemActor.EventTriggerSoundControlBGMwithInput({'BgmName': 'BGM_YunboPuppet', 'ControlType2': 0})
}
