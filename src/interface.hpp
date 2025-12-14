#include <GLFW/glfw3.h>
#ifndef INTERFACE_H
#define INTERFACE_H

static int screen_width = 1200;
static int screen_height = 600;

// Interface GFX
namespace gfx
{
    // TODO: Make imageloader, and quad drawing stuff

    GLFWwindow *get_window();
    void mapscreen(int x, int y, int w, int h);
    void viewport(int x, int y, int w, int h);
    void init();
    void swap();
    void clear(float r, float g, float b);
    void begin_quads();
    void set_color(float r, float g, float b, float a);
    void draw_2d_quad(int x, int y, int w, int h);
    void end();
    float screen_aspect();
    void kill();
}

#endif // INTERFACE_H
