#include "system.hpp"
#include "interface.hpp"

using namespace std;

GLFWwindow *root = nullptr;
// window stuff
static int screen_width = 800;
static int screen_height = 600;
static bool fullscreen = false;

// For render and native mod
GLFWwindow *gfx::get_window(){
    return root;
}

void gfx::mapscreen(int x, int y, int w, int h){
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(x, x + w, y + h, y, -1.0f, 1.0f);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

void gfx::viewport(int x, int y, int w, int h){
    glViewport(x, y, w, h);
}

void gfx::init(){
    if (glfwInit()){
        write_dbg("GFX", "Graphics initialisated");
    }

    root = glfwCreateWindow(screen_width, screen_height, "Openjumper", NULL, NULL);

    if (!root){
        write_dbg("GFX", "Failed to create window");
    }
    glfwMakeContextCurrent(root);
}

void gfx::swap(){
    glfwPollEvents();
    glfwSwapBuffers(root);
}

void gfx::clear(float r, float g, float b){
    glClearColor(r, g, b, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
}

void gfx::begin_quads(){
    glBegin(GL_QUADS);
}

void gfx::set_color(float r, float g, float b, float a){
    glColor4f(r,g,b,a);
}

// TODO: add 3D stuff
void gfx::draw_2d_quad(int x, int y, int w, int h){
    glVertex2f(x,y);
    glVertex2f(x + w,y);
    glVertex2f(x + w,y + h);
    glVertex2f(x,y + h);
}

void gfx::end(){
    glEnd();
}

void gfx::kill(){
    glfwTerminate();
}
