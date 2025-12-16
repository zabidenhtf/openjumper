#include "system.hpp"
#include <iostream>
#include <cstdlib>

void write(string msg){
    cout << msg << "\n";
}

void write_dbg(string about, string msg){
    cout << "[" << about << "] " << msg << "\n";
}

int randint(int min, int max){
    return (rand() % max-min)+min;
}
