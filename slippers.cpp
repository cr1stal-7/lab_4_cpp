#include "slippers.h"
#include <iostream>
using namespace std;

slippers::slippers() {
    this->slippers_name = "name";
    this->slippers_size = 0;
    this->slippers_price = 0;
}

slippers::~slippers() = default;

void slippers::input() {
    cout << "Введите название сланцев: ";
    cin >> slippers_name;
    cout << "Введите размер сланцев: ";
    cin >> slippers_size;
    cout << "Введите стоимость сланцев: ";
    cin >> slippers_price;
}

void slippers::output() {
    cout << "Название сланцев:" << slippers_name << " Размер сланцев:" << slippers_size << " Стоимость сланцев:" << slippers_price << endl;
}