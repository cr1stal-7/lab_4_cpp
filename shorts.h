#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class shorts {
private: string shorts_name;
public:
    float shorts_price;
    string shorts_color;
    shorts();
    ~shorts();
    void input();
    void output();
};

