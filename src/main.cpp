#include "interface.hpp"
#include <chrono>
#include <thread>

#include "game/timer.hpp"

const float FPS = 60.00f;
const float frame_time = 1.0 / FPS;
double last_time = glfwGetTime();

double timer_time = 4;

using namespace std;

int main(){
    gfx::init();

    // Components
    timer *timer_component;

    timer_component->timer_time = timer_time;
    timer_component->reset();
    while(!glfwWindowShouldClose(gfx::get_window())){
        gfx::clear(0,0,0);
        double frame_start = glfwGetTime();

        double delta = frame_start - last_time;
        last_time = frame_start;

        timer_component->update(delta);

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
