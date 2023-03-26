#include "Cone.h"
#include <iostream>
using namespace std;

int main() {
    // статический конус с центром в начале координат
    Cone cone1(2, 4);
    cout << "Cone 1:" << endl;
    cout << "Surface area: " << cone1.surfaceArea() << endl;
    cout << "Volume: " << cone1.volume() << endl << "\n";

    // статический произвольный конус
    Cone cone2(1, 2, 3, 4, 5);
    cout << "Cone 2:" << endl;
    cout << "Surface area: " << cone2.surfaceArea() << endl;
    cout << "Volume: " << cone2.volume() << endl << "\n";

    // динамический конус по умолчанию
    Cone* cone3 = new Cone();
    cout << "Enter data for cone 3:" << endl;
    cone3->input();
    cout << "Cone 3:" << endl;
    cout << "Surface area: " << cone3->surfaceArea() << endl;
    cout << "Volume: " << cone3->volume() << endl << "\n";

    // массив конусов
    Cone cones[3] = {
        Cone(1, 1, 1, 2, 3),
        Cone(2, 3),
        Cone()
    };
    cout << "Cone 4:" << endl;
    cones[0].display();
    cout << "Surface area: " << cones[0].surfaceArea() << endl;
    cout << "Volume: " << cones[0].volume() << endl << "\n";
    cout << "Cone 5:" << endl;
    cones[1].display();
    cout << "Surface area: " << cones[1].surfaceArea() << endl;
    cout << "Volume: " << cones[1].volume() << endl << "\n";
    cout << "Cone 6:" << endl;
    cones[2].input();
    cout << "Surface area: " << cones[2].surfaceArea() << endl;
    cout << "Volume: " << cones[2].volume() << endl << "\n";

    delete cone3;
    return 0;
}