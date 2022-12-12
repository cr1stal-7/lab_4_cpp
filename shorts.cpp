#include "shorts.h"
#include <iostream>
using namespace std;

shorts::shorts() {
    this->shorts_name = "name";
    this->shorts_color = "color";
    this->shorts_price = 0;
}

shorts::~shorts() = default;

void shorts::input() {
    cout << "Введите название шорт: ";
    cin >> shorts_name;
    cout << "Введите цвет шорт: ";
    cin >> shorts_color;
    cout << "Введите стоимость шорт: ";
    cin >> shorts_price;
}

void shorts::output() {
    cout << "Название шорт:" << shorts_name << " Цвет шорт:" << shorts_color << " Стоимость шорт:" << shorts_price << endl;
}