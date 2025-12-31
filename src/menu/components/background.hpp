#ifndef MENU_BACKGROUND_H
#define MENU_BACKGROUND_H

#include "interface.hpp"
#include "system.hpp"
#include "includes.hpp"
#include "component.hpp"

class menu_background : public component{
public:
    menu_background();
    virtual void reset(){return;};
    virtual void update(double tick);
    virtual void render();
};

#endif // MENU_BACKGROUND_H
