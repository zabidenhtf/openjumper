#ifndef GAME_CONTROLS_H
#define GAME_CONTROLS_H

#include "../interface.hpp"
#include "../system.hpp"
#include "component.hpp"

class controls : public component
{
public:
    controls();
    virtual void reset(){return;};
    virtual void update(double tick){return;};
    virtual void render(){return;};
};

#endif // GAME_CONTROLS_H
