#include "rational.h"
#include <iostream>

rational::rational() : a(0), b(1) {}

rational::rational(int a1, int b1) : a(a1), b(b1) {
    if (b == 0) {
        std::cerr << "Denominator cannot be zero!" << std::endl;
        exit(1);
    }

    if (a > b) {
        a = a % b;
    }

    reduce();
}

void rational::set(int a1, int b1) {
    a = a1;
    b = b1;

    if (b == 0) {
        std::cerr << "Denominator cannot be zero!" << std::endl;
        exit(1);
    }

    if (a > b) {
        a = a % b;
    }

    reduce();
}

void rational::show() const {
    std::cout << a << "/" << b;
}

void rational::reduce() {
    int gcd = 1;
    for (int i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }
    if (gcd > 1) {
        a /= gcd;
        b /= gcd;
    }
}