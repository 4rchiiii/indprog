#include <iostream>
#include "rational.h"

int main() {
    int n;
    std::cout << "Enter the number of fractions: ";
    std::cin >> n;

    rational* fractions = new rational[n];

    for (int i = 0; i < n; i++) {
        int a, b;
        std::cout << "Enter fraction " << i + 1 << " (a/b): ";
        std::cin >> a >> b;

        fractions[i].set(a, b);
    }

    std::cout << "The fractions are: ";
    for (int i = 0; i < n; i++) {
        fractions[i].show();
        std::cout << " ";
    }
    std::cout << std::endl;

    delete[] fractions;
    return 0;
}