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
    cout << "������� �������� �������: ";
    cin >> slippers_name;
    cout << "������� ������ �������: ";
    cin >> slippers_size;
    cout << "������� ��������� �������: ";
    cin >> slippers_price;
}

void slippers::output() {
    cout << "�������� �������:" << slippers_name << " ������ �������:" << slippers_size << " ��������� �������:" << slippers_price << endl;
}