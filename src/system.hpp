// OpenJumper base lib
#ifndef SYSTEM_H
#define SYSTEM_H

#include "includes.hpp"

using namespace std;

void write(string msg);
void write_dbg(string about, string msg);
int randint(int min, int max);
string read_file(const char* path);

#endif // SYSTEM_H
