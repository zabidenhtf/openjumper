#include "menu.hpp"

game_menu_core::game_menu_core(){
    write_dbg("MENU", "Menu initialisated");
    menu_environment_component = new menu_environment();
    menu_selector_component = new menu_selector();
    menu_logo_component = new menu_logo();
    menu_background_component = new menu_background();
}

void game_menu_core::update(double tick){
    // Updating all stuff
    menu_environment_component->update(tick);
    menu_background_component->update(tick);
    menu_logo_component->update(tick);
    menu_selector_component->update(tick);
}
