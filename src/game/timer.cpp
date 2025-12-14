#include "timer.hpp"
#include <iostream>

void timer::reset(){
    write_dbg("TIMER","Timer reset");
    time = 0;
    active = true;
}

void timer::update(double tick){
    if (active == true){
        time += tick;
        //write_dbg("TIMER","updating\n"); // Some debug stuff
        //std::cout << time;
        if (time > timer_time){
            active = false;
        }
        render();
    }
}

void timer::render(){
    gfx::viewport(0,0,800,600);
    gfx::mapscreen(0,0,800,600);

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
    gfx::draw_2d_quad(0,0,150,150);
    gfx::end();
}
