#ifndef CONE_H
#define CONE_H

class Cone {
private:
    double x, y, z; // координаты центра основания
    double r;       // радиус основания
    double h;       // высота
public:
    Cone(); // конструктор по умолчанию
    Cone(double r, double h); // конструктор конуса с центром в начале координат
    Cone(double x, double y, double z, double r, double h); // конструктор произвольного конуса
    void input(); // ввод конуса
    void display() const; // вывод на экран
    double surfaceArea() const; // определение площади поверхности
    double volume() const; // определение объёма конуса
};

#endif