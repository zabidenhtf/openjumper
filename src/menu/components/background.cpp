#include "background.hpp"
#include "data.hpp"

menu_background::menu_background(){
    write_dbg("MENU BACKGROUND", "Menu background initialisated");
    tile_width = data2d::textures[BACKGROUND_TILE].width;
    tile_height = data2d::textures[BACKGROUND_TILE].height;
}

void menu_background::update(double tick){
    render();
}

void menu_background::render(){
    int width = 300*gfx::screen_aspect();
    gfx::set_viewport(0,0,screen_width, screen_height);
    gfx::set_ortho(0,0, screen_width,screen_height);

    for (int y = 0; y < screen_height/tile_height; y++){
        for (int x = 0; x < screen_width/tile_width; x++){
            gfx::enable_texture(data2d::textures[BACKGROUND_TILE]);
            gfx::draw_2d_quad(vec2(x*tile_width,y*tile_height), vec2(tile_width,tile_height), vec4(1,1,1,1));
            gfx::disable_texture();
        }
    }
}
