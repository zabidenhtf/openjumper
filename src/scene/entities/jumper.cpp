#include "jumper.hpp"

jumper_player::jumper_player(){
    write_dbg("JUMPER", "Added to scene");
    reset();
}

void jumper_player::reset(){
    pos = vec3(0,0,0);
}

void jumper_player::update(double tick){
    render();
    pos + vec3(tick,0,0);
}

void jumper_player::render(){
    gfx::draw_3d_box(pos+vec3(0,1,0), vec3(1,2,1), vec4(0.75,0.75,0.75,1));
}
