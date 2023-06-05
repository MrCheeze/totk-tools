-------- EventFlow: TreasureOfLamda_DuelPeak --------

void Ready_subchallnpc000_DuelPeak_sanroku_Near() {

    call subchallnpc000_DuelPeak.Near()

}

void Ready_subchallnpc000_DuelPeak_sanroku_Talk() {
    Event49:

    call subchallnpc000_DuelPeak.Talk()

}

void Ready_subchallnpc000_twin_DuelPeak_sanroku_Talk() {
    goto Event49
}
