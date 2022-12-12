#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include "glasses.h"
#include "cap.h"
#include "shorts.h"
#include "slippers.h"
#include "swim.h"

//ПЕРЕГРУЗКА +//
class overload_plus {
private:
    int min, sec;
public:
    void Init(int m, int s);
    overload_plus operator+ (overload_plus b);
};

void overload_plus::Init(int m, int s) {
    min = m;
    sec = s;
}

overload_plus overload_plus::operator+(overload_plus b) {
    overload_plus c;
    c.min = this->min + b.min;
    c.sec = this->sec + b.sec;
    if (c.sec >= 60) {
        c.min++;
        c.sec -= 60;
    }
    return c;
}
//ПЕРЕГРУЗКА ++//
class overload_plusplus {
private:
    int min, sec;
public:
    void Init(int m, int s);
    overload_plusplus& operator ++();
    overload_plusplus operator ++(int unused);
};

void overload_plusplus::Init(int m, int s) {
    min = m;
    sec = s;
}
//ПРЕФИКС
overload_plusplus& overload_plusplus::operator ++() {
    this->min++;
    return *this;
}
//ПОСТФИКС
overload_plusplus overload_plusplus::operator++(int unused) {
    overload_plusplus c = *this;
    ++* this;
    return c;
}

int main()
{
    setlocale(LC_ALL, "Rus");
    int k = 0;
    float res1, res2;
    //ПЕРЕГРУЗКА++//
    overload_plusplus a, b;
    a.Init(2, 35);
    b = ++a;       //a: min=3 sec=35  b: min=3 sec=35
    printf("Pref=%d\n", b);
    a.Init(2, 35);
    b = a++;       //a: min=3 sec=35 b: min=2 sec=35
    printf("Postf=%d", b);
    //ПЕРЕГРУЗКА +//
    overload_plus ap, bp, cp, dp;
    ap.Init(2, 25);
    bp.Init(2, 45);
    cp.Init(3, 5);
    dp = ap + bp + cp;  //d: min = 8 sec = 15
    printf("\nD=%d\n", dp);
    glasses _glasses = glasses();
    cap _cap = cap();
    shorts _shorts = shorts();
    slippers _slippers = slippers();
    swim* set = new swim[2];
    pos(*set);
    set[0] = swim(_glasses, _cap, _shorts, _slippers);
    set[0].input();
    set[0].output();
    //УКАЗАТЕЛЬ//
    swim::res(*set, &res1);
    cout << "Итог(сумма через указатель): " << res1 << endl;
    //ПАРАМЕТР//
    swim::res(*set, res2);
    cout << "Итог(через параметр): " << res2 << endl;
    swim::color(*set);
    delete[] set;
}