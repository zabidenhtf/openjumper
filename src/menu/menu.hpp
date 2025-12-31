#ifndef GAME_MENU_H
#define GAME_MENU_H

#include "interface.hpp"
#include "system.hpp"
#include "includes.hpp"

#include "components/logo_renderer.hpp"
#include "components/background.hpp"

enum MENU_STATES{
    MENU_MAIN,
    MENU_NEWGAME
};

class game_menu_core{
public:
    game_menu_core();
    void update(double tick);
private:
    int button_selector_max;
    int button_selector_min;
    int button_selected_now;
    menu_logo *menu_logo_component;
    menu_background *menu_background_component;
};

extern game_menu_core* menu;

#endif // GAME_MENU_H
