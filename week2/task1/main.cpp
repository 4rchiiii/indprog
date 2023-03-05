#include "eq2.h"
#include <iostream>

int main() {
    double A, B, C;
    std::cout << "Enter A, B, C for equation 1: ";
    std::cin >> A >> B >> C;

    eq2 eq1(A, B, C);

    std::cout << "Enter A, B, C for equation 2: ";
    std::cin >> A >> B >> C;

    eq2 eq_2(A, B, C);

    eq2 eq3 = eq1 + eq_2;

    double x = eq3.find_X();
    double y = eq3.find_Y(x);

    std::cout << "eq1: x1=" << eq1.find_X() << ", x2=" << eq1.find_Y(eq1.find_X()) << std::endl;
    std::cout << "eq2: x1=" << eq_2.find_X() << ", x2=" << eq_2.find_Y(eq_2.find_X()) << std::endl;
    std::cout << "eq3: x1=" << x << ", x2=" << y << std::endl;

    return 0;
}

//для проверки можете использовать 1, 2, 1 для первого уравнения
//для проверки можете использовать 2, 5, 2 для второго уравнения