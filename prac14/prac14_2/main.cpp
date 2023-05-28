#include <iostream>
#include "Array.h"

int main() {
    setlocale(LC_ALL, "Russian");
    Array arr(10);
    try {
        arr[20] = 5;
    }
    catch (const std::out_of_range& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
