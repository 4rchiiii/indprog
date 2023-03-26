#ifndef CONE_H
#define CONE_H

class Cone {
private:
    double x, y, z; // ���������� ������ ���������
    double r;       // ������ ���������
    double h;       // ������
public:
    Cone(); // ����������� �� ���������
    Cone(double r, double h); // ����������� ������ � ������� � ������ ���������
    Cone(double x, double y, double z, double r, double h); // ����������� ������������� ������
    void input(); // ���� ������
    void display() const; // ����� �� �����
    double surfaceArea() const; // ����������� ������� �����������
    double volume() const; // ����������� ������ ������
};

#endif