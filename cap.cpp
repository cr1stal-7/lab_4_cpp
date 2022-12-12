#include "cap.h"
#include <iostream>
using namespace std;

cap::cap() {
    this->cap_name = "name";
    this->cap_color = "color";
    this->cap_price = 0;
}

cap::~cap() = default;

void cap::input() {
    cout << "Введите название шапочки: ";
    cin >> cap_name;
    cout << "Введите цвет шапочки: ";
    cin >> cap_color;
    cout << "Введите стоимость шапочки: ";
    cin >> cap_price;
}

void cap::output() {
    cout << "Название шапочки:" << cap_name << " Цвет шапочки:" << cap_color << " Стоимость шапочки:" << cap_price << endl;
}