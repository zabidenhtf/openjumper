TARGETS = src/main.cpp src/gfx.cpp src/load.cpp src/model.cpp
CC = gcc
CFLAGS = -Wall
EXEC = openjumper

all:
	$(CC) $(TARGETS) $(CFLAGS) -o $(EXEC) -lstdc++

