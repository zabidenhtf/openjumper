#include "game.hpp"

dance_sequence generate_dance(DANCE_LEVELS level){
    dance_sequence buffer;

    for (int i = 0; i < level; i++){
        buffer.movements.push_back(JUMP);
    }

    return buffer;
}

void game_core::init(){
    write_dbg("GAME", "game launched");
    warmup_component = new warmup();
    controls_component = new controls();

    warmup_component->timer_time = WARMUP_TIME;
}

void game_core::update(double tick){
    warmup_component->update(tick);
    //controls_component->update(tick);
}
