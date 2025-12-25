#include "scene.hpp"
#include "../data.hpp"

scene::scene(){
    write_dbg("SCENE", "Scene initialisated");
}

void scene::update(double tick){
    render();
}

void scene::render(){
    int width = 300*gfx::screen_aspect();
    gfx::set_viewport(0,0,screen_width, screen_height);
    gfx::set_ortho(0,0, width,300);

    gfx::enable_texture(data2d::textures[NULL_TEX]);
    gfx::draw_2d_quad(vec2(0, 0), vec2(width, 300),vec4(1,1,1,1));

    gfx::set_camera(vec3(3,3,3), vec3(0,0,0), 90);
    gfx::draw_3d_cube(vec2(0,0), vec2(1,1),vec4(0,0,0,1));

    gfx::disable_texture();
}
