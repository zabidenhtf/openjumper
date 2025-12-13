#include "interface.hpp"
#include <chrono>
#include <thread>

const float FPS =60.00f;
const float frame_time = 1.0 / FPS;
double last_time = glfwGetTime();

using namespace std;

int main(){
    gfx::init();
    // just simple debug code
    gfx::viewport(0,0,800,600);
    gfx::mapscreen(0,0,800,600);
    double color = 0;
    while(!glfwWindowShouldClose(gfx::get_window())){
        double frame_start = glfwGetTime();

        double delta = frame_start - last_time;
        last_time = frame_start;

        gfx::clear(1,0,0);
        color = color + 0.1 * delta;
        gfx::set_color(0,color,0,1);
        gfx::begin_quads();
        gfx::draw_2d_quad(0,0,150,150);
        gfx::end();

        gfx::swap();

        double frame_end = glfwGetTime();
        double time_taken = frame_end - frame_start;

        if (time_taken < frame_time) {
            // fps limiter
            this_thread::sleep_for(
                chrono::duration<double>(frame_time - time_taken)
            );
        }
    }
}
