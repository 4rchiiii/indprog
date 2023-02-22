#include "circle.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
    // ������� ��� ������� ����������, ������� �� ��������� � ����������
    float radius1, x_center1, y_center1;
    cout << "������� ��������� ������ ���������� (������, ���������� ������): ";
    cin >> radius1 >> x_center1 >> y_center1;
    Circle circle1(radius1, x_center1, y_center1);

    float radius2, x_center2, y_center2;
    cout << "������� ��������� ������ ���������� (������, ���������� ������): ";
    cin >> radius2 >> x_center2 >> y_center2;
    Circle circle2(radius2, x_center2, y_center2);

    float radius3, x_center3, y_center3;
    cout << "������� ��������� ������� ���������� (������, ���������� ������): ";
    cin >> radius3 >> x_center3 >> y_center3;
    Circle circle3(radius3, x_center3, y_center3);

    // ������� ��������� ������ ���������� � �� �������
    cout << "\n���������� 1:" << endl;
    cout << "������: " << radius1 << endl;
    cout << "���������� ������: (" << x_center1 << ", " << y_center1 << ")" << endl;
    cout << "�������: " << circle1.square() << endl;

    cout << "\n���������� 2:" << endl;
    cout << "������: " << radius2 << endl;
    cout << "���������� ������: (" << x_center2 << ", " << y_center2 << ")" << endl;
    cout << "�������: " << circle2.square() << endl;

    cout << "\n���������� 3:" << endl;
    cout << "������: " << radius3 << endl;
    cout << "���������� ������: (" << x_center3 << ", " << y_center3 << ")" << endl;
    cout << "�������: " << circle3.square() << endl;

    float a, b, c;
    cout << "\n������� ������� ������������ ��� ��������, ����� �� ������ ���� ������� ������ ����������:" << endl;
    cout << "������� a: ";
    cin >> a;
    cout << "������� b: ";
    cin >> b;
    cout << "������� c: ";
    cin >> c;

    cout << "\n����� �� ���������� 1 ������� ������ ������������? " << boolalpha << circle1.triangle_around(a, b, c) << endl;
    cout << "����� �� ���������� 2 ������� ������ ������������? " << boolalpha << circle2.triangle_around(a, b, c) << endl;
    cout << "����� �� ���������� 3 ������� ������ ������������? " << boolalpha << circle3.triangle_around(a, b, c) << endl;

    cout << "\n������� ������� ������������ ��� ��������, ����� �� ������� � ���� ������ ����������:" << endl;
    cout << "������� a: ";
    cin >> a;
    cout << "������� b: ";
    cin >> b;
    cout << "������� c: ";
    cin >> c;

    cout << "\n����� �� ���������� 1 ������� � �����������? " << boolalpha << circle1.triangle_in(a, b, c) << endl;
    cout << "����� �� ���������� 2 ������� � �����������? " << boolalpha << circle2.triangle_in(a, b, c) << endl;
    cout << "����� �� ���������� 3 ������� � �����������? " << boolalpha << circle3.triangle_in(a, b, c) << endl;

    cout << "\n������������ �� ���������� 1 � 3? " << boolalpha << circle1.check_circle(radius3, x_center3, y_center3) << endl;
    cout << "������������ �� ���������� 1 � 2? " << boolalpha << circle1.check_circle(radius2, x_center2, y_center2) << endl;
    cout << "������������ �� ���������� 2 � 3? " << boolalpha << circle2.check_circle(radius3, x_center3, y_center3) << endl;
    return 0;
}
