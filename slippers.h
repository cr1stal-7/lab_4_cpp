#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class slippers {
private:
    int slippers_size;
    string slippers_name;
public:
    float slippers_price;
    slippers();
    ~slippers();
    void input();
    void output();
};

