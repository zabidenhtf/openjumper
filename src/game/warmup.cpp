#include "warmup.hpp"
//#include <iostream>
#include "game.hpp"
#include "../data.hpp"

warmup::warmup(){
    write_dbg("WARMUP","Timer initialisated");
    reset();
}

void warmup::reset(){
    write_dbg("WARMUP","Timer reset");
    time = 0;
    active = true;
}

void warmup::update(double tick){
    if (active == true){
        time += tick;
        //write_dbg("WARMUP","updating\n"); // Some debug stuff
        //std::cout << time;
        if (time > timer_time){
            active = false;
            write("Game started\n");
            game->game_started = true;
        }
        render();
    }
}

void warmup::render(){
    int width = 300*gfx::screen_aspect();
    gfx::set_viewport(0,0,screen_width, screen_height);
    gfx::set_ortho(0,0, width,300);

    int state;

    // TODO: Fix states in warmup
    if (0 < time && time < timer_time/4){
        state = 4;
    }
    else if (timer_time/4 < time && time < timer_time/2){
        state = 3;
    }
    else if (timer_time/2 < time && time < timer_time/1.5){
        state = 2;
    }
    else{
        state = 1;
    }

    switch (state){
    case 4:
        gfx::enable_texture(data2d::textures[DIGIT3]);
        gfx::draw_2d_quad(vec2(width/2-150/2,150-150/2),vec2(150,150), vec4(1,1,1,1));
        gfx::disable_texture();
        break;
    case 3:
        gfx::enable_texture(data2d::textures[DIGIT2]);
        gfx::draw_2d_quad(vec2(width/2-150/2,150-150/2),vec2(150,150), vec4(1,1,1,1));
        gfx::disable_texture();
        break;
    case 2:
        gfx::enable_texture(data2d::textures[DIGIT1]);
        gfx::draw_2d_quad(vec2(width/2-150/2,150-150/2),vec2(150,150), vec4(1,1,1,1));
        gfx::disable_texture();
        break;
    case 1:
        gfx::enable_texture(data2d::textures[MESSAGE_GO]);
        gfx::draw_2d_quad(vec2(width/2-300/2,150-150/2),vec2(300,150), vec4(1,1,1,1)); // fixed size
        gfx::disable_texture();
        break;
    }
}
