#include <iostream>
#include "rational.h"

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

rational::rational(int a1, int b1) {
    if (b1 == 0) {
        cout << "Error: denominator cannot be zero." << endl;
        a = 0;
        b = 1;
        return;
    }
    if (a1 > b1) {
        int c = a1 / b1;
        a1 = a1 % b1;
        a = a1 / gcd(a1, b1);
        b = b1 / gcd(a1, b1);
        a += c * b;
    }
    else {
        a = a1 / gcd(a1, b1);
        b = b1 / gcd(a1, b1);
    }
}

void rational::set(int a1, int b1) {
    rational r(a1, b1);
    a = r.a;
    b = r.b;
}

void rational::show() {
    cout << a << "/" << b;
}

rational rational::operator+(rational r) {
    int new_b = b * r.b;
    int new_a = a * r.b + r.a * b;
    return rational(new_a, new_b);
}

void rational::operator++() {
    a += b;
}

bool operator==(rational r1, rational r2) {
    return (r1.a == r2.a && r1.b == r2.b);
}

bool operator>(rational r1, rational r2) {
    int new_b = r1.b * r2.b;
    int new_a1 = r1.a * r2.b;
    int new_a2 = r2.a * r1.b;
    return (new_a1 > new_a2);
}