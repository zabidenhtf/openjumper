#include "scene.hpp"

scene::scene(){
    write_dbg("SCENE", "Scene initialisated");
}

void scene::update(double tick){
    render();
}

void scene::render(){
    int width = 300*gfx::screen_aspect();
    gfx::viewport(0,0,screen_width, screen_height);
    gfx::mapscreen(0,0, width,300);

    gfx::set_color(vec4(1,1,1,1));
    gfx::disable_texture();
    gfx::begin_quads();
    gfx::draw_2d_quad(vec2(0,0),vec2(width,300));
    gfx::end();
}
