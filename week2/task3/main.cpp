#include <iostream>
#include "rational.h"

using namespace std;

void inputArray(rational arr[], int size) {
    for (int i = 0; i < size; i++) {
        int a, b;
        std::cout << "Enter numerator and denominator for fraction " << i + 1 << ": ";
        std::cin >> a >> b;
        arr[i].set(a, b);
    }
}

int main()
{
    int n;
    cout << "Enter the number of fractions: ";
    cin >> n;

    rational* arr = new rational[n];
    inputArray(arr, n);

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            rational res1(0, 1);
            res1 = arr[i].operator+(arr[j]);
            res1.show();
            if (res1 > arr[i]) {
                cout << " > ";
            }
            else if (res1 == arr[i]) {
                cout << " = ";
            }
            else {
                cout << " < ";
            }
            arr[j].show();
            cout << endl;
        }
    }

    delete[] arr;

    return 0;
}