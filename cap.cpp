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
    cout << "������� �������� �������: ";
    cin >> cap_name;
    cout << "������� ���� �������: ";
    cin >> cap_color;
    cout << "������� ��������� �������: ";
    cin >> cap_price;
}

void cap::output() {
    cout << "�������� �������:" << cap_name << " ���� �������:" << cap_color << " ��������� �������:" << cap_price << endl;
}