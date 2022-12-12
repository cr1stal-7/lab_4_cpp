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
    cout << "������� �������� �����: ";
    cin >> glasses_name;
    cout << "������� ���� �����: ";
    cin >> glasses_color;
    cout << "������� ��������� �����: ";
    cin >> glasses_price;
}

void glasses::output() {
    cout << "�������� �����:" << glasses_name << " ���� �����:" << glasses_color << " ��������� �����:" << glasses_price << endl;
}