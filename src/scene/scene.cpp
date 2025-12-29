#include "scene.hpp"

scene_core::scene_core(){
    write_dbg("SCENE", "Scene initialisated");

    player = new jumper_player();
    environment_component = new environment();
}

void scene_core::update(double tick){
    environment_component->update(tick);
    player->update(tick);
}
