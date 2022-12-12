#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class glasses {
private: string glasses_name;
public:
    float glasses_price;
    string glasses_color;
    glasses();
    ~glasses();
    void input();
    void output();
};

