#ifndef GAME_CORE_H
#define GAME_CORE_H"

#define TIMER_TIME 4
#include "timer.hpp"

class game_core{
public:
    void init();
    void update(double tick);
private:
    // Components
    timer *timer_component;
};

#endif // GAME_CORE_H
