#ifndef MENU_ENVIRONMENT_H
#define MENU_ENVIRONMENT_H

#include "interface.hpp"
#include "system.hpp"
#include "component.hpp"

class menu_environment : public component{
public:
    menu_environment();
    virtual void reset();
    virtual void update(double tick);
    virtual void render();
private:
    // For light debug and render debug
    float cam_pos_x = 1;
    float cam_pos_z = 4;
};

#endif // MENU_ENVIRONMENT_H
