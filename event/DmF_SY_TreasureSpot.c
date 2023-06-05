-------- EventFlow: DmF_SY_TreasureSpot --------

Actor: EventCamera
entrypoint: None()
actions: ['EventChangeTemporarilyToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: ['EventTriggerAddOrRemovePouchContent']
queries: ['EventQueryCanAddToPorch']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SkyObj_ZonauRobot_Background_EventStarter
entrypoint: None()
actions: ['EventTriggerSkyObjZonauRobotBackgroundGot']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

void DmF_SY_TreasureSpot() {
    EventCamera.EventChangeTemporarilyToPlayerCamera({'IsWaitEnd': False, 'EnableControle': True})

    call GetPouchContent.PreGetWindowByActorName({'ActorName': 'ActorName'})

    if !PouchSystemActor.EventQueryCanAddToPorch({'Num': 1, 'Actor': 'ActorName'}) {
        PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Num': 1, 'IsEquipDIrect': False, 'AttachmentActor': '', 'EffectType': 0, 'EffectValue': -1, 'Actor': 'ActorName', 'IsSetOnlyEquipIndex': False})

        call GetPouchContent.OpenGetWindowByActorName({'ActorName': 'ActorName', 'IsEnableOpenPouch': True, 'IsSuccess': True})


        call GetPouchContent.WaitCloseGetWindow()


        call GetPouchContent.PostGetWindowByActorName({'ActorName': 'ActorName'})

        SkyObj_ZonauRobot_Background_EventStarter.EventTriggerSkyObjZonauRobotBackgroundGot()
    } else {

        call GetPouchContent.OpenGetWindowByActorName({'ActorName': 'ActorName', 'IsEnableOpenPouch': True, 'IsSuccess': False})


        call GetPouchContent.WaitCloseGetWindow()


        call GetPouchContent.PostGetWindowByActorName({'ActorName': 'ActorName'})

    }
}
