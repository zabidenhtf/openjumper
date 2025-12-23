// OpenJumper base lib
#ifndef SYSTEM_H
#define SYSTEM_H

#include "includes.hpp"

using namespace std;

/*struct vector2{ // TODO: replace all double x, double y to this struct
    double x,
    double y
};

struct vector3{ // For scene
    double x,
    double y,
    double z
};*/

void write(string msg);
void write_dbg(string about, string msg);
int randint(int min, int max);

#endif // SYSTEM_H
