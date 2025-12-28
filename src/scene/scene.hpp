#ifndef GAME_SCENE_H
#define GAME_SCENE_H

#include "../interface.hpp"
#include "../system.hpp"
#include "../includes.hpp"

// entities
#include "jumper.hpp"

class scene_core{ // There is all 3D objects
public:
    scene_core();
    void reset(){return;};
    void update(double tick);
    void render();
private:
    // For light debug and render debug
    float cam_pos_x = 0;
    float cam_pos_z = 0;
    jumper_player *player;
};

#endif // GAME_SCENE_H
