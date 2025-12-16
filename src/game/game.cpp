#include "game.hpp"

dance_sequence game_core::generate_dance(DANCE_LEVELS level){
    dance_sequence buffer;

    for (int i = 0; i < level; i++){
        DANCE_MOVEMENTS movement;
        movement = JUMP;

        // Debug output
        switch (movement){
        case JUMP:
            write_dbg("GAME:generate_dance", "Added JUMP to dance");
            break;
        case KICK_LEFT:
            write_dbg("GAME:generate_dance", "Added KICK_LEFT to dance");
            break;
        case KICK_RIGHT:
            write_dbg("GAME:generate_dance", "Added KICK_RIGHT to dance");
            break;
        case FLIP:
            write_dbg("GAME:generate_dance", "Added FLIP to dance");
            break;
        case SHUFFLE_FORWARD:
            write_dbg("GAME:generate_dance", "Added SHUFFLE_FORWARD to dance");
            break;
        case SHUFFLE_BACKWARD:
            write_dbg("GAME:generate_dance", "Added SHUFFLE_BACKWARD to dance");
            break;
        }
        buffer.movements.push_back(movement);
    }

    return buffer;
}

void game_core::init(){
    write_dbg("GAME", "game launched");
    warmup_component = new warmup();
    controls_component = new controls();

    dance_sequence now_dance = generate_dance(EASY);

    warmup_component->timer_time = WARMUP_TIME;
}

void game_core::update(double tick){
    warmup_component->update(tick);
    //controls_component->update(tick);
}
