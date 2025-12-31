#include "background.hpp"
#include "data.hpp"

menu_background::menu_background(){
    write_dbg("MENU BACKGROUND", "Menu background initialisated");

}

void menu_background::update(double tick){
    render();
}

void menu_background::render(){
    int width = 300*gfx::screen_aspect();
    gfx::set_viewport(0,0,screen_width, screen_height);
    gfx::set_ortho(0,0, width,300);

    gfx::enable_texture(data2d::textures[NULL_TEX]);
    gfx::draw_2d_quad(vec2(0,0), vec2(width,300), vec4(1,1,1,1));
    gfx::disable_texture();
}
