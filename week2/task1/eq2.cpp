#include "eq2.h"
#include <iostream>
#include <cmath>

eq2::eq2(double a1, double b1, double c1) {
    set(a1, b1, c1);
}

void eq2::set(double a1, double b1, double c1) {
    a = a1;
    b = b1;
    c = c1;
    D = b * b - 4 * a * c;
}

double eq2::find_X() {
    if (D < 0) {
        std::cout << "No real roots!" << std::endl;
        return 0;
    }
    else {
        double x1 = (-b + sqrt(D)) / (2 * a);
        double x2 = (-b - sqrt(D)) / (2 * a);
        return std::max(x1, x2);
    }
}

double eq2::find_Y(double x1) {
    return a * x1 * x1 + b * x1 + c;
}

eq2 eq2::operator+(const eq2& other) {
    double newA = a + other.a;
    double newB = b + other.b;
    double newC = c + other.c;
    return eq2(newA, newB, newC);
}