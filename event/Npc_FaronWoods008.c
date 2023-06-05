-------- EventFlow: Npc_FaronWoods008 --------

void Talk() {

    call Npc_FaronWoods009.Talk_FaronWoods008()

}

void Near() {

    call Npc_FaronWoods009.Near_FaronWoods008()

}

void NearActorsTalk() {
    Event4:

    call Npc_FaronWoods009.Straia_NearTalk()

}

void NearActorsNear() {
    Event2:

    call Npc_FaronWoods009.FaronWoods008_Near()

}

void NearActorsTalk_FirstMeetingTalk_False() {
    goto Event4
}

void NearActorsNear_FirstMeetingTalk_False() {
    goto Event2
}

void AlreadyTalked_FirstMeetingTalk_Talk() {
    goto Event4
}
