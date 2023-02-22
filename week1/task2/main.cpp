#include "circle.h"
#include <iostream>

using namespace std;

int main()
{
    float radius1, x_center1, y_center1;
    cout << "Enter the parameters of the first circle (radius, centre coordinates): ";
    cin >> radius1 >> x_center1 >> y_center1;
    Circle circle1(radius1, x_center1, y_center1);

    float radius2, x_center2, y_center2;
    cout << "Enter the parameters of the second circle (radius, centre coordinates): ";
    cin >> radius2 >> x_center2 >> y_center2;
    Circle circle2(radius2, x_center2, y_center2);

    float radius3, x_center3, y_center3;
    cout << "Enter the parameters of the third circle (radius, centre coordinates): ";
    cin >> radius3 >> x_center3 >> y_center3;
    Circle circle3(radius3, x_center3, y_center3);

    cout << "\nCircle 1:" << endl;
    cout << "Radius: " << radius1 << endl;
    cout << "Centre coordinates: (" << x_center1 << ", " << y_center1 << ")" << endl;
    cout << "Square: " << circle1.square() << endl;

    cout << "\nCircle 2:" << endl;
    cout << "Radius: " << radius2 << endl;
    cout << "Centre coordinates: (" << x_center2 << ", " << y_center2 << ")" << endl;
    cout << "Square: " << circle2.square() << endl;

    cout << "\nCircle 3:" << endl;
    cout << "Radius: " << radius3 << endl;
    cout << "Centre coordinates: (" << x_center3 << ", " << y_center3 << ")" << endl;
    cout << "Square: " << circle3.square() << endl;

    float a, b, c;
    cout << "\nEnter the sides of the triangle to check whether each circle can be circumscribed around it:" << endl;
    cout << "Side a: ";
    cin >> a;
    cout << "Side b: ";
    cin >> b;
    cout << "Side c: ";
    cin >> c;

    cout << "\nCan circle 1 be circumscribed around a triangle? " << boolalpha << circle1.triangle_around(a, b, c) << endl;
    cout << "Can circle 2 be circumscribed around a triangle? " << boolalpha << circle2.triangle_around(a, b, c) << endl;
    cout << "Can circle 3 be circumscribed around a triangle? " << boolalpha << circle3.triangle_around(a, b, c) << endl;

    cout << "\nEnter the sides of the triangle to check if each circle can be inscribed in it:" << endl;
    cout << "Side a: ";
    cin >> a;
    cout << "Side b: ";
    cin >> b;
    cout << "Side c: ";
    cin >> c;

    cout << "\nCan circle 1 be inscribed into a triangle? " << boolalpha << circle1.triangle_in(a, b, c) << endl;
    cout << "Can circle 2 be inscribed into a triangle? " << boolalpha << circle2.triangle_in(a, b, c) << endl;
    cout << "Can circle 3 be inscribed into a triangle? " << boolalpha << circle3.triangle_in(a, b, c) << endl;

    cout << "\nDo circles 1 and 3 intersect? " << boolalpha << circle1.check_circle(radius3, x_center3, y_center3) << endl;
    cout << "Do circles 1 and 2 intersect? " << boolalpha << circle1.check_circle(radius2, x_center2, y_center2) << endl;
    cout << "Do circles 2 and 3 intersect? " << boolalpha << circle2.check_circle(radius3, x_center3, y_center3) << endl;
    return 0;
}
