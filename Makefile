TARGETS = $(wildcard src/*.cpp)
GAME_TARGETS = $(wildcard src/game/*.cpp)
SCENE_TARGETS = $(wildcard src/scene/*.cpp)

GLFW_INCLUDE = -Ilib/glfw/include

GLFW_LIB_WIN64 = -Llib/glfw/lib -lglfw3 -lgdi32 -lopengl32
GLFW_LIB_WIN32 = -Llib/glfw/lib32 -lglfw3 -lgdi32 -lopengl32
GLFW_LIB_LINUX = -lglfw -lGL -lGLU -lX11 -lpthread -lrt -l dl

FREETYPE_INCLUDE = -Ilib/freetype/include
FREETYPE_LIB_WIN64 = -Llib/freetype/lib -lfreetype
FREETYPE_LIB_WIN32 = -Llib/freetype/lib32 -lfreetype
FREETYPE_LIB_LINUX = -lfreetype

BINARIES_GLFW_WIN64 = lib/bin/win64/glfw3.dll
BINARIES_GLFW_WIN32 = lib/bin/win32/glfw3.dll

GLM_INCLUDE = -Ilib/glm

SIMPLE_INI_INCLUDE = -Ilib/simpleini

LODE_PNG_INCLUDE = -Ilib/png
LODE_PNG_TARGETS = lib/png/lodepng/lodepng.cpp

GLAD_INCLUDE = -Ilib/glad/include
GLAD_TARGETS = lib/glad/src/glad.c

CXX = g++
CXXFLAGS = -Wall -g -O0
EXEC = openjumper

all:
ifdef PLATFORM
ifeq ($(PLATFORM),WIN64)
	$(CXX) $(TARGETS) $(GAME_TARGETS) $(SCENE_TARGETS) $(CXXFLAGS) \
	$(GLFW_INCLUDE) $(GLFW_LIB_WIN64) \
	$(FREETYPE_INCLUDE) $(FREETYPE_LIB_WIN64) \
	$(LODE_PNG_INCLUDE) $(LODE_PNG_TARGETS) \
	$(GLM_INCLUDE)  \
	$(GLAD_INCLUDE) $(GLAD_TARGETS) \
	$(SIMPLE_INI_INCLUDE) \
	-o $(EXEC)
else ifeq ($(PLATFORM),WIN32)
	$(CXX) $(TARGETS) $(GAME_TARGETS) $(SCENE_TARGETS) $(CXXFLAGS) \
	$(GLFW_INCLUDE) $(GLFW_LIB_WIN32) \
	$(FREETYPE_INCLUDE) $(FREETYPE_LIB_WIN32) \
	$(LODE_PNG_INCLUDE) $(LODE_PNG_TARGETS) \
	$(GLM_INCLUDE)  \
	$(GLAD_INCLUDE) $(GLAD_TARGETS) \
	$(SIMPLE_INI_INCLUDE) \
	-o $(EXEC)
else ifeq ($(PLATFORM),LINUX)
	$(CXX) $(TARGETS) $(GAME_TARGETS) $(SCENE_TARGETS) $(CXXFLAGS) \
	$(GLFW_INCLUDE) $(GLFW_LIB_LINUX) \
	$(FREETYPE_INCLUDE) $(FREETYPE_LIB_LINUX) \
	$(LODE_PNG_INCLUDE) $(LODE_PNG_TARGETS) \
	$(GLM_INCLUDE)  \
	$(GLAD_INCLUDE) $(GLAD_TARGETS) \
	$(SIMPLE_INI_INCLUDE) \
	-o $(EXEC)
else
	$(error Platform is unsupported)
endif
else
	$(error there is no Platform defined)
endif
