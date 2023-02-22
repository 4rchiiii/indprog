#include "circle.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
    // Создаем три объекта окружности, задавая их параметры с клавиатуры
    float radius1, x_center1, y_center1;
    cout << "Введите параметры первой окружности (радиус, координаты центра): ";
    cin >> radius1 >> x_center1 >> y_center1;
    Circle circle1(radius1, x_center1, y_center1);

    float radius2, x_center2, y_center2;
    cout << "Введите параметры второй окружности (радиус, координаты центра): ";
    cin >> radius2 >> x_center2 >> y_center2;
    Circle circle2(radius2, x_center2, y_center2);

    float radius3, x_center3, y_center3;
    cout << "Введите параметры третьей окружности (радиус, координаты центра): ";
    cin >> radius3 >> x_center3 >> y_center3;
    Circle circle3(radius3, x_center3, y_center3);

    // Выводим параметры каждой окружности и ее площадь
    cout << "\nОкружность 1:" << endl;
    cout << "Радиус: " << radius1 << endl;
    cout << "Координаты центра: (" << x_center1 << ", " << y_center1 << ")" << endl;
    cout << "Площадь: " << circle1.square() << endl;

    cout << "\nОкружность 2:" << endl;
    cout << "Радиус: " << radius2 << endl;
    cout << "Координаты центра: (" << x_center2 << ", " << y_center2 << ")" << endl;
    cout << "Площадь: " << circle2.square() << endl;

    cout << "\nОкружность 3:" << endl;
    cout << "Радиус: " << radius3 << endl;
    cout << "Координаты центра: (" << x_center3 << ", " << y_center3 << ")" << endl;
    cout << "Площадь: " << circle3.square() << endl;

    float a, b, c;
    cout << "\nВведите стороны треугольника для проверки, можно ли вокруг него описать каждую окружность:" << endl;
    cout << "Сторона a: ";
    cin >> a;
    cout << "Сторона b: ";
    cin >> b;
    cout << "Сторона c: ";
    cin >> c;

    cout << "\nМожно ли окружность 1 описать вокруг треугольника? " << boolalpha << circle1.triangle_around(a, b, c) << endl;
    cout << "Можно ли окружность 2 описать вокруг треугольника? " << boolalpha << circle2.triangle_around(a, b, c) << endl;
    cout << "Можно ли окружность 3 описать вокруг треугольника? " << boolalpha << circle3.triangle_around(a, b, c) << endl;

    cout << "\nВведите стороны треугольника для проверки, можно ли вписать в него каждую окружность:" << endl;
    cout << "Сторона a: ";
    cin >> a;
    cout << "Сторона b: ";
    cin >> b;
    cout << "Сторона c: ";
    cin >> c;

    cout << "\nМожно ли окружность 1 вписать в треугольник? " << boolalpha << circle1.triangle_in(a, b, c) << endl;
    cout << "Можно ли окружность 2 вписать в треугольник? " << boolalpha << circle2.triangle_in(a, b, c) << endl;
    cout << "Можно ли окружность 3 вписать в треугольник? " << boolalpha << circle3.triangle_in(a, b, c) << endl;

    cout << "\nПересекаются ли окружности 1 и 3? " << boolalpha << circle1.check_circle(radius3, x_center3, y_center3) << endl;
    cout << "Пересекаются ли окружности 1 и 2? " << boolalpha << circle1.check_circle(radius2, x_center2, y_center2) << endl;
    cout << "Пересекаются ли окружности 2 и 3? " << boolalpha << circle2.check_circle(radius3, x_center3, y_center3) << endl;
    return 0;
}
