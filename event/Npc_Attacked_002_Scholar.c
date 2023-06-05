-------- EventFlow: Npc_Attacked_002_Scholar --------

void Talk() {
    Event0:

    call Npc_Attacked_007.DeathMtHatago_ExistDill_NearActorsTalk()

}

void Near() {
    Event5:

    call Npc_Attacked_007.DeathMtHatago_ExistDill_NearActorsNear()

}

void DeathMtHatago_IsTalked_DillJyoram_Near() {
    Event2:

    call Npc_Attacked_007.DeathMtHatago_IsTalked_DillJyoram_NearActorsNear()

}

void DeathMtHatago_IsTalked_DillJyoram_Talk() {
    Event3:

    call Npc_Attacked_007.DeathMtHatago_IsTalked_DillJyoram_NearActorsTalk()

}

void NearActorsNear() {
    goto Event5
}

void NearActorsTalk() {
    goto Event0
}

void DeathMtHatago_IsTalked_DillJyoram_NearActorsTalk() {
    goto Event3
}

void DeathMtHatago_IsTalked_DillJyoram_NearActorsNear() {
    goto Event2
}
