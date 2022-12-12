#include "glasses.h"
#include <iostream>
using namespace std;

glasses::glasses() {
    this->glasses_name = "name";
    this->glasses_color = "color";
    this->glasses_price = 0;
}

glasses::~glasses() = default;

void glasses::input() {
    cout << "Введите название очков: ";
    cin >> glasses_name;
    cout << "Введите цвет очков: ";
    cin >> glasses_color;
    cout << "Введите стоимость очков: ";
    cin >> glasses_price;
}

void glasses::output() {
    cout << "Название очков:" << glasses_name << " Цвет очков:" << glasses_color << " Стоимость очков:" << glasses_price << endl;
}