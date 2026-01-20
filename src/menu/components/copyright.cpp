/* Copyright (C) 2025-2026 Mykyta Polishyk */
/* This project is licensed under the GNU General Public License v3.0 or later. */
/* See the LICENSE file for details. */
#include "copyright.hpp"

menu_copyright::menu_copyright(){
	reset();
}

void menu_copyright::reset(){
	copyright_text = string(GAME_MILESTONE) + " | Copyright (C) 2025-2026 Mykyta Polishyk";
	version_text = "Version: " + string(GAME_VERSION);
}

void menu_copyright::update(double tick){
	render();
}

void menu_copyright::render(){
	gfx::set_viewport(0,0,screen_width, screen_height);
    gfx::set_ortho(0,0, screen_width,screen_height);
    // Just draw text, nothing special
	gfx::draw_2d_text(vec2(12,screen_height-(24+12)*2), 16, version_text, vec4(0,0,0,1));
	gfx::draw_2d_text(vec2(12,screen_height-24-12), 16, copyright_text, vec4(0,0,0,1));
}