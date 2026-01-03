#include "menu.hpp"

game_menu_core::game_menu_core(){
    write_dbg("MENU", "Menu initialisated");
    button_selector_max = 3;
    button_selector_min = 0;
    button_selected_now = button_selector_min;
    menu_logo_component = new menu_logo();
    menu_background_component = new menu_background();
}

void game_menu_core::update(double tick){
    // Selector update
    if (!key_buffer.empty()){
            switch(key_buffer.back()){
            case GLFW_KEY_DOWN:
                if (button_selected_now != button_selector_max){
                    button_selected_now += 1;
                    write_dbg("MENU", "Selector down");
                    write_dbg("MENU", to_string(button_selected_now));
                }
                break;
            case GLFW_KEY_UP:
                if (button_selected_now != button_selector_min){
                    button_selected_now -= 1;
                    write_dbg("MENU", "Selector up");
                    write_dbg("MENU", to_string(button_selected_now));

                }
                break;
            }
    }
    // Updating all stuff
    menu_background_component->update(tick);
    menu_logo_component->update(tick);
}
