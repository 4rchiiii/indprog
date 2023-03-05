#ifndef RATIONAL_H
#define RATIONAL_H

class rational {
public:
    int a, b;
    rational(int a1 = 0, int b1 = 1);
    void set(int a1, int b1);
    void show();
    rational operator+(rational r);
    void operator++();
};

bool operator==(rational r1, rational r2);
bool operator>(rational r1, rational r2);

#endif // RATIONAL_H