#ifndef GAME_SCENE_H
#define GAME_SCENE_H

#include "../interface.hpp"
#include "../system.hpp"
#include "../includes.hpp"
#include "../game/component.hpp"

class scene : public component{ // There is all 3D objects
public:
    scene();
    virtual void reset(){return;};
    virtual void update(double tick);
    virtual void render();
};

#endif // GAME_SCENE_H
