#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class cap {
private: string cap_name;
public:
    float cap_price;
    string cap_color;
    cap();
    ~cap();
    void input();
    void output();
};

