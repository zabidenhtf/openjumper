#include "interface.hpp"

// TODO: Make time system
int main(){
    gfx::init();
    // just simple debug code
    gfx::viewport(0,0,800,600);
    gfx::mapscreen(0,0,800,600);
    while(!glfwWindowShouldClose(gfx::get_window())){
        gfx::clear(1,0,0);

        gfx::set_color(0,1,0,1);
        gfx::begin_quads();
        gfx::draw_2d_quad(0,0,150,150);
        gfx::end();

        gfx::swap();
    }
}
