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
    cout << "������� �������� ����: ";
    cin >> shorts_name;
    cout << "������� ���� ����: ";
    cin >> shorts_color;
    cout << "������� ��������� ����: ";
    cin >> shorts_price;
}

void shorts::output() {
    cout << "�������� ����:" << shorts_name << " ���� ����:" << shorts_color << " ��������� ����:" << shorts_price << endl;
}