#include <iostream>
#include <stdexcept>

class Divide {
public:
    static double do_division(double num1, double num2) {
        if (num2 == 0.0) {
            throw std::invalid_argument("Ошибка: деление на ноль");
        }
        return num1 / num2;
    }
};

int main() {
    setlocale(LC_ALL, "Russian");
    try {
        double num1 = 10.0;
        double num2 = 0.0;
        double result = Divide::do_division(num1, num2);
        std::cout << "Результат: " << result << std::endl;
    }
    catch (const std::invalid_argument& e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
