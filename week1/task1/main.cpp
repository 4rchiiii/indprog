#include <iostream>
#include "triangle.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    Triangle triangles[3];
    for (int i = 0; i < 3; i++) {
        double a, b, c;
        cout << "������� ������� ������������ " << i + 1 << ": ";
        cin >> a >> b >> c;
        while (!triangles[i].exst_tr()) {
            triangles[i].set(a, b, c);
            if (!triangles[i].exst_tr()) {
                cout << "������������ �����������, ���������� ������ ������: ";
                cin >> a >> b >> c;
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        cout << "����������� " << i + 1 << std::endl;
        triangles[i].show();
        cout << "��������: " << triangles[i].perimetr() << std::endl;
        cout << "�������: " << triangles[i].square() << std::endl;
    }

    return 0;
}