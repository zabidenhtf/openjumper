#ifndef GAME_CORE_H
#define GAME_CORE_H"

#define WARMUP_TIME 4
#include "warmup.hpp"

class game_core{
public:
    void init();
    void update(double tick);
private:
    // Components
    warmup *warmup_component;
};

#endif // GAME_CORE_H
