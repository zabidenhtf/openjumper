#ifndef SCENE_JUMPER_H
#define SCENE_JUMPER_H

#include "../interface.hpp"
#include "../system.hpp"
#include "../game/component.hpp" // TODO: Move to root dir

class jumper_player : public component{
public:
jumper_player();
virtual void reset();
virtual void update(double tick);
virtual void render();
private:
vec3 pos;
};

#endif // SCENE_JUMPER_H
