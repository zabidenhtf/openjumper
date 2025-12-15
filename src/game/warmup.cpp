#include "warmup.hpp"
//#include <iostream>

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
        }
        render();
    }
}

void warmup::render(){
    int width = 300*gfx::screen_aspect();
    gfx::viewport(0,0,screen_width, screen_height);
    gfx::mapscreen(0,0, width,300);

    // TODO: Make images like 3, 2, 1, GO!
    // TODO: Make cool animation
    if (0 < time && time < timer_time/4){
        gfx::set_color(1,0,0,1);
    }
    else if (timer_time/4 < time && time < timer_time/2){
        gfx::set_color(1,1,0,1);
    }
    else if (timer_time/2 < time && time < timer_time/1.5){
        gfx::set_color(0,1,0,1);
    }
    else{
        gfx::set_color(1,0,1,1);
    }

    gfx::begin_quads();
    gfx::draw_2d_quad(width/2-150/2,150-150/2,150,150);
    gfx::end();
}
