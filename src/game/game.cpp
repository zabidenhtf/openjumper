#include "game.hpp"

void game_core::init(){
    write_dbg("GAME", "game launched");
    timer_component = new timer();
    // Params
    timer_component->timer_time = TIMER_TIME;
}

void game_core::update(double tick){
    timer_component->update(tick);
}
