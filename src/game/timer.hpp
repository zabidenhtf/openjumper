#ifndef GAME_TIMER_H
#define GAME_TIMER_H

#include "../interface.hpp"
#include "../system.hpp"

class timer{
public:
    timer();
    void reset();
    void update(double tick);
    void render();
    bool active = true;
    double time = 0;
    double timer_time;
};

#endif // GAME_TIMER_H
