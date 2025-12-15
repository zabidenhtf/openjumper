#include "game.hpp"

void game_core::init(){
    write_dbg("GAME", "game launched");
    warmup_component = new warmup();
    // Params
    warmup_component->timer_time = WARMUP_TIME;
}

void game_core::update(double tick){
    warmup_component->update(tick);
}
