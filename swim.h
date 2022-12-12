#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
#include "glasses.h"
#include "cap.h"
#include "shorts.h"
#include "slippers.h"

class swim {
    friend void pos(swim& a);
private:
    glasses _glasses;
    cap _cap;
    shorts _shorts;
    slippers _slippers;
    int positions = 4;
public:
    swim(glasses _glasses, cap _cap, shorts _shorts, slippers _slippers);
    swim(glasses _glasses);
    swim();
    ~swim();
    void input();
    void output();
    static void res(swim a, float& res);
    static void res(swim a, float* res);
    static void color(swim a);
};