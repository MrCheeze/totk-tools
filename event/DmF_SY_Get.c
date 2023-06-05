-------- EventFlow: DmF_SY_Get --------

Actor: PouchContentGuestPerformer
entrypoint: None()
actions: ['EventTriggerPushPauseMask', 'EventTriggerAttentionOffClientAll', 'EventTriggerAddOwnToPouch', 'EventTriggerReserveNotPushToPouchProcess']
queries: ['EventQueryCheckOwnActorName', 'EventQueryIsAttachedAttachmentActor', 'EventQueryCanAddToPorchSelf']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 2, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerSendGetAnmMessageToPlalyer', 'EventTriggerSendAttachAnmMessageToPlalyer']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventChangeTemporarilyToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

void DmF_SY_Get() {
    EventCamera.EventChangeTemporarilyToPlayerCamera({'IsWaitEnd': False, 'EnableControle': True})
    if !PouchContentGuestPerformer.EventQueryIsAttachedAttachmentActor() {

        call GetPouchContent.OpenGetWindow({'IsSuccess': True})


        call GetPouchContent.WaitCloseGetWindow()

        GameSystemActor.EventTriggerSendAttachAnmMessageToPlalyer()
    } else {
        PouchContentGuestPerformer.EventTriggerPushPauseMask({'IsFrameEndCalc': True, 'IsPhysics': True, 'IsCloth': False})
        if !PouchContentGuestPerformer.EventQueryCanAddToPorchSelf() {
            PouchContentGuestPerformer.EventTriggerAttentionOffClientAll()

            call GetPouchContent.PreGetWindow()


            call GetPouchContent.OpenGetWindow({'IsSuccess': True})

            PouchContentGuestPerformer.EventTriggerAddOwnToPouch()
            Event21:

            call GetPouchContent.WaitCloseGetWindow()


            call GetPouchContent.PostGetWindow()


            call GetPouchContent.EquipWeapon()

            if PouchContentGuestPerformer.EventQueryCheckOwnActorName({'ActorName': 'Obj_HeartUtuwa_A_01'})
            && PouchContentGuestPerformer.EventQueryCheckOwnActorName({'ActorName': 'Obj_StaminaUtuwa_A_01'}) {
                GameSystemActor.EventTriggerSendGetAnmMessageToPlalyer()
            }
        } else {

            call GetPouchContent.PreGetWindow()


            call GetPouchContent.OpenGetWindow({'IsSuccess': False})

            PouchContentGuestPerformer.EventTriggerReserveNotPushToPouchProcess()
            goto Event21
        }
    }
}
