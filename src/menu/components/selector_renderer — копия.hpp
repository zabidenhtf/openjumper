#include "selector.hpp"

menu_selector::menu_selector(){
    write_dbg("SELECTOR", "Selector initialisated");
    reset();
}

void menu_selector::reset(){
    button_selector_max = 3;
    button_selector_min = 0;
    button_selected_now = button_selector_min;
}

void menu_selector::update(double tick){
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
    render();
}

void menu_selector::render(){
    return;
}
