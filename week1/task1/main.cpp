#include <iostream>
#include "triangle.h"

using namespace std;

int main() {
    Triangle triangles[3];
    for (int i = 0; i < 3; i++) {
        double a, b, c;
        cout << "Enter sides of triangle " << i + 1 << ": ";
        cin >> a >> b >> c;
        while (!triangles[i].exst_tr()) {
            triangles[i].set(a, b, c);
            if (!triangles[i].exst_tr()) {
                cout << "Invalid triangle, try another: ";
                cin >> a >> b >> c;
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        cout << "Triangle " << i + 1 << std::endl;
        triangles[i].show();
        cout << "Perimeter: " << triangles[i].perimetr() << std::endl;
        cout << "Square: " << triangles[i].square() << std::endl;
    }

    return 0;
}