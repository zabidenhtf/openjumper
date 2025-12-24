#include <GLFW/glfw3.h>
#include <glm/glm.hpp>
#include <glm/ext.hpp>
#include <glm/vec2.hpp>
#include <glm/vec3.hpp>
#include <glm/vec4.hpp>
#include <lodepng/lodepng.h>

#include "includes.hpp"
#ifndef INTERFACE_H
#define INTERFACE_H

using namespace glm;

static int screen_width = 1200;
static int screen_height = 600;

extern vector<int> key_buffer; // keys buffer, it need to save keys

struct texture{
    GLuint texture_id;
    int width;
    int height;
};

// Interface GFX
namespace gfx
{
    // TODO: Make imageloader, and quad drawing stuff

    GLFWwindow *get_window();
    void mapscreen(int x, int y, int w, int h);
    void viewport(int x, int y, int w, int h);
    void init();
    void swap();
    void clear(double r, double g, double b);
    void begin_quads();
    void set_color(vec4 color);
    void draw_2d_quad(vec2 pos, vec2 size);
    texture load_texture(const string &filename);
    void enable_texture(texture &txture);
    void disable_texture();
    void end();
    double screen_aspect();
    void kill();
}

// Interface INPUT
namespace input
{
    void callback(GLFWwindow* window, int key, int scancode, int action, int mods);
    void init(GLFWwindow* window);
}

#endif // INTERFACE_H
