#include "system.hpp"
#include <iostream>
#include <sstream>
#include <fstream>
#include <random>

void write(string msg){
    cout << msg << "\n";
}

void write_dbg(string about, string msg){
    cout << "[" << about << "] " << msg << "\n";
}

int randint(int min, int max){
    static mt19937 rng(random_device{}());
    uniform_int_distribution<int> dist(min, max);
    return dist(rng);
}

string read_file(const char* path){
    ifstream file(path);
    stringstream ss;
    ss << file.rdbuf();
    return ss.str();
}
