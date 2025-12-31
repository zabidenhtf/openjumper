#include "logo_renderer.hpp"
#include "data.hpp"

menu_logo::menu_logo(){
    write_dbg("MENU LOGO", "Menu logo initialisated");
}

void menu_logo::update(double tick){
    render();
}

void menu_logo::render(){
    int width = 300*gfx::screen_aspect();
    gfx::set_viewport(0,0,screen_width, screen_height);
    gfx::set_ortho(0,0, width,300);

    gfx::enable_texture(data2d::textures[LOGO]);
    gfx::draw_2d_quad(vec2(0,0), vec2(150,100), vec4(1,1,1,1));
    gfx::disable_texture();
}
