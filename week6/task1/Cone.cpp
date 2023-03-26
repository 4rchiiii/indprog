#include "Cone.h"
#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14159265358979323846;

Cone::Cone() : x(0), y(0), z(0), r(0), h(0) {}

Cone::Cone(double r, double h) : x(0), y(0), z(0), r(r), h(h) {}

Cone::Cone(double x, double y, double z, double r, double h)
    : x(x), y(y), z(z), r(r), h(h) {}

void Cone::input() {
    cout << "Enter x coordinate of the base center: ";
    cin >> x;
    cout << "Enter y coordinate of the base center: ";
    cin >> y;
    cout << "Enter z coordinate of the base center: ";
    cin >> z;
    cout << "Enter base radius: ";
    cin >> r;
    cout << "Enter height: ";
    cin >> h;
    cout << "\n";
}

void Cone::display() const {
    cout << "Base center: (" << x << ", " << y << ", " << z << ")" << endl;
    cout << "Base radius: " << r << endl;
    cout << "Height: " << h << endl;
}

double Cone::surfaceArea() const {
    double l = sqrt(r * r + h * h);
    return PI * r * r + PI * r * l;
}

double Cone::volume() const {
    return PI * r * r * h / 3;
}