#include "menu.hpp"

game_menu_core::game_menu_core(){
    write_dbg("MENU", "Menu initialisated");
    button_selected_now = 0;
    menu_logo_component = new menu_logo();
}

void game_menu_core::update(double tick){
    // Selector
    if (!key_buffer.empty()){
            switch(key_buffer.back()){
            case GLFW_KEY_DOWN:
                button_selected_now -= 1;
                write_dbg("MENU", "Selector down");
                break;
            case GLFW_KEY_UP:
                button_selected_now += 1;
                write_dbg("MENU", "Selector up");
                break;
            }
    }

    menu_logo_component->update(tick);
}
